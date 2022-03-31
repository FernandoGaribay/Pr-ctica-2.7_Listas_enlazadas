#include <iostream>
#include <string>

#include "CLista.h"
#include "CLibro.h"

using namespace std;

int main(int argc, const char* argv[]) {
    CLista lista;

    CLibro libro(1, "Eso Tilin", "Fernando");
    libro.mostrarDatos();

    lista.Insertar(1);
    lista.Insertar(2);
    lista.Insertar(3);

    lista.Mostrar();

    return 0;
}

/*
    lista.InsertarInicio(5);
    lista.InsertarInicio(6);
    lista.InsertarFinal(8);
    lista.InsertarFinal(9);
    lista.Mostrar();
    lista.InsertarAntesDe(10, 8);
    lista.Borrar(8);
    lista.Borrar(5);
*/