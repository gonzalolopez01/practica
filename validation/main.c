#include <stdio.h>
#include <stdlib.h>
#include "validations.h"

int main()
{
    char nombre[15];
    int r;
    r=V_inputText(nombre,15,"ingrese nombre: ","Eso no es un nombre");
    printf("%s",nombre);
    return 0;
}
