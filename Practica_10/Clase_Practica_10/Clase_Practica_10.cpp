// Clase_Practica_10.cpp 
// Omar Alejandro Angeles Hernández
// Conocer las estructuras y enlazarlas

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

/*
struct Juego_Mesa{
    string Nombre_Autor;
    string Titulo;
    int Fecha;
};
class nodo
{
public:
    int edad;
    string nombre;
    nodo* next;
private:
    string contrasenia_Correo;
};
enum Entrada_Alarma {nada, sensor1, sensor2, sensor3};
enum Estado_Alarma
{
    Alarma_ON,
    Alarma_OFF,
    Alarma_OFF_sound,
    Alarma_alarmada
};
int main()
{
    Juego_Mesa Juego1[10];
    Juego1[0].Nombre_Autor = "Caravana";
    Juego1[0].Fecha = 2011;
    Juego1[0].Titulo = "Calico";
    cout << Juego1[0].Nombre_Autor << endl;
    nodo* cabeza = NULL;
    nodo* rodillas = NULL;
    nodo* muslos = NULL;
    cabeza = new nodo();
    rodillas = new nodo();
    muslos = new nodo();
    cabeza->edad = 1;
    cabeza->nombre = "Lupe";
    cabeza->next = rodillas;
    rodillas->edad = 45;
    rodillas->nombre = "Robotron";
    rodillas->next = muslos;
    muslos->edad = 23;
    muslos->nombre = "Pepe";
    muslos->next = NULL;
    while (cabeza != NULL)
    {
        cout << cabeza->nombre << " " << endl;
        cabeza = cabeza->next;
    }
    Entrada_Alarma Sensor_Puerta = sensor1;
    Entrada_Alarma  Sensor_Cocina = sensor2;
    Entrada_Alarma Sensor_cuarto = sensor3;
    Estado_Alarma bocina;
    bool act_alarma;
    cout << "Deseas encender la alarma? Y=1, N=0 " << endl;
    cin >> act_alarma;

    if (act_alarma)
    {
        cout << "Alarma Armada " << endl;
        if (Sensor_Puerta == nada && Sensor_Cocina == sensor2)
        {
            bocina = Alarma_OFF;
            cout << "La alarma esta armada pero sin sonido porque nadie a entrado a la casa " << bocina << endl;
        }
        if (Sensor_Puerta == sensor1 && Sensor_Cocina == sensor2)
        {
            bocina = Alarma_ON;
            cout << "Beedoo Beedoo Beedoo - Wiu wiu wiu wiu - wiiiiip wiiiip wiiiiip * Dijo la 13 " << endl << bocina << endl;

        }
    }
}
*/


struct Persona {
    int desvelos;
    int notas;
    int extras;
    int cafes;
    int powerup;
}Jugador[20];


