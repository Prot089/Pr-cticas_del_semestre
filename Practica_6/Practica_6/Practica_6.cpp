// Practica_6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include<stdlib.h>
#include <iostream>
#include <cstdlib>
using namespace std;
enum pokemon { charmander = 1, squirtle, bulbasaur };

int main()
{
    int opc = 0;
    bool salir = false;
    int opcmov = 0;
    int rival;
    int vida = 30;
    int vidarival = 30;
    int num;
    srand(time(NULL));
    int i = 0;


    while (salir == false)
    {


        cout << "Que pokemon quieres utilizar?" << endl;
        cout << "Pulsa la opción y da enter para ejecutarla \n1.-Charmander\n2.-Squirtle\n3.-Bulbasaur\n" << endl;
        cin >> opc;

        switch (opc)
        {

        case charmander:
            cout << "Seleccionaste a charmander" << endl;
            rival = squirtle;
            cout << "Tu oponente es squirtle" << endl;
            break;
        case squirtle:
            cout << "Seleccionaste a squirtle" << endl;
            rival = bulbasaur;
            cout << "Tu oponente es bulbasaur" << endl;
            break;
        case bulbasaur:
            cout << "Seleccionaste la bulbasaur" << endl;
            rival = charmander; 
            cout << "Tu oponente es Charmander" << endl;
            break;
        }
        
        for (int i = 0; i <= 4; i++)
        {
            cout << "Elige tu proximo movimiento \n1-Derribo \n2-Proteger" << endl;
            cin >> opcmov;

            switch (opcmov)
            {
            case 1:
                cout << "Seleccionaste Derribo" << endl;
                vidarival -= 10;
                break;
            case 2:
                cout << "Seleccionaste Proteger" << endl;
                vida += 5;
                break;
            }
            num = rand() % (2);
            cout << num << " ";
            if (num == 0)
            {
                cout << "El enemigo ha elegido Derribo" << endl;
                vida -= 15;
            }
            else
            {
                cout << "El enemigo ha utilizado Proteger" << endl;
                vidarival += 5;
            }
            cout << "Tu vida es de " << vida << endl;
            cout << "La vida de tu enemigo es de " << vidarival << endl;
            if (vida > 0)
            {
                cout << "Sigues vivo" << endl;
            }
            else if (vidarival <= 0)
            {
                cout << "Felicidades, ganaste" << endl;
            }
            else
            {
                cout << "Perdiste" << endl;
            }
        }
        cout << "Deseas jugar otra vez?" << endl;
        cout << "Responde 0 para si y 1 para no" << endl;
        cin >> salir;
    }
}