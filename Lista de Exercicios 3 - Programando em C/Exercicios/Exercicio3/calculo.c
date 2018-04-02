#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calculo.h"

//a) distância entre dois pontos com duas dimensões
//b) distância entre dois pontos com três dimensões
//c) distância entre dois pontos com uma dimensão
void distantcia_duas_dimensoes1(int xp,int yp,int zp,int x[],int y[], int z[])
{
    float tot1,tot2,tot3;
    tot1 = (sqrt((pow((xp-x[0]),(2))) + (pow((yp-y[0]),(2))) + (pow((zp-z[0]),(2)))));
    tot2 = (sqrt((pow((xp-x[1]),(2))) + (pow((yp-y[1]),(2))) + (pow((zp-z[1]),(2)))));
    tot3 = (sqrt((pow((xp-x[2]),(2))) + (pow((yp-y[2]),(2))) + (pow((zp-z[2]),(2)))));
    printf(" i %.2i",tot1);
    printf(" f %.2f",tot1);
}
//int distantcia_duas_dimensoes2(int xp,int yp,int zp,int x[],int y[], int z[])
//{
//    float tot;
//    tot = (sqrt((pow((x[1]-xp),(2))) + (pow((y[1]-yp),(2))) + (pow((z[1]- zp),(2)))));
//    return tot;
//}
//int distantcia_duas_dimensoes3(int xp,int yp,int zp,int x[],int y[], int z[])
//{
//    float tot;
//    tot = (sqrt((pow((x[2]-xp),(2))) + (pow((y[2]-yp),(2))) + (pow((z[2]- zp),(2)))));
//    return tot;
//}
