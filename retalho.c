#include <stdio.h>
#include <stdlib.h>

int main() {
    float l1b, l2b, l1r, l2r;

    printf("Digite o valor do primeiro lado do buraco: ");
    scanf("%f", & l1b);

    while(l1b < 0.0) {
        printf("Valor invalido. Digite o valor do primeiro lado do buraco: ");
        scanf("%f", &l1b);
    }

    printf("Digite o valor do segundo lado do buraco: ");
    scanf("%f", & l2b);

    while(l2b < 0.0) {
        printf("Valor invalido. Digite o valor do segundo lado do buraco: ");
        scanf("%f", &l2b);
    }

    do {
        printf("Digite o valor do primeiro lado do retalho: ");
        scanf("%f", & l1r);

        printf("Digite o valor do segundo lado do retalho: ");
        scanf("%f", & l2r);

        if(l1r >= l1b && l2r >= l2b){
            printf("\n\nO retalho cobriu o buraco? S\n\n");
        } else {
            printf("\n\nO retalho cobriu o buraco? N\n\n");
        }
    } while(l1r > 0 || l2r > 0);

    return 0;
}
