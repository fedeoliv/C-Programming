/* 	
	STRINGS EM C: ALGPROG - Prof. Cesar Miguel (prof.cesargm@usjt.br)
	
   	1 - Escreva uma função que receba uma string como parâmetro (entrada) e 
   	retorne a quantidade de caracteres da string.

	2- Escreva uma função que receba duas strings como parâmetro (entrada) e 
	retorne 1, caso as suas strings sejam iguais ou 0, caso contrário.

	3 - Escreva uma função que receba duas strings como parâmetro (entrada) e 
	concatene a segunda string ao final da primeira. Observe que para isso a 
	primeira string deve comportar a quantidade de caracteres da segunda antes 
	de ser feita a concatenação (use a função do exercício 1 como auxiliar). 
	Caso isso não seja possível, a função deverá retornar 0, como erro. Se for 
	possível efetuar a operação, a função retorna 1.
*/

#include <stdio.h>

// protótipos
int tamanho_string(char s[]);
int compara_string(char s1[], char s2[]);
int concatena_string(char s1[], char s2[]);

#define MAX 31

int main() {
	char string1[31] = "teste";
	char string2[31] = "teste2";

	// tamanho das strings
	printf("%d\n", tamanho_string(string1));
	printf("%d\n", tamanho_string(string2));

	// comparando strings
	// o retorno deve ser 0 neste caso
	printf("%d\n", compara_string(string1, string2)); 

	// concatena (o retorno deve ser 1)
	printf("%d\n", concatena_string(string1, string2));
	// resultado
	puts(string1);

	return 0;
}

int tamanho_string(char s[]) {
	int i;
	for(i = 0; s[i] != 0; i++);
	return i;
}

int compara_string(char s1[], char s2[]) {
	int k1 = tamanho_string(s1);
	int k2 = tamanho_string(s2);
	int i;
	
	if(k1 != k2) {
		return 0;
	} else {
		for(i = 0; i < k1; i++)
			if(s1[i] != s2[i])
				return 0;
	}
	
	return 1;
}

int concatena_string(char s1[], char s2[]) {
	int k1 = tamanho_string(s1);
	int k2 = tamanho_string(s2);
	int i;

	if(k1 + k2 > MAX - 1) {
		return 0;
	} else {
		for(i = 0; i <= k2; i++)
			s1[k1 + i] = s2[i];
	}
	
	return 1;
}

