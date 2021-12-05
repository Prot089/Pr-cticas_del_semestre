// C*lase_Practica_9.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
#include<stdlib.h>
#include<conio.h>

using namespace std;


void pedir_datos();
void mostrar_matriz(int**, int,int);
int **puntero_matriz, nfilas, ncolum;

int main()
{
    /*
    setlocale(LC_ALL, "spanish");
    int edad_yo = 21;
    int* Apuntador_Edad_yo = &edad_yo;

    cout << "El apuntador con asterisco imprime : " << *Apuntador_Edad_yo << " El valor de la direccion apuntada" << endl;

    cout << "El apuntador sin asterisco imprime : " << Apuntador_Edad_yo << " Direccion de memoria" << endl;

    cout << "El apuntador con ampersand imprime : " << &Apuntador_Edad_yo << " Direccion de la memoria propia" << endl;
    */
    
    /*
    cout << "Por favor, ingresa datos de tipo entero" << endl;

    int Matriz[2][3], *Apuntador_Matriz[2][3];

    for (int i = 0; i < 2; i++) {
        
        for (int j = 0; j < 3; j++)
        {
            cout << "Ingresa el numero [" << i << "]" << "[" << j << "]" << endl;
            cin >> Matriz[i][j];
            cout << "El numero se guardo en la posicion " << &Apuntador_Matriz << endl;
            cout << "El numero se guardo en la posicion " << Apuntador_Matriz << endl;
        }
    }
    
    cout << "Matriz:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "[" << Matriz[i][j] << "] ";
        }
        cout << "\n";
    }
    cout << "\n";
    */

    
    pedir_datos();
    mostrar_matriz(puntero_matriz, nfilas, ncolum);

    for (int i = 0; i < nfilas; i++) {
        delete[] puntero_matriz[i];
    }
    delete[] puntero_matriz;
    
}

void pedir_datos()
{

    cout << "Por favor, digite el numero de filas" << endl;
    cin >> nfilas;
    cout << "Por favor, digite el numero de columnas" << endl;
    cin >> ncolum;

    puntero_matriz = new int*[nfilas];
    for (int i = 0; i < nfilas; i++)
    {
        puntero_matriz[i] = new int[ncolum];
    }

    cout << "\nDigitando elementos de la matriz: \n";
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncolum; j++) {
            cout << "Digite un numero [" << i << "]" << "[" << j << "]: " << endl;
            cin >> *(*(puntero_matriz + i) + j);
        }
    }
}

void mostrar_matriz(int** puntero_matriz, int nfilas, int ncolum) {
    cout << "\n\nImprimiendo datos de la matriz:\n";
    for (int i = 0; i < nfilas; i++) {
        for (int j = 0; j < ncolum; j++) {
            cout << * (*(puntero_matriz + i) + j) << " ";
        }
        cout << "\n";
    }
}


