#include <stdio.h>
#include <stdlib.h>
char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    
struct compu {
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
}typedef compu;

void cargarComputadora(compu *computadoras, int cantidad);
void listarPCs(compu pcs[], int cantidad);
void mostrarMasVieja(compu pcs[], int cantidad);
void mostrarMasVeloz(compu pcs[], int cantidad);


void cargarComputadora(compu *commputadoras, int cantidad){
    int aletorio = 0;
    for (int i = 0; i < cantidad; i++)
    {
        commputadoras[i].velocidad = 1 + rand()% 3;
        commputadoras[i].anio = 2015 + rand()% (2024 - 2015 + 1);
        commputadoras[i].cantidad_nucleos = 1 + rand()% 8;
        aletorio = rand()% 6;
        commputadoras[i].tipo_cpu = tipos[aletorio];
    }
}
void listarPCs(compu pcs[], int cantidad){
    for (int i = 0; i < cantidad; i++)
    {
        printf("Computadora numero %d: \n", i + 1);
        printf("\t-Velocidad: %d\n", pcs[i].velocidad);
        printf("\t-Anio: %d\n", pcs[i].anio);
        printf("\t-Cantidad de nucleos: %d\n", pcs[i].cantidad_nucleos);
        printf("\t-Tipo de cpu: %d\n", pcs[i].tipo_cpu);
    }
    
}
void mostrarMasVieja(compu pcs[], int cantidad){
    int mas_vieja = 9999, valor = 0;
    for (int i = 0; i < cantidad; i++)
    {
        if (pcs[i].anio < mas_vieja);
        {
            mas_vieja = pcs[i].anio;
            valor = i;
        }
    }
    printf("La computadora mas vieja es del anio: %d\n", pcs[valor].anio);
    printf("-Velocidad: %d\n", pcs[valor].velocidad);
    printf("-Cantidad de nucleos: %d\n", pcs[valor].cantidad_nucleos);
    printf("-Tipo de cpu: %d\n", pcs[valor].tipo_cpu);
}
void mostrarMasVeloz(compu pcs[], int cantidad){
    int veloz = 0, valor = 0;
    for (int i = 0; i < cantidad; i++)
    {
        if (pcs[i].velocidad > valor)
        {
            valor = pcs[i].velocidad;
            valor = i;
        }
    }
    printf("La mas veloz tiene de velocidad: %d\n", pcs[valor].velocidad);
    printf("-Anio: %d\n", pcs[valor].anio);
    printf("-Cantidad de nucleos: %d\n", pcs[valor].cantidad_nucleos);
    printf("-Tipo de cpu: %d\n", pcs[valor].tipo_cpu);
}
