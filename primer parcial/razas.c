#include "razas.h"

void razas_harcodear(eRazas listado[],int tam)
{
    char descripcion[10][50]={"siames","doberman","persa","pastor belga"};
    char tamanio[10][50]={"chico","grande","mediano","grande"};
    char paisOrigen[10][50]={"tailandia","alemania","persia","belgica"};

    int i;
    for(i=0;i<tam;i++)
    {
        strcpy(listado[i].descripcion,descripcion[i]);
        strcpy(listado[i].tamanio,tamanio[i]);
        strcpy(listado[i].paisOrigen,paisOrigen[i]);
    }
}
