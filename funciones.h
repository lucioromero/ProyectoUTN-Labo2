#pragma once
#include "Producto.h"

bool sistema(int &opcion);
void comandas(int &opcion);
void administracion();
bool cargarRegistroProducto();
void header();
void mostrarProductos(int n);
void cargarCadena(char *palabra, int tamano);
bool buscarCodigoProducto(const char *archivo, int codigo);
