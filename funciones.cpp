#include "funciones.h"
#include <iostream>
#include <iomanip>
using namespace std;

bool sistema(int &opcion){
    while(true){
        system("cls");
        cout << "******************************" << endl;
        cout << "********** COMANDAS **********" << endl;
        cout << "******************************" << endl;
        cout << "1 - Generar comanda" << endl;
        cout << "2 - Administracion" << endl << endl;
        cout << "******************************" << endl;
        cout << "3 - Creditos" << endl << endl;
        cout << "******************************" << endl;
        cout << "0 - Salir" << endl << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion){
        case 1: comandas(opcion);
        break;

        case 2: administracion();
        break;

        case 0: return 0;
        break;

        default:
        break;
        }
    }
}

void header(){
    std::cout << std::left;
    std::cout << std::setw(10) << "Codigo";
    std::cout << std::setw(35) << "Plato";
    std::cout << std::setw(25) << "Precio";
    std::cout << std::setw(15) << "Stock";
    std::cout << std::endl << "------------------------------------------------------------------------------" << std::endl;
}

void comandas(int &opcion){
    do{
        system("cls");
        cout << "******* COMANDAS *******" << endl;
        
        cout << endl <<"---------------------------" << endl << endl;
        cout << "1 - Entrada" << endl;
        cout << "2 - Plato principal" << endl;
        cout << "3 - Bebida" << endl;
        cout << "4 - Postre" << endl;
        cout << endl << "---------------------------" << endl << endl;
        cout << "0 - Volver" << endl << endl;
        cout << "---------------------------" << endl << endl;
        cout << "Bienvenido! Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion){
        case 1: system("cls");
            cout << "******** ENTRADAS ********" << endl;
            header();
            mostrarProductos(1);
        break;
        
        case 2: system("cls");
            cout << "******** PLATOS PRINCIPALES ********" << endl;
            header();
            mostrarProductos(2);
        break;
        
        case 3: system("cls");
            cout << "******** BEBIDAS ********" << endl;
            header();
            mostrarProductos(3);
        break;
        
        case 4: system("cls");
            cout << "******** POSTRES ********" << endl;
            header();
            mostrarProductos(4);
        break;
        
        case 0: 
        break;

        default: cout << endl << "Opcion invalida. Por favor, seleccione una opcion correcta." << endl;
                 system("pause");
        break;
        }

        system("cls");

    } while(opcion != 0);
}

void administracion(){
    system("cls");
    int opcion;
    cout << "********** ADMINISTRACION **********" << endl << endl;
    cout << "1 - Cargar productos" << endl;
    cout << "2 - Mostrar productos" << endl;
    cout << endl << "Ingrese una opcion: ";
    cin >> opcion;
    switch (opcion){
    case 1: if(cargarRegistroProducto()){
            cout << "El registro se cargo correctamente" << endl;
        }
        system("pause");
        system("cls");
    break;

    case 2: system("cls");
            cout << "******** PRODUCTOS ********" << endl;
            header();
            mostrarProductos(5); 
    break;

    default:
    break;
    }
}

bool cargarRegistroProducto(){
    Producto p;
    p.cargar();
    FILE * e = fopen("productos.dat", "ab");
    if(e == NULL){
        cout << "Error en archivo" << endl;
        return 0;
    }
    fwrite(&p, sizeof(Producto), 1, e);
    fclose(e);
    return true;
}

void mostrarProductos(int n){
    Producto p;
    FILE * prod = fopen("productos.dat", "rb");
    switch (n){
        case 1: while(fread(&p, sizeof(Producto), 1, prod)){
                    if(p.getCategoria() == 1){
                        p.mostrar();
                    }
                }
        break;

        case 2: while(fread(&p, sizeof(Producto), 1, prod)){
                    if(p.getCategoria() == 2){
                        p.mostrar();
                    }
                }
        break;

        case 3: while(fread(&p, sizeof(Producto), 1, prod)){
                    if(p.getCategoria() == 3){
                        p.mostrar();
                    }
                }
        break;

        case 4: while(fread(&p, sizeof(Producto), 1, prod)){
                    if(p.getCategoria() == 4){
                        p.mostrar();
                    }
                }
        break;

        case 5: while(fread(&p, sizeof(Producto), 1, prod)){
                        p.mostrar();
                }
        break;

        default: cout << "Opcion incorrecta." << endl;
        break;
    }
    std::cout << endl;
    system("pause");
}

void cargarCadena(char *palabra, int tamano){
    int i=0;
    fflush(stdin);
    for (i=0; i<tamano; i++){
        palabra[i]=cin.get();
        if (palabra[i]=='\n'){
            break;
        }
    }
    palabra[i]='\0';
    fflush(stdin);
}

bool buscarCodigoProducto(const char *archivo, int codigo){
    bool encontro;
    Producto prod;
    FILE * a = fopen(archivo, "rb");
    if(archivo == nullptr) std::cout << "Error al abrir el archivo" << endl;
    while(fread(&prod, sizeof(Producto), 1, a)){
        if(prod.getCodigo() == codigo){
            encontro = true;
            return encontro;
        }
    }
    fclose(a);
}