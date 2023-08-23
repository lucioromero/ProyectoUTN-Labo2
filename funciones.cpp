#include "funciones.h"
#include <iostream>
using namespace std;

int menuPrincipal(){
    int opcion;
    do{
        cout << "Bienvenido! Seleccione una opcion: " << endl;
        cout << endl <<"---------------------------" << endl << endl;
        cout << "1- Entrada" << endl;
        cout << "2- Plato principal" << endl;
        cout << "3- Bebida" << endl;
        cout << "4- Postre" << endl;
        cout << endl << "---------------------------" << endl << endl;
        cout << "0- Salir" << endl << endl;
        cin >> opcion;

        if(opcion >=0 && opcion <= 4){
            return opcion;
        }
        else{
            system("cls");
            cout << "Opcion invalida. Por favor, seleccione una opcion correcta." << endl;
            cout << endl << "---------------------------" << endl << endl;
            }

        system("pause");
        system("cls");

    } while(opcion != 0);
}


void carta(int op){
    switch(op){
        case 0: cout << endl << "Muchas gracias por su compra!";
            break;
        case 1: cout << endl << "Opcion 1";
            break;
        case 2: cout << endl << "Opcion 2";
            break;
        case 3: cout << endl << "Opcion 3";
            break;
        case 4: cout << endl << "Opcion 4";
            break;

    }
}
