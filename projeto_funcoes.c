// ATTENTION: O código funcionará apenas na plataforma Windows.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* menuPrincipal(): Função responsável por montar o menu principal do projeto,
               atribuindo a descrição das opções destinadas ao usuário. */
void menuPrincipal(){
   printf("Selecione a opcao desejada:");
   printf("[1] Calcular equacao de 2 grau");
   printf("[2] Calcular fatorial");

   printf("[3] Calcular multiplos");

   printf("[4] Ordenar valores em ordem crescente");

   gotoxy(20, 13);
   printf("[5] Sair");
}

/* calc_eq2grau(): Função responsável por apresentar os resultados de uma função
                   de 2º grau, como por exemplo o valor do delta e suas raízes reais. */
void calc_eq2grau(){
   limpar: system("CLS");
   char opcao = 0;
   float a = 0, b = 0, c = 0, delta = 0, x1 = 0, x2 = 0;

   verifica_a:
   printf("Digite o valor de 'a': ");

   if(scanf("%f", &a) == 0) {
       system("CLS");
       scanf("%*c");
       goto verifica_a;
   } else {
      verificacao:if(a == 0){
         system("CLS");

         printf("A equacao deve ser de 2 grau. Digite o valor de 'a': ");
         scanf("%f", &a);

         goto verificacao;
      }
   }

   verifica_b:
   printf("Digite o valor de 'b': ");

   if(scanf("%f", &b) == 0) {
       system("CLS");

       gotoxy(25, 4);
       printf("Digite o valor de 'a': %.1f", a);

       scanf("%*c");
       goto verifica_b;
   }

   verifica_c:gotoxy(25, 6);
   printf("Digite o valor de 'c': ");

   if(scanf("%f", &c) == 0) {
       system("CLS");

       gotoxy(25, 4);
       printf("Digite o valor de 'a': %.1f", a);

       gotoxy(25, 5);
       printf("Digite o valor de 'b': %.1f", b);

       scanf("%*c");
       goto verifica_c;
   }

   delta = b*b - 4*a*c;

   gotoxy(25, 8);
   printf("--------------------------");

   gotoxy(25, 10);
   printf("Delta = %.2f", delta);

   if(delta < 0){
      gotoxy(25, 11);
      printf("Nao existem raÖzes reais");

      gotoxy(25, 13);
      printf("--------------------------");
   } else {
      x1 = (-b + sqrt(delta))/(2*a);
      x2 = (-b - sqrt(delta))/(2*a);

      gotoxy(25, 12);
      printf("RaÖzes: x1 = %.2f", x1);

      gotoxy(25, 14);
      printf("        x2 = %.2f", x2);

      gotoxy(25, 16);
      printf("--------------------------");
   }

   opcoes:gotoxy(25, 18);
   printf("[N] Novo");

   gotoxy(25, 19);
   printf("[M] Menu Principal");

   gotoxy(25, 20);
   printf("[S] Sair              ");

   opcao = getch();

   while(opcao!='S' && opcao!='s'){
       if(kbhit())opcao=getch();

       if(opcao == 'M' || opcao == 'm'){
          main();
       }

       if(opcao == 'N' || opcao == 'n'){;
          goto limpar;
       }
    }

   gotoxy(25, 18);
   printf("Deseja realmente sair?");

   gotoxy(25, 19);
   printf("                  ");

   gotoxy(25, 20);
   printf("[1] Sim        [2] Nao");

   opcao = getch();

   while(opcao!='1'){
       if(kbhit())opcao=getch();

       if(opcao == '2'){
          goto opcoes;
       }
    }

    exit(0);
}

/*calc_fatorial(): Função responsável por trazer o fatorial
                 de um número definido pelo usuário. */
