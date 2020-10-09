#include <stdio.h>
#include <stdlib.h>
#include "validations.h"

int main()
{
    char nombre[20];
    float r=0;

    V_inputFloatMinMax(nombre,20,"ingrese numero:\n","Eso no es un numero\n",&r,-10,50,"fuera de rango\n");
    printf("%f\n",(r+r));
    V_inputText(nombre,10,"ingrese texto\n","Texto invalido\n");
    printf("%s\n",nombre);
    return 0;
}
