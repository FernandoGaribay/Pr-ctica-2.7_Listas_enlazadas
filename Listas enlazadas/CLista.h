#pragma once
#include "CNodo.h"

class CLista {
public:
    CLista();
    ~CLista();
    void InsertarInicio(int v);
    void InsertarFinal(int v);
    void Insertar(int v);
    void InsertarAntesDe(int v, int z);
    void Borrar(int v);
    bool ListaVacia();
    void Mostrar();
    CNodo* Ultimo();
protected:
    CNodo* primero;
};