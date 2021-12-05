// zap561_practica4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include <stdbool.h>
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    printf("Hola adorables estudiantes \n");
    printf("Seguimos \n");


    bool mi_primer_booleano;
    int  mi_primer_booleano_temp;
    int mi_primer_entero;
    float mi_primer_flotante;
    double mi_primer_double;
    long double mi_primer_long_double;
    char mi_primer_c[40];
    long long int mi_primer_long_long_int;
    string mi_primer_string;

    printf("Por favor ingresa un valor booleano \n"); 
    scanf_s("%d", &mi_primer_booleano_temp);
    printf("Ingresaste el valor \n");
    mi_primer_booleano = mi_primer_booleano_temp;
    printf("%d", &mi_primer_booleano);
    

    printf("Por favor ingresa un valor entero \n");
    scanf_s("%d", &mi_primer_entero);
    printf("Ingresaste el valor \n");
    printf("%d", &mi_primer_entero);


    printf("Por favor ingresa un valor flotante \n");
    scanf_s("%f", &mi_primer_flotante);
    printf("Ingresaste el valor \n");
    printf("%f", &mi_primer_flotante);


    printf("Por favor ingresa un valor double \n");
    scanf_s("%f", &mi_primer_double);
    printf("Ingresaste el valor \n");
    printf("%f", &mi_primer_double);


    printf("Por favor ingresa un valor long double \n");
    scanf_s("%f", &mi_primer_long_double);
    printf("Ingresaste el valor \n");
    printf("%f", &mi_primer_long_double);


    printf("Por favor ingresa un valor char \n");
    scanf_s("%c", &mi_primer_c);
    printf("Ingresaste el valor \n");
    printf("%c", &mi_primer_c);


    printf("Por favor ingresa un valor long long int \n");
    scanf_s("%d", &mi_primer_long_long_int);
    printf("Ingresaste el valor \n");
    scanf("%d", &mi_primer_long_long_int);

    printf("Por favor ingresa un valor string \n");
    scanf_s("%s", &mi_primer_string);
    printf("Ingresaste el valor \n");
    printf("%s", &mi_primer_string);
}
