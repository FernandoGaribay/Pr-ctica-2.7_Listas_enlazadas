#include <iostream>
#include <string>
#include <ctype.h>

#include "CLista.h"
#include "CLibro.h"

using namespace std;

void mostrarMenu(char& opc);

int main(void) {
    CLibro* libro = new CLibro();
    CLista lista;

    int clave;
    string titulo="";
    string autor="";

    bool r = true;
    char opc;

    do {
        mostrarMenu(opc);

        switch (opc) {
        case '1':
            system("clear");
            cout << "INTRODUCIR LIBRO EN LA LISTA ----------------------\n" << endl;

            cout << "Dijite la clave del libro: ";
            cin >> clave;
            cin.ignore();

            cout << "Dijite el titulo del libro: ";
            getline(cin, titulo);

            cout << "Dijite el autor del libro: ";
            getline(cin, autor);

            libro = new CLibro(clave, titulo, autor);
            lista.Insertar(libro);

            system("pause");
            break;
        case '2':
            system("clear");
            cout << "MODIFICAR LIBRO -------------------------------- - \n" << endl;

            cout << "Dijite la clave del libro a modificar: ";
            cin >> clave;
            cin.ignore();

            cout << "Dijite el titulo del libro: ";
            getline(cin, titulo);

            cout << "Dijite el autor del libro: ";
            getline(cin, autor);

            libro = new CLibro(clave, titulo, autor);

            lista.modificarNodo(libro, clave);

            system("pause");
            break;
        case '3':
            system("clear");
            cout << "VISUALIZAR LIBRO ------------------------------- - \n" << endl;

            cout << "Dijite la clave del libro a visualizar: ";
            cin >> clave;

            lista.visualizarNodo(clave);

            system("pause");
            break;
        case '4':
            system("clear");
            cout << "BORRAR LIBRO ----------------------------------- - \n" << endl;

            cout << "Dijite la clave del libro: ";
            cin >> clave;

            lista.Borrar(clave);

            system("pause");
            break;
        case '5':
            system("clear");
            cout << "BORRAR LISTA DE NODOS ---------------------------- \n" << endl;

            lista.~CLista();

            cout << "\Lista de libros borrada." << endl;
            system("pause");
            break;
        case '6':
            system("clear");
            cout << "VISUALIZAR TODOS LOS LIBROS -----------------------\n" << endl;
            lista.Mostrar();
            system("pause");
            break;
        case '7':
            r = false;
            cout << "\nPrograma finalizado." << endl;
            system("pause");
            break;
        default:
            cout << "\nOpcion invalida." << endl;
            system("pause");
        }
    } while (r);

    return 0;
}

void mostrarMenu(char& opc)
{
    system("clear");
    cout << "MENU --------------------------\n" << endl;
    cout << "1) Introduccir libro en la lista" << endl;
    cout << "2) Modificar libro" << endl;
    cout << "3) Visualizar libro" << endl;
    cout << "4) Borrar libro" << endl;
    cout << "5) Borrar lista de libros" << endl;
    cout << "6) Visualizar todos los libros" << endl;
    cout << "7) Salir" << endl;

    cout << "\n- Dijite una opcion: ";
    cin >> opc;
}

/*
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
*/


/*
int clave = 1;
string titulo = "El ete setch";
string autor = "fernando";

int clave2 = 2;
string titulo2 = "El pepe";
string autor2 = "marcotroll";

CLibro* libro = new CLibro(clave, titulo, autor);
lista.Insertar(libro);

libro = new CLibro(clave2, titulo2, autor2);
lista.Insertar(libro);

lista.Mostrar();
*/