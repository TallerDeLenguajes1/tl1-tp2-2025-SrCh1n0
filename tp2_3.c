#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 7

int main(){
    
    int i,j;
    double mt[N][M];
    double *pMT = &mt[0][0];

    srand (time(NULL));

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            *pMT = 1 + rand()%100;
            printf("%lf\n", *pMT++);
        }
        printf("\n");
    }
    return 0;
}