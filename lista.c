#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que recebe uma lista de números em ponto flutuante
    e indique o maior e o menor valor da lista e a media dos números da lista.

    Simulação:

    Quantos numeros? 4
    Valores de entrada: 1.0; 3.0; 6.0; 2.0
    Menor valor: 1.0
    Maior valor: 6.0
    Media: 3.5
*/

int main() {
    int qtdNotas, i;
    float valorEntrada, menor, maior, media;

    printf("Quantos numeros? ");
    scanf("%d", &qtdNotas);

    printf("\nNota: ");
    scanf("%f", &valorEntrada);

    menor = valorEntrada;
    maior = valorEntrada;

    for(i = 1; i < qtdNotas; i++) {
        printf("\nNota: ");
        scanf("%f", &valorEntrada);

        if(valorEntrada < menor) {
            menor = valorEntrada;
        } else {
            if(valorEntrada > maior) {
                maior = valorEntrada;
            }
        }
    }

    media = (maior + menor) / 2;

    printf("\n\nMenor valor: %.1f", menor);
    printf("\nMaior valor: %.1f", maior);
    printf("\nMedia:       %.1f\n", media);
}

