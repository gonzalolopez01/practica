#include "mascotas.h"

void mascotas_harcodear(eMascota listado[],int tam)
{
    char nombre[10][50]={"Pipo","Tobi","Lola","Rubio","Negro",};
    int edad[10]={5,3,9,1,2};
    char sexo[10]={'m','m','f','m','m'};
    char tipo[10][50]={"gato","perro","gato","perro","gato"};
    char raza[10][50]={"siames","doberman","persa","pastor belga","siames"};
    int idMascota[10]={1,2,3,4,5};


    int i;
    for(i=0;i<tam;i++)
    {
        strcpy(listado[i].nombre,nombre[i]);
        listado[i].edad=edad[i];
        listado[i].sexo=sexo[i];
        strcpy(listado[i].tipo,tipo[i]);
        strcpy(listado[i].raza,raza[i]);
        listado[i].idMascota=idMascota[i];
    }
}



/*eMascotas mascotas_cargarUna()
{
    int i;
    eMascota mascota;
    char stringNombre[50];
    char stringEdad[5];
    char stringSexo[5];
    char stringTipo[10];


    printf("INGRESE nombre: ");
    ggets(stringNombre,40);
    sizeValidation(stringNombre,40);
    while(!isStringLetters(stringNombre))
    {
        printf("ERROR, REINGRESE nombre: \n");
        ggets(stringNombre,40);
        sizeValidation(stringNombre,40);
    }
    for(i=0; i < 40; i++)
    {
        if (i == 0)
        {
            stringNombre[i] = toupper(stringNombre[i]);
        }
        else
        {
            if (stringNombre[i] == ' ')
            {
                stringNombre[i+1] = toupper (stringNombre[i+1]);
            }
        }
    }
    strcpy(mascota.nombre,stringNombre);

    printf("INGRESE edad: "); //arreglar los negativos!!!!!!!
    ggets(stringEdad,5);
    sizeValidation(stringEdad,5);
        while (!isStringInteger(stringEdad))///arreglarlo usando una condicion en el while
        {
            printf("Valor invalido, reingrese edad:\n");
            ggets(stringEdad,5);
            sizeValidation(stringEdad,5);
        }
    stringToInteger(stringEdad,&mascota.edad);

    printf("INGRESE sexo: ");
    ggets(stringSexo,5);
    sizeValidation(stringSexo,5);
    while(!isStringLetters(stringSexo))
    {
        printf("ERROR, REINGRESE edad: \n");
        ggets(stringSexo,5);
        sizeValidation(stringSexo,5);
    }
    for(i=0; i < 5; i++)
    {
        if (i == 0)
        {
            stringName[i] = toupper(stringName[i]);
        }
        else
        {
            if (stringName[i] == ' ')
            {
                stringName[i+1] = toupper (stringName[i+1]);
            }
        }
    }
    strcpy(employee.name,stringName);

    printf("INGRESE SALARIO: "); //arreglar los negativos!!!!!!!
    ggets(stringSalary,10);
    sizeValidation(stringSalary,10);
        while (!isStringFloat(stringSalary))///arreglarlo usando una condicion en el while
        {
            printf("Valor invalido, reingrese un numero:\n");
            ggets(stringSalary,10);
            sizeValidation(stringSalary,10);
        }
    stringToFloat(stringSalary,&employee.salary);

    printf("INGRESE SECTOR: "); //arreglar los negativos!!!!!!!
    ggets(stringSector,5);
    sizeValidation(stringSector,5);
        while (!isStringInteger(stringSector))///arreglarlo usando una condicion en el while
        {
            printf("Valor invalido, reingrese un numero:\n");
            ggets(stringSector,5);
            sizeValidation(stringSector,5);
        }
    stringToInteger(stringSector,&employee.sector);

    int id=value;
    idGenerator(id,&id);
    *idNumber=id;
    employee.id=id;
    employee.isEmpty=FULL;

    return employee;
}

    return mascota;
}

void cargaVectorMascotas(eMascotas listaMascotas[],int cant)
{
    int i;
    int opcion;
    do
    {

        i = buscarEmpty(listaMascotas,cant);

        if (i != -1)
        {
            listaMascotas[i]=CargarUnaMascota();
        }
        else
        {
            printf("Falta de espacio, no es posible ingresar mascotas nuevas");
        }
        printf("\nPreciones '1' para ingresar otra mascota.");
        scanf("%d",&opcion);
    }while (opcion==1);
}
int buscarEmpty(eMascotas listaMascotas[],int cant)//posicion -1 = no hay EMPTY
{
    int i;
    int aux;
    int posicion;
    posicion=-1;

    for(i=0;i<cant;i++)
    {
        aux=isEmpty(listaMascotas,i);
        if (aux == EMPTY)
        {
            posicion=i;
            break;
        }
    }
    return posicion;
}

int isEmpty(eMascotas listaMascotas[],int posicion)//1 empty; 0 full
{
    int valor=FULL;
    if (listaMascotas[posicion].estado==EMPTY)
    {
        valor=EMPTY;
    }
    return valor;
}
*/
