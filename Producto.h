#pragma once
#include <string>

class Producto{
    private:
        int _codigo, _stock, _categoria;
        float _precio;
        std::string _nombre;
    public:
        void setCodigo(int codigo);
        void setStock(int stock);
        void setCategoria(int categoria);
        void setPrecio(float precio);
        void setNombre(std::string nombre);
        int getCodigo();
        int getStock();
        int getCategoria();
        float getPrecio();
        std::string getNombre();
        Producto();
};

