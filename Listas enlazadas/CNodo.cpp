#include "CNodo.h"

CNodo::CNodo(int v, CNodo* sig = NULL)
{
	valor = v;
	siguiente = sig;
}