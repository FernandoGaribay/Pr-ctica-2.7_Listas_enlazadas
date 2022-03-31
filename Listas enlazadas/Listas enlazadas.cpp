#include <iostream>
#include "CLista.h"

using namespace std;

int main(int argc, const char* argv[]) {
    CLista lista;

    lista.InsertarInicio(9);
    lista.InsertarFinal(10);
    lista.InsertarFinal(11);

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