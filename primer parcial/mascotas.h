#ifndef MASCOTAS_H_INCLUDED
#define MASCOTAS_H_INCLUDED


typedef struct{

char nombre[50];
int edad;
char sexo;
char tipo[10];
char raza[50];
int idMascota;
int isEmpty;

}eMascota;

void mascotas_harcodear(eMascota listado[],int tam);

#endif // MASCOTAS_H_INCLUDED

