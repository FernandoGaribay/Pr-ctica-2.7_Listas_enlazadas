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

void CLista::InsertarInicio(int v) {
    CNodo* aux;
    if (ListaVacia()) {
        aux = new CNodo(v, primero);
        primero = aux;
    }
    else {
        aux = new CNodo(v, primero->siguiente);
        primero = aux;
    }
}

void CLista::InsertarFinal(int v) {
    CNodo* aux = Ultimo();
    aux->siguiente = new CNodo(v, NULL);
}

void CLista::Insertar(int v) {
    CNodo* aux;
    if (ListaVacia()) {
        aux = new CNodo(v, primero);
        primero = aux;
    }
    else {
        aux = Ultimo();
        aux->siguiente = new CNodo(v, NULL);
    }

}

void CLista::InsertarAntesDe(int v, int z) {
    CNodo* anterior;
    // Buscar el nodo de valor de z
    anterior = primero;
    // Avanzamos hasta encontrar el elemento
    while (anterior->siguiente && anterior->siguiente->valor != z) {
        anterior = anterior->siguiente;
    }
    // Creamos un nuevo nodo después del nodo anterior, y cuyo siguiente
    // es el siguiente del anterior
    anterior->siguiente = new CNodo(v, anterior->siguiente);
}

void CLista::Borrar(int v) {
    CNodo* anterior, * nodo;

    nodo = primero;
    anterior = NULL;
    while (nodo && nodo->valor != v) {
        anterior = nodo;
        nodo = nodo->siguiente;
    }
    if (!nodo || nodo->valor != v) return;
    else { // Borrar el nodo
        if (!anterior) // Primer elemento
            primero = nodo->siguiente;
        else  // un elemento cualquiera
            anterior->siguiente = nodo->siguiente;
        delete nodo;
    }
}

void CLista::Mostrar() {
    CNodo* aux;

    aux = primero;
    while (aux) {
        cout << aux->valor << endl;
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