#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** \brief verifica si la cadena tiene numeros que se puedan pasar a entero
 *
 * \param
 * \param
 * \return
 *
 */

int V_isStringInteger(char string[])//funciona y con numero negativo.
{
    int answer = 1;
    int i;
    int HyphenC = 0;

    i=0;
    while (string[i] != '\0')
    {
        if (string[i] < '0' || string[i] >'9') //(cadena[i] != '-' && (cadena[i] < '0' || cadena[i] >'9'))
        {
            if(string[i] == '-')
            {
                HyphenC++;
                if (HyphenC>1)
                {
                    answer = 0;
                    break;
                }
            }
            else
            {
                answer = 0;//no es numero
                break;
            }
        }
        i++;
    }
    return answer;//Dice si esta listo para pasar a numero
}

/** \brief convierte la cadena previamente rebisada a enteros
 *
 * \param
 * \param
 * \return
 *
 */


int V_stringToInteger(char string[],int*intNumber)//
{
    int outcome = 0;

    if (V_isStringInteger(string))
    {
        *intNumber=atoi(string);
    }
    else
    {
        //printf("no es posible pasar a numero entero\n");
        return outcome -1;
    }

    return outcome;

}
/** \brief verifica si la cadena tiene numeros que se puedan pasara a float
 *
 * \param
 * \param
 * \return
 *
 */

int V_isStringFloat(char string[])//funciona y con numero negativo. Devuelve 0 o 1
{
    int answer;
    int i;
    int HyphenC = 0;
    int DotCounter = 0;

    answer = 1; // es numero
    i=0;
    while (string[i] != '\0')
    {
        if (string[i] < '0' || string[i] >'9') //(cadena[i] != '-' && (cadena[i] < '0' || cadena[i] >'9'))
        {
            if(string[i] == '-')
            {
                HyphenC++;
                if (HyphenC>1)
                {
                    answer = 0;
                    break;
                }
            }
            else
            {
                if(string[i] == '.')
                {
                    DotCounter++;
                    if (DotCounter>1)
                    {
                        answer = 0;
                        break;
                    }
                }
                else
                {
                    answer = 0;//no es numero
                    break;
                }
            }
        }
        i++;
    }
    return answer;//Dice si esta listo para pasar a numero
}
/** \brief convierte cadena de caracteres a float
 *
 * \param
 * \param
 * \return
 *
 */

float V_stringToFloat(char string[],float*floatNumber)//toma una cadena, la valida y la pasa a entero
{
    int outcome = 0;

    if (V_isStringFloat(string))
    {
        *floatNumber=atof(string);
    }
    else
    {
        //printf("no es posible pasar a numero flotante\n");
        return outcome -1;
    }

    return outcome;

}
/** \brief la uso para verificar que la cadena se de solamente letras
 *
 * \param
 * \param
 * \return
 *
 */
int V_isStringLetters(char string[])
{

    int outcome = 0;
    int i=0;
    while(string[i] != '\0')
    {
        if((string[i]>=65 && string[i]<=90) || (string[i]>=97 && string[i] <= 122) || (string[i] == 32))
        {
            if(string[i]==32)
            {
                if(string[i--]!=((string[i]>=65 && string[i]<=90) || (string[i]>=97 && string[i] <= 122)) && (string[i++]!=((string[i]>=65 && string[i]<=90) || (string[i]>=97 && string[i] <= 122))))
                    outcome = 0;
            }
            else
            {
                outcome = 1;
            }
        }
        i++;
    }
    return outcome;
}
int V_isSexMF(char string[])//returns 1 if the letter is F or M
{
    int outcome = 0;
    int question;
    question=V_isStringLetters(string);
    if(question)
    {
        string[0]=tolower(string[0]);
        if ((strcmp(string,"f")==0) || (strcmp(string,"m")==0))
        {
                outcome =1;
        }
    }

    return outcome;
}
/** \brief toma cadena de caracteres y arregla el problema del fgets
 *
 * \param
 * \param
 * \return
 *
 */

int V_ggets(char string[],int size) //funciona - toma la cadena   - PRIMERO
{
    int outcome = -1;

    fflush(stdin);
    fgets(string,size,stdin);
    string[strlen(string)-1]='\0';//Fix del fgets

    return outcome = 0;
}
/** \brief tomacadenas de caracteres y verifica que sean mas grande de lo establecido
 *
 * \param
 * \param
 * \return
 *
 */
int V_sizeValidation(char string[],int size) //funciona - ve el tamaño  - SEGUNDO
{
    int outcome = -1;
    while ((strlen(string)) > (size-3))
    {
        printf("Exece la longitud, intente nuevamente\n");
        fflush(stdin);
        V_ggets(string,size);
    }
    outcome = 1;
    return outcome;

}
int V_inputText(char string[],char text[256],char errorText[256],int size)
{
    int i;
    eMascota mascota;
    char stringNombre[50];


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
}
