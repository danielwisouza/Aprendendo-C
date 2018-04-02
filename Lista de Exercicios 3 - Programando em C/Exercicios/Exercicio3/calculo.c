#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calculo.h"

//a) distância entre dois pontos com duas dimensões
//b) distância entre dois pontos com três dimensões
float distantcia_duas_dimensoes1(int xp,int yp,int zp,int x[],int y[], int z[])
{
    float tot[5]={0,0,0,0,0};
    tot[0] = (sqrt((pow((xp-x[0]),(2))) + (pow((yp-y[0]),(2))) + (pow((zp-z[0]),(2)))));
    tot[1] = (sqrt((pow((xp-x[1]),(2))) + (pow((yp-y[1]),(2))) + (pow((zp-z[1]),(2)))));
    tot[2] = (sqrt((pow((xp-x[2]),(2))) + (pow((yp-y[2]),(2))) + (pow((zp-z[2]),(2)))));
    tot[3] = (sqrt((pow((xp-x[3]),(2))) + (pow((yp-y[3]),(2))) + (pow((zp-z[3]),(2)))));
    tot[4] = (sqrt((pow((xp-x[4]),(2))) + (pow((yp-y[4]),(2))) + (pow((zp-z[4]),(2)))));
    return tot;
}

