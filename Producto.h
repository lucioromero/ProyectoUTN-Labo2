#pragma once
#include <string>

class Producto{
    private:
        int _codigo, _stock, _categoria;
        float _precio;
        char _nombre[30];
        bool _estado;
    public:
        void setCodigo(int codigo);
        void setStock(int stock);
        void setCategoria(int categoria);
        void setPrecio(float precio);
        void setNombre(char *nombre);
        void setEstado(bool estado);
        int getCodigo();
        int getStock();
        int getCategoria();
        float getPrecio();
        std::string getNombre();
        bool getEstado();
        std::string toString();
        void cargar();
        void mostrar();
        Producto();
        Producto(int codigo, int stock, int categoria, float precio, char *nombre, bool estado);
};

