#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que recebe três notas de avaliação (entre 0.0 e 10.0)
    e indique o valor da média e se o aluno foi aprovado (média >= 6.0).
    A fórmula é dada por:

    media = (0.2 * p1) + (0.3 * p2) + (0.5 * p3)

    Simulação:

    P1: 1.0
    P2: 3.0
    P3: 4.0
    Media: 3.1 (Reprovado)
    Continua? (S/N)? S
*/

void calculaMedia(float p1, float p2, float p3);

int main() {
    char continuar = 'S';
    float p1, p2, p3;

    while(continuar == 'S' || continuar == 's') {
        printf("Entre com a nota da P1: ");
        scanf("%f", &p1);

        while(p1 < 0.0 || p1 > 10.0) {
            printf("P1 invalida. Digite novamente: ");
            scanf("%f", &p1);
        }

        printf("Entre com a nota da P2: ");
        scanf("%f", &p2);

        while(p2 < 0.0 || p2 > 10.0) {
            printf("P2 invalida. Digite novamente: ");
            scanf("%f", &p2);
        }

        printf("Entre com a nota da P3: ");
        scanf("%f", &p3);

        while(p3 < 0.0 || p3 > 10.0) {
            printf("P3 invalida. Digite novamente: ");
            scanf("%f", &p3);
        }

        calculaMedia(p1, p2, p3);

        printf("\n\nDeseja continuar (S/N)? ");
        continuar = getch();

        printf("\n");
    }

    return 0;
}

void calculaMedia(float p1, float p2, float p3) {
    float media;

    media = (0.2 * p1) + (0.3 * p2) + (0.5 * p3);

    printf("\n\nMedia: %.1f", media);

    if(media >= 6.0) {
        printf("\nSituacao: Aprovado");
    } else {
        printf("\nSituacao: Reprovado");
    }
}
