#include <stdio.h>
#include <math.h>

// protótipo de funções
int testar_primalidade(int);
int contar_primos(int);

int main() {
	int i;

	for(i = 2; i <= 20; i++)
		printf("[2 - %d]: %d\n", i, contar_primos(i));

}

// retorna a qtd de primos entre 2 e N
int contar_primos(int n) {
	int i, contador = 0;

	for(i = 2; i <= n; i++)
		if(testar_primalidade(i))
			contador++;

	return contador;
}

int testar_primalidade(int n) {
	int i;

	for(i = 2; i < n; i++)
		if(n % i == 0)
			return 0;

	return 1;
}
