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
    int xp, yp, zp;
    int x[6]={5,4,3,2,1};
    int y[6]={4,4,4,4,4};
    int z[6]={-1,-1,-1,-1,-1};
    //Coordenadas Planeta
    xp=0;
    yp=4;
    zp=1;
    //Coordenadas Nava
    printf("\n%.2f",distantcia_duas_dimensoes1(xp,yp,zp,x,y,z));
    system("pause");
    return 0;
}

