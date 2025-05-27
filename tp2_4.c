#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main (){
    compu computadoras[5];
    cargarComputadora(computadoras, 5);
    listarPCs(computadoras, 5);
    mostrarMasVieja(computadoras, 5);
    mostrarMasVeloz(computadoras, 5);
    return 0;
}