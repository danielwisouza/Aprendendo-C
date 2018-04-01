#include <stdio.h>
#include <stdlib.h>

//coordenadas do planeta (xp, yp, zp) = (0,4,-1)
//coordenadas da nave 0 (x[0],y[0],z[0]) =(5,4,-1)
//coordenadas da nave 1 (x[1],y[1],z[1]) =(4,4,-1)
//coordenadas da nave 2 (x[2],y[2],z[2]) =(3,4,-1)
//coordenadas da nave 3 (x[3],y[3],z[3]) =(2,4,-1)
//coordenadas da nave 4 (x[4],y[4],z[4]) =(1,4,-1)



int main()
{
    int xp, yp, zp;
    int x[5],y[5],z[5];
    //Coordenadas Planeta
    xp, yp, zp = (0,4,-1);
    //Coordenadas Nava
    x[0],y[0],z[0] = (5,4,-1);x[1],y[1],z[1] = (4,4,-1);x[2],y[2],z[2] = (3,4,-1);x[3],y[3],z[3] = (2,4,-1);x[4],y[4],z[4] = (1,4,-1);
    system("pause");
    return 0;
}

