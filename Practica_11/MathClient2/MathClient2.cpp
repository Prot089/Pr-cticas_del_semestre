// MathClient2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Alejandro Angeles

#include <iostream>
#include "MathLibrary2.h"
#include <conio.h>

int imprimir(int a, int b) {

    std::cout << "a + b = " <<
        MathLibrary::Arithmetic::Add(a, b) << std::endl;
    std::cout << "a - b = " <<
        MathLibrary::Arithmetic::Subtract(a, b) << std::endl;
    std::cout << "a * b = " <<
        MathLibrary::Arithmetic::Multiply(a, b) << std::endl;
    std::cout << "a / b = " <<
        MathLibrary::Arithmetic::Divide(a, b) << std::endl;

    return 0;
}

int recibir(double r, int j) {
    double a = 7.4;
    double b = 99;
    imprimir(a, b);

    return 0;
}

int main()
{
    int recibir();
    int imprimir();
    return 0;
}


