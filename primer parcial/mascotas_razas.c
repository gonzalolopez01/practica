#include "mascotas_razas.h"

void mascotas_listadoRazasPaisesO(eMascota listadoMascotas[], int tamMascotas,eRazas listadoRazas[],int tamRazas)
{
    int i;
    int j;
    printf("LISTADO DE MASCOTAS\nNombre-----|----Edad----|----Sexo----|----Tipo----|----Descripcion----|---Pais de Origen----|\n");
    for(i=0;i<tamMascotas;i++)
    {
        for(j=0;j<tamRazas;j++)
        {
            if (!strcmp(listadoMascotas[i].raza,listadoRazas[j].descripcion))
            {
                printf("%-16s %-12d %-11c %-12s %-18s %-10s\n", listadoMascotas[i].nombre,listadoMascotas[i].edad,listadoMascotas[i].sexo,listadoMascotas[i].tipo,listadoRazas[j].descripcion,listadoRazas[j].paisOrigen);
            }
        }
    }
}

