#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calculo.h"
//coordenadas do planeta (xp, yp, zp) = (0,4,-1)
//coordenadas da nave 0 (x[0],y[0],z[0]) =(5,4,-1)
//coordenadas da nave 1 (x[1],y[1],z[1]) =(4,4,-1)
//coordenadas da nave 2 (x[2],y[2],z[2]) =(3,4,-1)
//coordenadas da nave 3 (x[3],y[3],z[3]) =(2,4,-1)
//coordenadas da nave 4 (x[4],y[4],z[4]) =(1,4,-1)

int main()
{
    int xp, yp, zp,i=0;
    int x[6]={5,4,3,2,1};
    int y[6]={4,4,4,4,4};
    int z[6]={-1,-1,-1,-1,-1};
    float aa,ba,ca,da,ea;
    float ab,bb,cb,db,eb;
    float ac,bc,cc,dc,ec;
    //Coordenadas Planeta
    xp=0;
    yp=4;
    zp=1;
    //Coordenadas Nava
    aa = (espaço_unidimensional (xp,x,i));
    ba = (espaço_unidimensional (xp,x,i=1));
    ca = (espaço_unidimensional (xp,x,i=2));
    da = (espaço_unidimensional (xp,x,i=3));
    ea = (espaço_unidimensional (xp,x,i=4));

    ab = (espaço_bidimensional(xp,yp,x,y,i=0));
    bb = (espaço_bidimensional(xp,yp,x,y,i=1));
    cb = (espaço_bidimensional(xp,yp,x,y,i=2));
    db = (espaço_bidimensional(xp,yp,x,y,i=3));
    eb = (espaço_bidimensional(xp,yp,x,y,i=4));

    ac = (espaço_tridimensional(xp,yp,zp,x,y,z,(i)));
    bc = (espaço_tridimensional(xp,yp,zp,x,y,z,(i=1)));
    cc = (espaço_tridimensional(xp,yp,zp,x,y,z,(i=2)));
    dc = (espaço_tridimensional(xp,yp,zp,x,y,z,(i=3)));
    ec = (espaço_tridimensional(xp,yp,zp,x,y,z,(i=4)));
    system("pause");
    return 0;
}

