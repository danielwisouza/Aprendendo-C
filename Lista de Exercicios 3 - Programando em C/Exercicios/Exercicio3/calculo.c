#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calculo.h"


float espaco_unidimensional(int xp,int x[],int i)
{
    float tot=0;
    //d = |xp - x[i]|
    tot = (xp - x[i]);
    if (tot < 0)(tot=tot*(-1));
    return tot;
}

float espaco_bidimensional(int xp,int yp,int x[],int y[],int i)
{
    float tot=0,tot1=0,tot2=0;
    //d = √((x2 - x1)2 + (y2 - y1)2)
    tot1 =(pow((xp - (x[i])) ,(2)));
    tot2 =(pow((yp - (y[i])) ,(2)));
    tot = sqrt(tot1+tot2);
    return tot;
}

float espaco_tridimensional(int xp,int yp,int zp,int x[],int y[], int z[],int i)
{
    float tot=0,tot1=0,tot2=0,tot3=0;
    //d = √((xp - x[i])2 + (yp - y[i])2 + (zp - z[i])2)
    tot1 = (pow(( xp - (x[i])) ,(2)));
    tot2 = (pow(( yp - (y[i])) ,(2)));
    tot3 = (pow(( zp - (z[i])) ,(2)));
    tot =  sqrt(tot1+tot2+tot3);
    return tot;
}

//void menorUNI(float unidimensional[])
//{
//  int i = 0,mn=numero[0];
//  for (i; i <5; i=i+1){
//        if (numero[i] < mn)mn = (numero[i]);}
//    printf("Maior numero %i",mn);
//}