void calc_fatorial(void){
   limpar:system("CLS");
   int valor = 0, i = 0;
   double fatorial = 1;
   char opcao = 0;

   verifica_valor:gotoxy(16, 4);
   printf("Digite o valor para calcular o fatorial: ");

   if(scanf("%d", &valor) == 0) {
       system("CLS");

       scanf("%*c");
       goto verifica_valor;
   } else {
       if(valor < 0){
          system("CLS");
          goto verifica_valor;
       }
   }

   while(valor >= 1){
       fatorial = fatorial * valor;
       valor--;
   }

   gotoxy(16, 6);
   printf("--------------------------------------------");

   gotoxy(16, 8);
   printf("Fatorial = %.0f", fatorial);

   gotoxy(16, 10);
   printf("--------------------------------------------");

   opcoes:gotoxy(16, 12);
   printf("[N] Novo              ");

   gotoxy(16, 13);
   printf("[M] Menu Principal");

   gotoxy(16, 14);
   printf("[S] Sair              ");

   opcao = getch();

   while(opcao!='S' && opcao!='s'){
       if(kbhit())opcao=getch();

       if(opcao == 'M' || opcao == 'm'){
          main();
       }

       if(opcao == 'N' || opcao == 'n'){;
          goto limpar;
       }
    }

   gotoxy(16, 12);
   printf("Deseja realmente sair?");

   gotoxy(16, 13);
   printf("                  ");

   gotoxy(16, 14);
   printf("[1] Sim        [2] Nao");

   opcao = getch();

   while(opcao!='1'){
       if(kbhit())opcao=getch();

       if(opcao == '2'){
          goto opcoes;
       }
    }

    exit(0);
}

/* calc_multiplos(): Função responsável por calcular os múltiplos de
                     dois valores definidos pelo usuário. */
void calc_multiplos(){
   limpar:system("CLS");
   int i = 0, valor1 = 0, valor2 = 0, multiplos = 0, total = 0;
   char opcao = 0;

   verificaValor1:gotoxy(22, 4);
   printf("Digite o valor a ser multiplicado: ");

   if(scanf("%d", &valor1) == 0) {
       system("CLS");

       scanf("%*c");
       goto verificaValor1;
   } else {
       if(valor1 < 0){
          system("CLS");
          goto verificaValor1;
       }
   }

   verificaValor2:gotoxy(22, 5);
   printf("Valor anterior como multiplo de:   ");

   if(scanf("%d", &valor2) == 0) {
       system("CLS");

       gotoxy(22, 4);
       printf("Digite o valor a ser multiplicado: %d", valor1);

       scanf("%*c");
       goto verificaValor2;
   } else {
       if(valor2 < 0){
          system("CLS");

          gotoxy(22, 4);
          printf("Digite o valor a ser multiplicado: %d", valor1);

          goto verificaValor2;
      }
   }

   gotoxy(16, 7);
   printf("-----------------------------------------------");

   gotoxy(16, 9);

   while(multiplos <= valor2){
   /*multiploAnterior: utilizada apenas para não imprimir o mesmo múltiplo várias vezes.
     Ex.: 0 múltiplo de 2. Em vez de imprimir |0| |0|, imprime apenas uma vez o 0.
   */
      if(valor1 == 0){
          printf ("|0|");
          break;
      }
      multiplos = valor1 * i;

      if (multiplos <= valor2){
          total ++;
          printf ("|%d| ", multiplos);
      }

      i++;
   }

   //Verificação: se houver muitos valores múltiplos, coloca a linha mais abaixo
   if(total <= 20){
      gotoxy(16, 11);
   } else {
      gotoxy(16, 16);
   }

   printf("-----------------------------------------------");

   opcoes:gotoxy(22, 18);
   printf("[N] Novo");

   gotoxy(22, 19);
   printf("[M] Menu Principal");

   gotoxy(22, 20);
   printf("[S] Sair              ");

   opcao = getch();

   while(opcao!='S' && opcao!='s'){
       if(kbhit())opcao=getch();

       if(opcao == 'M' || opcao == 'm'){
          main();
       }

       if(opcao == 'N' || opcao == 'n'){;
          goto limpar;
       }
    }

   gotoxy(22, 18);
   printf("Deseja realmente sair?");

   gotoxy(22, 19);
   printf("                  ");

   gotoxy(22, 20);
   printf("[1] Sim        [2] Nao");

   opcao = getch();

   while(opcao!='1'){
       if(kbhit())opcao=getch();

       if(opcao == '2'){
          goto opcoes;
       }
    }

    exit(0);
}

