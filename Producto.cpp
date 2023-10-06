#include <iostream>
#include <cstring>
#include <iomanip>
#include "Producto.h"
#include "funciones.h"

void Producto::setCodigo(int codigo){
    _codigo = codigo;
}

void Producto::setStock(int stock){
    _stock = stock;
}

void Producto::setCategoria(int categoria){
    _categoria = categoria;
}

void Producto::setPrecio(float precio){
    _precio = precio;
}

void Producto::setNombre(char *nombre){
    strcpy(_nombre, nombre);
}

void Producto::setEstado(bool estado){
    _estado = estado;
}

int Producto::getCodigo(){return _codigo;}
int Producto::getStock(){return _stock;}
int Producto::getCategoria(){return _categoria;}
float Producto::getPrecio(){return _precio;}
std::string Producto::getNombre(){return _nombre;}
bool Producto::getEstado(){return _estado;}

void Producto::cargar(){
    system("cls");
    std::cout << "************* CARGAR NUEVO PRODUCTO *************" << std::endl;
    std::cout << "Codigo: ";
    std::cin >> _codigo;
    while(buscarCodigoProducto("productos.dat", _codigo)){
        std::cout << "El codigo ya existe. Ingrese un nuevo codigo: ";
        std::cin >> _codigo;
    }
    std::cout << "Stock: ";
    std::cin >> _stock;
    std::cout << "Categoria: ";
    std::cin >> _categoria;
    std::cout << "Precio: ";
    std::cin >> _precio;
    std::cout << "Nombre: ";
    cargarCadena(_nombre, 30);
}

void Producto::mostrar(){
    std::cout << std::left;
    std::cout << std::setw(10) << getCodigo();
    std::cout << std::setw(35) << getNombre();
    std::cout << std::setw(25) << getPrecio();
    std::cout << std::setw(15) << getStock();
    std::cout << std::endl;
}

Producto::Producto(){}

Producto::Producto(int codigo, int stock, int categoria, float precio, char nombre[30], bool estado){
    _codigo = codigo;
    _stock = stock;
    _categoria = categoria;
    _precio = precio;
    strcpy(_nombre, nombre);
    _estado = _estado;
}

