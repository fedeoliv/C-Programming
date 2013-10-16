#include <stdio.h>

int exibirPares();

int main() {
    exibirPares();
}

int exibirPares() {
    int i;
    int pares[21];

    for(i = 0; i <= 20; i++) {
        if(i % 2 == 0) {
            pares[i] = i;
            printf("%d \n", pares[i]);
        }
    }
}
