#pragma once
#include "CNodo.h"
#include "CLibro.h"

class CLista {
public:
    CLista();
    ~CLista();
    void InsertarInicio(CLibro libro);
    void InsertarFinal(CLibro libro);
    void Insertar(CLibro libro);
    void InsertarAntesDe(CLibro libro, CLibro z);
    void Borrar(CLibro libro);
    bool ListaVacia();
    void Mostrar();
    CNodo* Ultimo();
protected:
    CNodo* primero;
};