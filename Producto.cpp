#include <string>
#include "Producto.h"

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

void Producto::setNombre(std::string nombre){
    _nombre = nombre;
}

int Producto::getCodigo(){return _codigo;}
int Producto::getStock(){return _stock;}
int Producto::getCategoria(){return _categoria;}
float Producto::getPrecio(){return _precio;}
std::string Producto::getNombre(){return _nombre;}

Producto::Producto(){}