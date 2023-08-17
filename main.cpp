#include "funciones.h"
#include <cstring>
#include <iostream>
using namespace std;

/// CLASES:

class Producto {
    private:
        int _codigo, _stock, _categoria;
        float _precio;
        string _nombre;
    public:
        // setters
        void setCodigo(int codigo){
            _codigo = codigo;
        }

        void setStock(int stock){
            _stock = stock;
        }

        void setCategoria(int categoria){
            _categoria = categoria;
        }
        void setPrecio(int precio){
            _precio = precio;
        }

        void setNombre(string nombre){
            _nombre = nombre;
        }

        //getters
        int getCodigo() {return _codigo;}
        int getStock() {return _stock;}
        int getCategoria() {return _categoria;}
        int getPrecio() {return _precio;}
        string getNombre() {return _nombre;}
};

class Pedido {
private:
    int _orden, _mesa;
    float _precioTotal;
    string _nombreCliente;

public:
    //setters
    void setOrden(int orden){
        _orden = orden;
    }

    void setMesa(int mesa){
        _mesa = mesa;
    }

    void setPrecio(float precioTotal){
        _precioTotal = precioTotal;
    }

    void setNombreCliente(string nombreCliente){
        _nombreCliente = nombreCliente;
    }

    //getters

    int getOrden() {return _orden;}
    int getMesa() {return _mesa;}
    float getPrecio() {return _precioTotal;}
    string getNombreCliente() {return _nombreCliente;}
};


int main()
{
    int opcion;
    opcion = menuPrincipal();
    carta(opcion);

    return 0;
}
