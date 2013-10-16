#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que recebe uma lista de quatro numeros inteiros
    (c, l, p e t) com comprimento, largura e profundidade de uma piscina (em cm)
    e o tamanho (t) de um azulejo quadrado (em cm) e indique o número
    de azulejos necessários para azulejar as paredes e o fundo da piscina.
    Considere  que seja necessário um azulejo inteiro para cada corte de azulejo.

    Entrada: 2000, 500, 200, 10
    Saída: 20000
*/

int calcula_areaTotal(int c, int l, int p);

int main() {
    int c, l, p, t, area_piscina, area_azulejo, total;

    printf("Entre com o comprimento da piscina (em cm):  ");
    scanf("%d", &c);

    while(c <= 0.0) {
        printf("Comprimento invalido. Digite novamente:  ");
        scanf("%d", &c);
    }

    printf("Entre com a largura da piscina (em cm):      ");
    scanf("%d", &l);

    while(l <= 0.0) {
        printf("Largura invalida. Digite novamente:      ");
        scanf("%d", &l);
    }

    printf("Entre com a profundidade da piscina (em cm): ");
    scanf("%d", &p);

    while(p <= 0.0) {
        printf("Profundidade invalida. Digite novamente: ");
        scanf("%d", &p);
    }

    printf("Entre com o tamanho do azulejo (em cm):      ");
    scanf("%d", &t);

    while(t <= 0.0) {
        printf("Tamanho invalido. Digite novamente:      ");
        scanf("%d", &t);
    }

    area_piscina = calcula_areaTotal(c, l, p);
    area_azulejo = t * t;

    if((area_piscina % area_azulejo) == 0) {
        total = area_piscina / area_azulejo;
    } else {
        total = (area_piscina / area_azulejo) + 1;
    }

    printf("\n\nResultado: Serao necessarios %d azulejos.", total);
}

int calcula_areaTotal(int c, int l, int p) {
    return 2 * (l * p) + 2 * (c * p) + (l * c);
}

