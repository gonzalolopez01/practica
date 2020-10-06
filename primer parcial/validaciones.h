#ifndef VALIDACIONES_H_INCLUDED
#define VALIDACIONES_H_INCLUDED

#ifndef VALIDATIONS_H_INCLUDED
#define VALIDATIONS_H_INCLUDED

int V_isStringInteger(char string[]);
int V_stringToInteger(char string[],int*intNumber);

float V_stringToFloat(char string[],float*floatNumber);
int V_isStringFloat(char string[]);//funciona y con numero negativo. Devuelve 0 o 1

int V_isStringLetters(char[]);
int V_isSexMF(char string[]);

#endif // VALIDATIONS_H_INCLUDED


#endif // VALIDACIONES_H_INCLUDED
