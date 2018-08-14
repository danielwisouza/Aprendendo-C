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

void menorTRI(float tridimensional[])
{
  int i = 0,e = 0,cont;
  int ordem[5]={0,0,0,0,0};
  for (i=0; i <5; i=i+1){
  cont = 4;
    for (e=0; e <5; e=e+1){
        if (tridimensional[i] < tridimensional[e]){
            cont--;
            }
    }
    ordem[cont]=i;
  }
    printf("%i, %i, %i, %i, %i",ordem[0],ordem[1],ordem[2],ordem[3],ordem[4]);
  }

