#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "oneorfactorial.h"

int mainoneorfactorial(){
    int n = 0;// numero que vai ser o objetivo para que i seja somado até chegar nele
    float r = 0.0;// resultado
    printf(" digite um numero de i para descobrir a soma de um factorial");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){//fatorial de um numero terminado
        //cálculo do fatorial
        //  printf(" p = %d.\n", i);
        int f = 1;// semente do fatorial (tem que ser um)
        for (int j = 1; j <= i; j++)
            f = f * j;// o f é o 1 + j sendo que jota é o numero de interações que o for anterior obteve
        float p = f;// a float p é a base da divisão
        r = r + (1.0/p);
        printf("i= %d  p = %f (1.0)/p %f r %f.\n", i,  p, 1.0/p, r);
    }// o for da linha 11 repete as operações das linhas 12 a 19 como uma unica interação antes de começar o loop
    printf(" E = %f.\n", r);

    return 0;
}

