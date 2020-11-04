#include <iostream>

#include "arreglo.h"

using namespace std;

int main()
{
    ArregloDinamico<string>_arreglo;

    //for (int i = 0; i < _arreglo.size(); i++){
    _arreglo.insertar_final("Fer"); //ESTOS SE ELIMINAN CORRECTAMENTE
    _arreglo.insertar_final("Carlos");
    _arreglo.insertar_final("Yolanda");
    _arreglo.insertar_final("Michel");

    _arreglo.insertar_inicio("Luis");
    _arreglo.insertar_inicio("Arturo");
    _arreglo.insertar_inicio("Christian");
    _arreglo.insertar_inicio("Melissa"); //ESTOS SE ELIMINAN CORRECTAMENTE

    _arreglo.insertar("INSERTAR", 2);
    _arreglo.eliminar_inicio();
    _arreglo.eliminar_final();
    _arreglo.eliminar(4);

    for (size_t i = 0; i < _arreglo.size(); i++){
        cout << _arreglo[i] << " | ";

   }

    cout << endl;

    return 0;
}
