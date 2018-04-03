#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calculo.h"

int main()
{
    int xp, yp, zp,i;
    int x[5]={5,4,3,2,1};
    int y[5]={4,4,4,4,4};
    int z[5]={-1,-1,-1,-1,-1};
    float aa,ba,ca,da,ea;
    float ab,bb,cb,db,eb;
    float ac,bc,cc,dc,ec;
    //Coordenadas Planeta
    xp=-1;
    yp=4;
    zp=-5;
    //Coordenadas Nava
    aa = (espaco_unidimensional(xp,x,i=0));
    ba = (espaco_unidimensional(xp,x,i=1));
    ca = (espaco_unidimensional(xp,x,i=2));
    da = (espaco_unidimensional(xp,x,i=3));
    ea = (espaco_unidimensional(xp,x,i=4));
    float unidimensional[5]={aa,ba,ca,da,ea};
    printf("\n---------- Resultado Espaco Unidimencional ----------");
    printf("\nNave 0: %.2f\nNave 1: %.2f\nNave 2: %.2f\nNave 3: %.2f\nNave 4: %.2f\n",unidimensional[0],unidimensional[1],unidimensional[2],unidimensional[3],unidimensional[4]);


    ab = (espaco_bidimensional(xp,yp,x,y,i=0));
    bb = (espaco_bidimensional(xp,yp,x,y,i=1));
    cb = (espaco_bidimensional(xp,yp,x,y,i=2));
    db = (espaco_bidimensional(xp,yp,x,y,i=3));
    eb = (espaco_bidimensional(xp,yp,x,y,i=4));
    float bidimensional[5]={ab,bb,cb,db,eb};
    printf("\n---------- Resultado Espaco Bidimencional ----------");
    printf("\nNave 0: %.2f\nNave 1: %.2f\nNave 2: %.2f\nNave 3: %.2f\nNave 4: %.2f\n",bidimensional[0],bidimensional[1],bidimensional[2],bidimensional[3],bidimensional[4]);

    ac = (espaco_tridimensional(xp,yp,zp,x,y,z,(i=0)));
    bc = (espaco_tridimensional(xp,yp,zp,x,y,z,(i=1)));
    cc = (espaco_tridimensional(xp,yp,zp,x,y,z,(i=2)));
    dc = (espaco_tridimensional(xp,yp,zp,x,y,z,(i=3)));
    ec = (espaco_tridimensional(xp,yp,zp,x,y,z,(i=4)));
    float tridimensional[5]={ac,bc,cc,dc,ec};
    printf("\n---------- Resultado Espaco Tridimencional ----------");
    printf("\nNave 0: %.2f\nNave 1: %.2f\nNave 2: %.2f\nNave 3: %.2f\nNave 4: %.2f\n",tridimensional[0],tridimensional[1],tridimensional[2],tridimensional[3],tridimensional[4]);

    system("pause");
    return 0;
}

