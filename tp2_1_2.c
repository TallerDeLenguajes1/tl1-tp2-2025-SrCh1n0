#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main(){
    
    int i;
    double vt[N], *pVT;
    srand (time(NULL));
    for(i = 0; i < N; i++)
    {
        vt[i] = 1 + rand()%100;
        printf("%f\n", vt[i]);
    }
    printf("Ahora recorro el arreglo con aritmetica de punteros: \n");
    pVT = vt;
    for(i = 0; i < N; i++)
    {
        printf("%f\n", *pVT++);
    }
    return 0;
}