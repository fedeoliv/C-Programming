#include <stdio.h>
#include <stdlib.h>

void preencherAleatorios();

int main() {
    preencherAleatorios();
}

void preencherAleatorios() {
    int i;
    int valores[21];

    for(i = 0; i <= 20; i++) {
        valores[i] = rand();
        printf("%d \n", valores[i]);
    }
}