int main(){

    string nombre [] = { "Karen", "Alex", "Angel", "Dylan", "Ricardo", "Oscar", "Yuss", "Ferchus", "Kuvassi", "Angel", "Shasho", "Isra", "Pato", "Chilo", "JP", "Eric", "Tapia", "Abraham", "Kevin"};
    srand(time(NULL));
    Persona k;
    Persona A;
    k.desvelos=0;
    A.desvelos=11;
    k.notas = 0;
    A.notas = 11;
    k.extras = 0;
    A.extras = 11;
    k.cafes = 0;
    A.cafes = 11;
    string uwu, uwu1;

    cout << "Battle royale Amerike" << endl;

    for (int i = 0; i < 19; i++) {
        fflush(stdin);
        cout << "Nombre: " << nombre[i] << endl;
        Jugador[i].desvelos = rand() % 11;
        cout << "Desvelos: " << Jugador[i].desvelos << endl;
        Jugador[i].notas = rand() % 11;
        cout << "Notas: " << Jugador[i].notas << endl;
        Jugador[i].extras = rand() % 11;
        cout << "Extras: " << Jugador[i].extras << endl;
        Jugador[i].cafes = rand() % 11;
        cout << "cafes: " << Jugador[i].cafes << endl;
        cout << "\n" << endl;
    }
    for(int i=0;i<19;i++){
        if(Jugador[i].desvelos>k.desvelos){
            k=Jugador[i];
            uwu=nombre[i];
        }
        if(Jugador[i].desvelos<A.desvelos){
            A=Jugador[i];
            uwu1=nombre[i];
        }
    }
    cout << "El que tiene mayor numero de desvelos es: " << uwu << endl;
    cout << "Desvelos: " << k.desvelos << endl;
    cout << "\n" << endl;

    cout << "El que tiene menor numero de desvelos es: " << uwu1 << endl;
    cout << "Desvelos: " << A.desvelos << endl;
    cout << "\n" << endl;

    for (int i = 0; i < 19; i++) {
        if (Jugador[i].notas > k.notas) {
            k = Jugador[i];
            uwu = nombre[i];
        }
        if (Jugador[i].notas < A.notas) {
            A = Jugador[i];
            uwu1 = nombre[i];
        }
    }
    cout << "El que tiene mayor numero de notas es: " << uwu << endl;
    cout << "Notas: " << k.notas << endl;
    cout << "\n" << endl;

    cout << "El que tiene menor numero de notas es: " << uwu1 << endl;
    cout << "Notas: " << A.notas << endl;
    cout << "\n" << endl;

    for (int i = 0; i < 19; i++) {
        if (Jugador[i].extras > k.extras) {
            k = Jugador[i];
            uwu = nombre[i];
        }
        if (Jugador[i].extras < A.extras) {
            A = Jugador[i];
            uwu1 = nombre[i];
        }
    }
    cout << "El que tiene mayor numero de extras es: " << uwu << endl;
    cout << "Extras: " << k.extras << endl;
    cout << "\n" << endl;

    cout << "El que tiene menor numero de extras es: " << uwu1 << endl;
    cout << "Extras: " << A.extras << endl;
    cout << "\n" << endl;

    for (int i = 0; i < 19; i++) {
        if (Jugador[i].cafes > k.cafes) {
            k = Jugador[i];
            uwu = nombre[i];
        }
        if (Jugador[i].cafes < A.cafes) {
            A = Jugador[i];
            uwu1 = nombre[i];
        }
    }
    cout << "El que tiene mayor numero de cafes es: " << uwu << endl;
    cout << "Cafes: " << k.cafes << endl;
    cout << "\n" << endl;

    cout << "El que tiene menor numero de cafes es: " << uwu1 << endl;
    cout << "Cafes: " << A.cafes << endl;
    cout << "\n" << endl;
}
/*
struct nodo {
    int desvelos;
    int notas;
    int extras;
    int cafes;
    nodo* next;
};

void incluir_datos(nodo*, int);
void mostrar_datos(nodo*);
void calcular_Mayor_y_Menor(nodo*);

int main()
{
    nodo* lista = NULL;

    cout << "elementos de la lista: \n";
    mostrar_datos(lista);
    return 0;
}

void incluir_datos(nodo* lista, int n) {
    nodo* aux;

    nuevo_nodo->desvelos = n;
    nuevo_nodo->siguiente = NULL;

    if (lista == NULL) {//si la lista esta vacia
        lista == nuevo_nodo; //asignamos el primer elemento a la lista
    }
    else {
        aux = lista; // apunta al primer elemento de la lista
        while (aux->next != NULL) { // recorrer la lista
            aux = aux->next; //avanzamos posiciones en la lista
        }
        aux->next = nuevo_nodo; //agrego el nuevo nodo a la lista
    }
    cout << "Elemento " << n << "agregado a la lista correctamente\n" << endl;
}

void mostrar_datos(nodo* lista) {
    while (lista != NULL) // mientras que lista no sea el final de la lista
        cout << lista->desvelos << " -> ";
    lista = lista->next; // avanzamos posicion en lista
}
*/