/* ordenar(): Função responsável por ordenar em ordem crescente
              três valores definidos pelo usuário. Para isso, foi utilizado,
              além dos três valores, uma variável auxiliar, fazendo com que
              aconteça uma troca de valores entre as variáveis para definir
              a ordem correta das mesmas. */
void ordenar(){
/* se(a>b) então { aux=a; a=b; b=aux }
se(b>c) então { aux=b; b=c; c=aux }
se(a>b) então { aux=a; a=b; b=aux }*/
   limpar:system("CLS");
   float valor1 = 0, valor2 = 0, valor3 = 0, aux = 0;
   char opcao = 0;

   verificaValor1:gotoxy(25, 4);
   printf("Digite o primeiro valor: ");

   if(scanf("%f", &valor1) == 0) {
       system("CLS");
       scanf("%*c");
       goto verificaValor1;
   } else {
       if(valor1 < 0){
          goto limpar;
       }
   }

   verificaValor2:gotoxy(25, 5);
   printf("Digite o segundo valor:  ");

   if(scanf("%f", &valor2) == 0) {
       system("CLS");

       gotoxy(25, 4);
       printf("Digite o primeiro valor: %.1f", valor1);

       scanf("%*c");
       goto verificaValor2;
   } else {
       if(valor2 < 0){
          system("CLS");

          gotoxy(25, 4);
          printf("Digite o primeiro valor: %.1f", valor1);

          goto verificaValor2;
      }
   }

   verificaValor3:gotoxy(25, 6);
   printf("Digite o terceiro valor: ");

   if(scanf("%f", &valor3) == 0) {
       system("CLS");

       gotoxy(25, 4);
       printf("Digite o primeiro valor: %.1f", valor1);

       gotoxy(25, 5);
       printf("Digite o segundo valor:  %.1f", valor2);

       scanf("%*c");
       goto verificaValor3;
   } else {
       if(valor3 < 0){
          system("CLS");

          gotoxy(25, 4);
          printf("Digite o primeiro valor: %.1f", valor1);

          gotoxy(25, 5);
          printf("Digite o segundo valor:  %.1f", valor2);

          goto verificaValor3;
        }
   }

   if(valor1 > valor2){
      aux = valor1;
      valor1 = valor2;
      valor2 = aux;
   }

   if(valor2 > valor3){
      aux = valor2;
      valor2 = valor3;
      valor3 = aux;
   }

   if(valor1 > valor2){
      aux = valor1;
      valor1 = valor2;
      valor2 = aux;
   }

   gotoxy(25, 8);
   printf("----------------------------------");

   gotoxy(25, 10);
   printf("Ordem crescente: %.1f, %.1f, %.1f.", valor1, valor2, valor3);

   gotoxy(25, 12);
   printf("----------------------------------");

   opcoes:gotoxy(25, 18);
   printf("[N] Novo");

   gotoxy(25, 19);
   printf("[M] Menu Principal");

   gotoxy(25, 20);
   printf("[S] Sair              ");

   opcao = getch();

   while(opcao!='S' && opcao!='s'){
       if(kbhit())opcao=getch();

       if(opcao == 'M' || opcao == 'm'){
          main();
       }

       if(opcao == 'N' || opcao == 'n'){;
          goto limpar;
       }
    }

   gotoxy(25, 18);
   printf("Deseja realmente sair?");

   gotoxy(25, 19);
   printf("                  ");

   gotoxy(25, 20);
   printf("[1] Sim        [2] Nao");

   opcao = getch();

   while(opcao!='1'){
       if(kbhit())opcao=getch();

       if(opcao == '2'){
          goto opcoes;
       }
    }

    exit(0);
}

/* main(): Função principal do sistema. Função responsável por chamar o menu
           do projeto e redirecionar a opção desejada pelo usuário
           à função responsável pela execução da mesma. */
int main (){
   char opcao = 0;

   menuPrincipal();
   opcao = getch();

   while(opcao!='5'){
       if(kbhit())opcao = getch();
       if(opcao == '1'){
          opcao = 0;
          calc_eq2grau();
       }

       if(opcao == '2'){
          opcao = 0;
          calc_fatorial();
       }

       if(opcao == '3'){
          opcao = 0;
          calc_multiplos();
       }

       if(opcao == '4'){
          opcao = 0;
          ordenar();
       }
   }

   return 0;
}


