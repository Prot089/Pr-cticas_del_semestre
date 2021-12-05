// Practica5_Zap561.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    string usuario = "Protlayer";
    int contrasena = 89;
    bool hombre = 1; 
    float calificacionprogra = 9.5;
    double calificacionpsico = 9.02;
    long double promedio = 9.26;
    char curp[20] = "AEHO000908HJCNRMA0";
    long long int mexicanos = 126000000;
    string usuario_in;
    int contrasena_in;
    bool hombre_in;
    float calificacionprogra_in;
    double calificacionpsico_in;
    long double promedio_in;
    char curp_in[20];
    long long int mexicanos_in; 

    cout << "Hola Alex, para recuperar tu cuenta debemos seguir unos pasos que tu mismo nos pediste preguntarte en estos casos, vamos a ello. \n" << endl;
    cout << "Por favor, ingresa tu nombre de usuario" << endl;
    cin >> usuario_in;
    

    if (usuario == usuario_in)
    {

        cout << "Bienvenido, Protlayer" << endl;
        cout << "¿Eres hombre? 1 = si, 0 = no" << endl; 
        cin >> hombre_in;
        if (hombre == hombre_in)
        {

            cout << "Entonces eres de los GOD" << endl;
            cout << "Dime tu calificacion de progra" << endl;
            cin >> calificacionprogra_in;
            if (calificacionprogra == calificacionprogra_in)
            {

                cout << "Excelente, sigue asi" << endl;
                cout << "¿Que tal te va en psicologia?" << endl;
                cin >> calificacionpsico_in;
                if (calificacionpsico == calificacionpsico_in)
                {

                    cout << "Siga asi mi pai" << endl;
                    cout << "Dime tu promedio de esas materias juntas" << endl;
                    cin >> promedio_in;
                    if (promedio == promedio_in)
                    {
                        cout << "Ya casi acabamos Alex, nada mas dime tu curp" << endl;
                        cin >> curp_in;
                        if (curp[20] == curp_in[20])
                        {
                            
                            cout << "Y por ultimo dime cuantos mexicanos residimos en Mexico (utiliza numeros por favor)" << endl;
                            cin >> mexicanos_in;
                            if (mexicanos == mexicanos_in)
                            {
                                
                                cout << "Listo, ya tenemos tus datos y ahora estas suscrito a paginas weeb, que lo disfrutes" << endl;
                                cout << "Por cierto, tu contrasena es 89, ingresala a continuacion" << endl;
                                cin >> contrasena_in;
                                if (contrasena == contrasena_in)
                                {
                                    cout << "Bienvenido pai" << endl;
                                }
                                else
                                {
                                    cout << "Que paso master, te di la respuesta arriba" << endl;
                                }
                            }
                            else
                            {
                                cout << "Bueno, puede que seas Alex pero aun asi eso no es correcto." << endl;
                            }
                        }
                        else
                        {
                            cout << "Si fueras Alex sacarias tu INE..." << endl;
                        }
                    }
                    else
                    {
                        cout << "La proxima vez utiliza una calculadora amigx." << endl;
                    }
                }
                else
                {
                    cout << "Estoy muy seguro que Alex no saco eso..." << endl;
                }
            }
            else
            {
                cout << "Al parecer, esa no es la calificacion de Alex." << endl;
            }
        }
        else
        {
            cout << "Buen intento, pero Alex si es macho." << endl;
        }
    }
    else
    {
        cout << "No mi pai, Alex no se equivocaria en su nombre." << endl;
    }
    
}
