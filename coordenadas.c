#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char direcao;
    int x, y, deslocamento;
    float deslocFinal;

    printf("Digite o valor da coordenada x: ");
    scanf("%d", &x);

    printf("Digite o valor da coordenada y: ");
    scanf("%d", &y);

    printf("Digite o valor do deslocamento: ");
    scanf("%d", &deslocamento);

    printf("Digite a direcao do deslocamento (N, S, L ou O): ");
    direcao = getch();

    if(direcao == 'N' || direcao == 'n') {
        y += deslocamento;
    } else if(direcao == 'S' || direcao == 's') {
        y -= deslocamento;
    } else if(direcao == 'L' || direcao == 'l') {
        x += deslocamento;
    } else if(direcao == 'O' || direcao == 'o') {
        x -= deslocamento;
    }

    deslocFinal = sqrt((x * x) + (y * y));

    if(y > 0) {
        printf("\n\nDeslocamento final: %dx + %dy = %.1f metros.\n", x, y, deslocFinal);
    } else {
        printf("\n\nDeslocamento final: %dx %dy = %.1f metros.\n", x, y, deslocFinal);
    }
}
