#include <iostream>
#include <string>

#include "CLista.h"
#include "CLibro.h"

using namespace std;

int main(int argc, const char* argv[]) {
    CLista lista;

    // Se crean los objetos de la clase "CLibro"
    CLibro libro1(1, "El principito", "Antoine de Saint-Exupery");
    CLibro libro2(2, "Coraline", "Neil Gaiman");
    CLibro libro3(3, "El caballero de la armadura oxidada", "Robert Fisher");
    CLibro libro4(4, "Rebelion en la granja", "George Orwell");

    //Se insertan los objetosa la lista
    lista.Insertar(libro1);
    lista.Insertar(libro2);
    lista.Insertar(libro3);

    cout << "lista.Mostrar(); \n" << endl;
    lista.Mostrar();

    //Borramos el objeto "libro2" de la lista
    cout << "lista.Borrar(libro2);" << endl;
    lista.Borrar(libro2);

    cout << "lista.Mostrar(); \n" << endl;
    lista.Mostrar();

    //Insertamos el objeto "libro4" antes del "libro3" (Donde anteriormente estaba "libro2")
    cout << "lista.InsertarAntesDe(libro4, libro3);" << endl;
    lista.InsertarAntesDe(libro4, libro3);

    cout << "lista.Mostrar(); \n" << endl;
    lista.Mostrar();
    

    return 0;
}