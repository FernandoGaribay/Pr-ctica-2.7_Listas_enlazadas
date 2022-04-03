#include <iostream>
#include <string>
#include <ctype.h>

#include "CLista.h"
#include "CLibro.h"

using namespace std;

void mostrarMenu(char& opc);
void opcion1(int& clave, string& titulo, string& autor, CLibro*& libro, CLista& lista);
void opcion2(int& clave, string& titulo, string& autor, CLibro*& libro, CLista& lista);
void opcion3(int& clave, CLista& lista);
void opcion4(int& clave, CLista& lista);
void opcion5(CLista& lista);
void opcion6(CLista& lista);
void Opcion7(bool& r);

int main(void) 
{
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
            opcion1(clave, titulo, autor, libro, lista);
            break;
        case '2':
            opcion2(clave, titulo, autor, libro, lista);
            break;
        case '3':
            opcion3(clave, lista);
            break;
        case '4':
            opcion4(clave, lista);
            break;
        case '5':
            opcion5(lista);
            break;
        case '6':
            opcion6(lista);
            break;
        case '7':
            Opcion7(r);
            break;
        default:
            cout << "\nOpcion invalida." << endl;
            system("pause");
        }
    } while (r);

    return 0;
}

void Opcion7(bool& r)
{
    r = false;
    cout << "\nPrograma finalizado." << endl;
    system("pause");
}

void opcion6(CLista& lista)
{
    system("clear");
    cout << "VISUALIZAR TODOS LOS LIBROS -----------------------\n" << endl;
    lista.Mostrar();
    system("pause");
}

void opcion5(CLista& lista)
{
    system("clear");
    cout << "BORRAR LISTA DE NODOS ---------------------------- \n" << endl;

    lista.~CLista();

    system("pause");
}

void opcion4(int& clave, CLista& lista)
{
    system("clear");
    cout << "BORRAR LIBRO ----------------------------------- - \n" << endl;

    cout << "Dijite la clave del libro: ";
    cin >> clave;

    lista.Borrar(clave);

    system("pause");
}

void opcion3(int& clave, CLista& lista)
{
    system("clear");
    cout << "VISUALIZAR LIBRO ------------------------------- - \n" << endl;

    cout << "Dijite la clave del libro a visualizar: ";
    cin >> clave;

    lista.visualizarNodo(clave);

    system("pause");
}

void opcion2(int& clave, string& titulo, string& autor, CLibro*& libro, CLista& lista)
{
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
}

void opcion1(int& clave, string& titulo, string& autor, CLibro*& libro, CLista& lista)
{
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