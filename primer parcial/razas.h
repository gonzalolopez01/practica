#ifndef RAZAS_H_INCLUDED
#define RAZAS_H_INCLUDED

typedef struct{
char descripcion[50];
char tamanio[50];
char paisOrigen[50];

}eRazas;

void razas_harcodear(eRazas listado[],int tam);

#endif // RAZAS_H_INCLUDED
