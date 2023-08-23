#pragma once
#include <string>

class Pedido{
    private:
        int _orden, _mesa;
        float _precioTotal;
        std::string _nombreCliente;
    public:
        void setOrden(int orden);
        void setMesa(int mesa);
        void setPrecioTotal(float precioTotal);
        void setNombreCliente(std::string nombreCliente);
        int getOrden();
        int getMesa();
        float getPrecioTotal();
        std::string getNombreCliente();
};