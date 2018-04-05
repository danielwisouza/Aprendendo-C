#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "matriz.h"

//void exibir(int a[],int b[])
//{
//    int i=0,j=0;
//    printf("Matriz A ");
//    for (i=0;i<4;i++){
//        for (j=0;j<4;j++){
//            //printf("%i", a[i][j]);
//    }
//    //printf("\n"); // para pular linha quando terminar a coluna
//    }
//}

void somar(int a[], int b[])
{
    int i=0,j=0;
    int soma[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    printf("Somando");
    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
          soma[i][j] = a[i][j] + b[i][j];
            printf("%i",soma[i][j]);
    }
    printf("\n"); // para pular linha quando terminar a coluna
    }
}

void subtrair(int a[],int b[])
{
    int i=0,j=0;
    int soma[4][4];
    printf("Subtraindo");
    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            soma[i][j] = a[i][j] - b[i][j];
            printf("%i",soma[i][j]);
    }
    printf("\n"); // para pular linha quando terminar a coluna
    }
}
