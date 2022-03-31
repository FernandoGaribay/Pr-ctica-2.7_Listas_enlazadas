#include "CLista.h"

CLista::CLista() {
    primero = NULL;
}

CLista::~CLista() {
    CNodo* aux;

    while (primero) {
        aux = primero;
        primero = primero->siguiente;
        delete aux;
    }
}

void CLista::InsertarInicio(CLibro libro) {
    CNodo* aux;
    if (ListaVacia()) {
        aux = new CNodo(libro, primero);
        primero = aux;
    }
    else {
        aux = new CNodo(libro, primero->siguiente);
        primero = aux;
    }
}

void CLista::InsertarFinal(CLibro libro) {
    CNodo* aux = Ultimo();
    aux->siguiente = new CNodo(libro, NULL);
}

void CLista::Insertar(CLibro libro) {
    CNodo* aux;
    if (ListaVacia()) {
        aux = new CNodo(libro, primero);
        primero = aux;
    }
    else {
        aux = Ultimo();
        aux->siguiente = new CNodo(libro, NULL);
    }

}

void CLista::InsertarAntesDe(CLibro libro, CLibro z) {
    CNodo* anterior;
    anterior = primero;

    while (anterior->siguiente && anterior->siguiente->valor.getClave() != z.getClave()) {
        anterior = anterior->siguiente;
    }

    anterior->siguiente = new CNodo(libro, anterior->siguiente);
}

void CLista::Borrar(CLibro libro) {
    CNodo* anterior, * nodo;

    nodo = primero;
    anterior = NULL;

    while (nodo && nodo->valor.getClave() != libro.getClave()) {
        anterior = nodo;
        nodo = nodo->siguiente;
    }

    if (!nodo || nodo->valor.getClave() != libro.getClave()) 
        return;
    else { 
        if (!anterior) 
            primero = nodo->siguiente;
        else  
            anterior->siguiente = nodo->siguiente;
        delete nodo;
    }
}

void CLista::Mostrar() {
    CNodo* aux;

    aux = primero;
    while (aux) {
        aux->valor.mostrarDatos();
        aux = aux->siguiente;
    }
    cout << endl;
}

bool CLista::ListaVacia() {
    return primero == NULL;
}

CNodo* CLista::Ultimo() {
    CNodo* actual = primero;
    if (!ListaVacia())
        while (actual->siguiente)
            actual = actual->siguiente;
    return actual;
}