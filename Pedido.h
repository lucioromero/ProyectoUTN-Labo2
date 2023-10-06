#pragma once
#include <string>

class Pedido{
    private:
        int _orden, _mesa;
        float _precioTotal;
    public:
        void setOrden(int orden);
        void setMesa(int mesa);
        void setPrecioTotal(float precioTotal);
        int getOrden();
        int getMesa();
        float getPrecioTotal();
};

