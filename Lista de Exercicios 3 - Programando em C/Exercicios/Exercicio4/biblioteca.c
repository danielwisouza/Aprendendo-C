#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "biblioteca.h"

void adicao (int a, int b)
{
    int i,e;
    int vetor[4][4];
    for (i=0;i<3;i++){
        for (e=0;e<3;e++){
            vetor[i][e] = ((a[i][e])+(b[i][e]));
            }
    }
    for (i=0;i<3;i++){
        for (e=0;e<3;e++){
            printf("%d ", a[i][e]);
            }
    printf("\n"); // para pular linha quando terminar a coluna
    }
}
