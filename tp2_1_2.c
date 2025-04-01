#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main(){
    
    int i;
    double vt[N], *pVT;
    srand (time(NULL));
    pVT = vt;
    for(i = 0; i < N; i++)
    {
        *pVT = 1 + rand()%100;
        printf("%f\n", *pVT++);
    }
    return 0;
}