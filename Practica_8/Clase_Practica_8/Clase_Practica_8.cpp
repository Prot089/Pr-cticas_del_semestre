// Clase_Practica_9_zap561.cpp
// Omar Alejandro Angeles Hernández
// Arreglos Matriciales


#include <iostream>
using namespace std;

int main()
{
    /*
    int edades[3][2] = {{1,2},{9,8},{14,21}};
    int filas = (sizeof(edades) / sizeof(edades[0]));
    cout << "edades: " << sizeof(edades) << endl;
    cout << "edades[0]: " << sizeof(edades[0]) << endl;
    int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
    cout << "edades[0][0]: " << sizeof(edades[0][0]) << endl;
    cout << "Filas: " << filas << endl;
    cout << "Columnas: " << columnas << endl;
    */
    int matriz1[3][3];
    int matriz2[5][5];
    int matriz3[10][10];

    cout << "Matriz 1:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz1[i][j] = rand() % 11;
            cout << "[" << matriz1[i][j] << "] ";
        }
        cout << "\n";
    }
    cout << "\n";

    cout << "Matriz 2:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz2[i][j] = rand() % 11;
            cout << "[" << matriz2[i][j] << "] ";
        }
        cout << "\n";
    }
    cout << "\n";

    cout << "Matriz 3:" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matriz3[i][j] = rand() % 11;
            cout << "[" << matriz3[i][j] << "] ";
        }
        cout << "\n";
    }
    cout << "\n";
}
