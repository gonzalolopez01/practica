#ifndef VALIDATIONS,H_H_INCLUDED
#define VALIDATIONS,H_H_INCLUDED

int V_isStringInteger(char string[]);
int V_stringToInteger(char string[],int*intNumber);

float V_stringToFloat(char string[],float*floatNumber);
int V_isStringFloat(char string[]);//funciona y con numero negativo. Devuelve 0 o 1

int V_isStringLetters(char[]);
int V_isSexMF(char string[]);

int V_inputText(char string[],int size,char text[256],char errorText[256]);



#endif // VALIDATIONS,H_H_INCLUDED
