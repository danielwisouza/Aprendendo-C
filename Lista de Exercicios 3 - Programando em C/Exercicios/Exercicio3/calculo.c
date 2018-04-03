#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calculo.h"


float espaço_unidimensional(int xp,int x[],int i)
{
    float tot=0;
    //d = |xp - x[i]|
    tot = (xp - x[i]);
    return tot;
}

float espaço_bidimensional(int xp,int yp,int x[],int y[],int i)
{
    float tot=0;
    //d = √((x2 - x1)2 + (y2 - y1)2)
    tot = (sqrt((pow((xp-x[i]),(2))) + (pow((yp-y[i]),(2)))));
    return tot;
}

float espaço_tridimensional(int xp,int yp,int zp,int x[],int y[], int z[],int i)
{
    float tot=0;
    //d = √((xp - x[i])2 + (yp - y[i])2 + (zp - z[i])2)
    tot = (sqrt((pow((xp-x[i]),(2))) + (pow((yp-y[i]),(2))) + (pow((zp-z[i]),(2)))));
    return tot;
}

