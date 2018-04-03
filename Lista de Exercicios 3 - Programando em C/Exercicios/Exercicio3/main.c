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
    xp=0;
    yp=4;
    zp=1;
    //Coordenadas Nava
    aa = (espaço_unidimensional(xp,x,i=0));
    ba = (espaço_unidimensional(xp,x,i=1));
    ca = (espaço_unidimensional(xp,x,i=2));
    da = (espaço_unidimensional(xp,x,i=3));
    ea = (espaço_unidimensional(xp,x,i=4));


    ab = (espaço_bidimensional(xp,yp,x,y,i=0));
    bb = (espaço_bidimensional(xp,yp,x,y,i=1));
    cb = (espaço_bidimensional(xp,yp,x,y,i=2));
    db = (espaço_bidimensional(xp,yp,x,y,i=3));
    eb = (espaço_bidimensional(xp,yp,x,y,i=4));

    ac = (espaço_tridimensional(xp,yp,zp,x,y,z,(i=0)));
    bc = (espaço_tridimensional(xp,yp,zp,x,y,z,(i=1)));
    cc = (espaço_tridimensional(xp,yp,zp,x,y,z,(i=2)));
    dc = (espaço_tridimensional(xp,yp,zp,x,y,z,(i=3)));
    ec = (espaço_tridimensional(xp,yp,zp,x,y,z,(i=4)));

    system("pause");
    return 0;
}

