#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 5

struct compu {
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
}typedef computadora;
void iniciarComputadoras(computadora *computadoras); /* inicializo las computadoras con valores aleatorios */
char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    

int main(){
    // Inicialización de la semilla para la generación de números aleatorios
    srand(time(NULL));
    computadora computadoras[MAX], *puntero_pc = computadoras; // Arreglo de computadoras y puntero a la primera computadora
    iniciarComputadoras(puntero_pc); // Llama a la función para inicializar las computadoras

    return 0;
}

void iniciarComputadoras(computadora *computadoras){
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
        
    for(int i = 0; i < 5; i++){
        int cpu_random = rand() % 6; // Genera un número aleatorio entre 0 y 5 para el tipo de CPU
        computadoras[i].velocidad = rand() % 3 + 1; // Velocidad entre 1 y 3
        computadoras[i].anio = rand() % 10 + 2015; // Año entre 2015 y 2024
        computadoras[i].cantidad_nucleos = rand() % 8 + 1; // Cantidad de núcleos entre 1 y 8
        computadoras[i].tipo_cpu = (char *)malloc(strlen(tipos[cpu_random])+1); // Reserva memoria para el tipo de CPU contando el null
        if (computadoras[i].tipo_cpu == NULL) { // Verifica si la memoria se asignó correctamente
            fprintf(stderr, "Error al asignar memoria para el tipo de CPU\n");
            exit(1); // Termina el programa si no se pudo asignar memoria
        }
        strcpy(computadoras[i].tipo_cpu, tipos[cpu_random]); // Copia el tipo de CPU a la estructura  
    }
}