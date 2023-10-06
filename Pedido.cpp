#include <string>
#include "Pedido.h"

void Pedido::setOrden(int orden){
    _orden = orden;
}

void Pedido::setMesa(int mesa){
    _mesa = mesa;
}

void Pedido::setPrecioTotal(float precioTotal){
    _precioTotal = precioTotal;
}

int Pedido::getOrden() {return _orden;}
int Pedido::getMesa() {return _mesa;}
float Pedido::getPrecioTotal() {return _precioTotal;}
