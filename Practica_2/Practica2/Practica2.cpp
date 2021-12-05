// Practica2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Alejandro Angeles
//En esta practica veremos la sintaxis de las palabras reservadas If e If else

#include <iostream>
using namespace std;

int main()
{
    bool flag = true;
    int a, b;
    a = 1;
    b = 2;
    string Correo = "angelesalejandro@live.com.mx";
    string contrasena = "Amerike2001";
    string contrasena_in;
    string correo_in;
    int opcion;
    
    {
        // Palabra reservada entre parentesis se pondra la condicion a cumplir
        // Si no se cumple simplemente se saltara la funcion

        /*Para comentar varias lineas de codigo*/
        if (a + b == 4)
        {
            cout << "el flag es positivo" << endl;
        }
        else // ejecuta todo lo que no es verdadero....
        {
            cout << "Esto se imprime sin importar que" << endl;
        }
        cout << "Aca es fuera de las condiciones..." << endl;

        cout << "ingresa tu correo" << endl;
        cin >> correo_in;
        if (Correo == correo_in)
        {


            cout << "ingresa tu contrasena" << endl;
            cin >> contrasena_in;
            if (contrasena == contrasena_in)
            {
                //solicitar contrasena 

                cout << "Bienvenido" << endl;

            }
            else
            {
                cout << "Intentalo de nuevo - Contrasena incorrecta" << endl;
            }
        }
        else
        {
            cout << "El correo ingresado no esta en la base de datos" << endl;
        }
    }
    cout << "Ingresa una opcion del 1 al 3" << endl;
    cin >> opcion; 
    if (opcion == 1)
    {
        cout << "Escogiste la 1" << endl;
    }
    else if (opcion == 2)
    {
        cout << "pick #2" << endl;
    }
    else if (opcion == 3)
    {
        cout << "Escoge la 3 mi lord" << endl;
    }
    else
    {
        cout << "Nombre no es catafixia cuate" << endl;
    }
    
}