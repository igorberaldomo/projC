#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "hourdaymonthyear.h"
int mainHourdaymonthyear()
{
    time_t tempo;
    struct tm *infotempo;
    char texto[80];
    time(&tempo);
    infotempo = localtime(&tempo);
    strftime(texto, 80, "Hora atual %I:%M%p.", infotempo);
    puts(texto);
    strftime(texto, 80, "Data: %A, %d/%b/%Y", infotempo);
    puts(texto);
    system("Pause");
    return 0;
}