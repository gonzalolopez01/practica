#ifndef MASCOTAS_RAZAS_H_INCLUDED
#define MASCOTAS_RAZAS_H_INCLUDED


typedef struct{

char nombre[50];
int edad;
char sexo;
char tipo[10];
char raza[50];
int idMascota;
int isEmpty;

}eMascota;

typedef struct{
char descripcion[50];
char tamanio[50];
char paisOrigen[50];

}eRazas;

void mascotas_listadoRazasPaisesO(eMascota listadoMascotas[], int tamMascotas,eRazas listadoRazas[],int tamRazas);


#endif // MASCOTAS_RAZAS_H_INCLUDED
