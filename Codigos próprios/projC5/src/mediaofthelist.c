#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mediaofthelist.h"

int mainmediaofthelist(){
    int i, lista[5] = {3,51,18,2,45};
    int soma = 0;
    for(i = 0; i < 5; i++)
        soma = soma + lista[i];
    float media = soma / 5.0;
    printf("Media  = %f\n", media);
    return 0;
}