#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    O programa deve contar o total de caracteres de um texto fornecido pelo usuário.
*/

int main() {
    char texto;
    int caracteres = 0;

    printf("Entre com o texto desejado: ");

    while((texto = getche()) != '\r') {
        caracteres ++;
    }

    printf("\n\nTotal de caracteres: %d", caracteres);
}
