// Practica_7_Adivina_Quien.cpp 
// Omar Alejandro Angeles Hernandez

#include <iostream>
using namespace std;

int main()
{
    // Declarar true para que Visual me lo utilice xd 
    bool respuesta = true;
    bool respuesta_in;
    bool salir = true;

    while (salir == true)
    {


        cout << "Hola, juguemos a que yo te adivine el personaje que estas pensando" << endl;
        cout << "Puedes escoger entre \n1- Eren\n2- Deku\n3- Diluc\n4- Kirito\n5- Tanjiro" << endl;
        cout << "Tu personaje es callado? \nEscribe 1 para si y 0 para no" << endl;
        cin >> respuesta_in;

        if (respuesta == respuesta_in)
        {
            cout << "Tu personaje usa ropa negra" << endl;
            cin >> respuesta_in;

            if (respuesta == respuesta_in)
            {
                cout << "Tu personaje utiliza espada doble? \nEscribe 1 para si y 0 para no" << endl;
                cin >> respuesta_in;
                if (respuesta == respuesta_in)
                {
                    cout << "Tu personaje vive dentro de un videojuego?" << endl;
                    cin >> respuesta_in;
                    if (respuesta == respuesta_in)
                    {
                        cout << "Tu personaje tiene pareja?" << endl;
                        cin >> respuesta_in;
                        if (respuesta == respuesta_in)
                        {
                            cout << "Tu personaje es Kirito" << endl;
                        }
                        else
                        {
                            cout << "Nel, ese no esta en mi base de datos" << endl;
                        }
                    }
                    else
                    {
                        cout << "Tu personaje se transforma en un titan?" << endl;
                        cin >> respuesta_in;
                        if (respuesta == respuesta_in)
                        {
                            cout << "Tu personaje es Eren" << endl;
                        }
                        else
                        {
                            cout << "Nel, ese no esta en mi base de datos" << endl;
                        }
                    }
                }
                else
                {
                    cout << "Tu personaje es mayor de edad?" << endl;
                    cin >> respuesta_in;
                    if (respuesta == respuesta_in)
                    {
                        cout << "Tu personaje tiene el cabello rojo?" << endl;
                        cin >> respuesta_in;
                        if (respuesta == respuesta_in)
                        {
                            cout << "Tu personaje es Diluc" << endl;
                        }
                        else
                        {
                            cout << "Nel, ese no esta en mi base de datos" << endl;
                        }
                    }
                    else
                    {
                        cout << "Nel, ese no esta en mi base de datos" << endl;
                    }
                }
            }
            else
            {
                cout << "Nel, ese no esta en mi base de datos" << endl;
            }
        }
        else
        {
            cout << "Tu personaje utiliza ropa verde?" << endl;
            cin >> respuesta_in;
            if (respuesta == respuesta_in)
            {
                cout << "Tu personaje lleva espada?" << endl;
                cin >> respuesta_in;
                if (respuesta == respuesta_in)
                {
                    cout << "Tu personaje tiene hermanos?" << endl;
                    cin >> respuesta_in;
                    if (respuesta == respuesta_in)
                    {
                        cout << "Tu personaje mata demonios" << endl;
                        cin >> respuesta_in;
                        if (respuesta == respuesta_in)
                        {
                            cout << "Tu personaje es Tanjiro" << endl;
                        }
                        else
                        {
                            cout << "Nel, ese no esta en mi base de datos" << endl;
                        }
                    }
                    else
                    {
                        cout << "Nel, ese no esta en mi base de datos" << endl;
                    }
                }
                else
                {
                    cout << "Tu personaje tiene poderes?" << endl;
                    cin >> respuesta_in;
                    if (respuesta == respuesta_in)
                    {
                        cout << "Tu personaje heredo sus poderes" << endl;
                        cin >> respuesta_in;
                        if (respuesta == respuesta_in)
                        {
                            cout << "Tu personaje es Deku" << endl;
                        }
                        else
                        {
                            cout << "Nel, ese no esta en mi base de datos" << endl;
                        }
                    }
                    else
                    {
                        cout << "Nel, ese no esta en mi base de datos" << endl;
                    }
                }
            }
            else
            {
                cout << "Nel, ese no esta en mi base de datos" << endl;
            }
        }
        cout << "Deseas jugar otra vez?" << endl;
        cout << "Responde 1 para si y 0 para no" << endl;
        cin >> salir;
    }
}
