#pragma once
#include <iostream>

using namespace std;

class CNodo {
public:
    CNodo(int v, CNodo* sig);

private:
    int valor;
    CNodo* siguiente;

    friend class CLista;
};
