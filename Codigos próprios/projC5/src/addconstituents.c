#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "addconstituents.h"

int mainaddconstituents(){
    int i, lista[5] = {3,51,18,2,45};
    int soma = 0;
    for(i=0;i<5;i++)
        soma =soma +lista[i];
    printf("Soma = %d\n", soma);
    return 0;
}