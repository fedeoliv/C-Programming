#include <stdio.h>

/*
    Todas as conversoes de horario foram feitas em segundos, pois se convertemos
    em funcao de minutos ou horas, teremos valores quebrados em alguns casos de testes,
    alterando o resultado final.

    DIA_COMUM: Transformando horas do dia comum em segundos.
               24h * 3600 seg = 86400 seg

    DIA_DEC:   Transformando horas do dia decimal em segundos decimais.
               10h * 100 min * 100 seg = 100000 seg decimais


    Para as variaveis a seguir, fazemos uma conversao de intervalos de um dia comum em um
    dia decimal.

    HORA_DEC:  100 h decimais * 3600 seg comuns = 360000 seg decimais
    MIN_DEC:   100 min decimais * 60 min comuns = 6000 min decimais
    SEG_DEC:   100 segundos decimais.
*/

#define DIA_COMUM 86400
#define DIA_DEC 100000
#define HORA_DEC 360000
#define MIN_DEC 6000
#define SEG_DEC 100

int main() {
    /*
        cte_prop: Constante de proporcao do dia decimal em relacao ao dia comum.
                  Quando criamos as variaveis no define, convertendo tudo para segundos
                  decimais, nao podemos esquecer que nao podemos ultrapassar o limite
                  de 1 dia completo. Portanto, o resultado final deve ser multiplicado
                  pela proporcao.
    */

    double cte_prop = (double) DIA_DEC / (DIA_COMUM);
    int hora, min, seg, centesimos;
    long int resultado;


    while(scanf("%2d%2d%2d%2d", &hora, &min, &seg, &centesimos) != EOF) {
        resultado = (hora*HORA_DEC) + (min*MIN_DEC) + (seg*SEG_DEC) + centesimos;
        printf("%07li\n", (long int) (resultado * cte_prop));
    }

    return 0;
}
