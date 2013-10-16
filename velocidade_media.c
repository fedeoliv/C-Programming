#include <stdio.h>
#include <stdlib.h>

/*
   Programa que calcula a velocidade média.
   O usuário deve entrar com o valor do deslocamento (em km) e o tempo (em h).

   Obs.: A distância e o tempo não podem ser negativos e nem zero.
*/

int main() {
    float deslocamento, tempo, vm;

    printf("Digite o valor do deslocamento (em km): ");
    scanf("%f", &deslocamento);

    while(deslocamento <= 0.0) {
        printf("Deslocamento invalido. Digite o valor do deslocamento (em km): ");
        scanf("%f", &deslocamento);
    }

    printf("Digite o valor do tempo (em h): ");
    scanf("%f", &tempo);

    while(tempo <= 0.0) {
        printf("Tempo invalido. Digite o valor do tempo (em h): ");
        scanf("%f", tempo);
    }

    vm = deslocamento / tempo;

    printf("\n\nVelocidade Media: %.1f km/h\n\n", vm);
}



#include <stdio.h>
#include <stdlib.h>

/*
   Programa que calcula a velocidade média.
   O usuário deve entrar com o valor do deslocamento (em km) e o tempo (em h).

   Obs.: A distância e o tempo não podem ser negativos e nem zero.
*/

int main() {
    float deslocamento, tempo;

    printf("Digite o valor do deslocamento (em km): ");
    scanf("%f", &deslocamento);

    while(deslocamento <= 0.0) {
        printf("Deslocamento invalido. Digite o valor do deslocamento (em km): ");
        scanf("%f", &deslocamento);
    }

    printf("Digite o valor do tempo (em h): ");
    scanf("%f", &tempo);

    while(tempo <= 0.0) {
        printf("Tempo invalido. Digite o valor do tempo (em h): ");
        scanf("%f", tempo);
    }

    printf("\n\nVelocidade Media: %.1f km/h\n\n", deslocamento / tempo);
}



