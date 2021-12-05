// clase_practica3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{

        //Sintaxys del Switch Case
        int opc = 0;
        bool salir = true;
        /*
        while (salir == false)
        {

        cout << "Que operación quieres usar? " << endl;
        cout << "Pulsa la opción y da enter para ejecutarla \n1.-Suma\n2.-Resta\n3.-Multiplicación\n4.-División " << endl;
        cin >> opc;
        
            switch (opc)
            {
            case 1:
                cout << "Seleccionaste la suma" << endl;
                break;
            case 2:
                cout << "Seleccionaste la resta" << endl;
                break;
            case 3:
                cout << "Seleccionaste la Multi" << endl;
                break;
            case 4:
                cout << "Seleccionaste la División " << endl;
                break;
            default:
                cout << "nel eso no lo conozco" << endl;
            }  
            cout << "Deseas hacer otra operacion" << endl;
            cout << "Responde 1 para si y 0 para no" << endl;
            cin >> salir;
        }
        */
        /*
        do
        {

        cout << "Que operación quieres usar? " << endl;
        cout << "Pulsa la opción y da enter para ejecutarla \n1.-Suma\n2.-Resta\n3.-Multiplicación\n4.-División " << endl;
        cin >> opc;
            switch (opc)
            {
            case 1:
                cout << "Seleccionaste la suma" << endl;
                break;
            case 2:
                cout << "Seleccionaste la resta" << endl;
                break;
            case 3:
                cout << "Seleccionaste la Multi" << endl;
                break;
            case 4:
                cout << "Seleccionaste la División " << endl;
                break;
            default:
                cout << "nel eso no lo conozco" << endl;
            }
            cout << "Deseas hacer otra operacion" << endl;
            cout << "Responde 1 para si y 0 para no" << endl;
            cin >> salir;
        } while (salir == false);
        */
        /*
        // 1- Variable auxiliar que da inicio al ciclo
        // 2- El valor final del ciclo
        // 3- El paso
        for (int i = 0; i <= 2; i=i+1)
        {
        cout << "Que operación quieres usar? " << endl;
        cout << "Pulsa la opción y da enter para ejecutarla \n1.-Suma\n2.-Resta\n3.-Multiplicación\n4.-División " << endl;
        cin >> opc;
            switch (opc)
            {
            case 1:
                cout << "Seleccionaste la suma" << endl;
                break;
            case 2:
                cout << "Seleccionaste la resta" << endl;
                break;
            case 3:
                cout << "Seleccionaste la Multi" << endl;
                break;
            case 4:
                cout << "Seleccionaste la División " << endl;
                break;
            default:
                cout << "nel eso no lo conozco" << endl;
            }
            cout << "Deseas hacer otra operacion" << endl;
            cout << "Responde 1 para si y 0 para no" << endl;
            cin >> i;
        }
        */
        for (int i = 0; i <= 5; i++)
        {
            cout << i << endl;
        }

        
}