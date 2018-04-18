#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char letra[5];
    char copia[5];
    int i,cont,e;
    for(i=0;i<5;i++)
    {
      (letra[i]=getche());
    }
    printf("\n");
    for (i=0; i <5; i=i+1){
    cont = 4;
    for (e=0; e <5; e=e+1){
        if (letra[i] < letra[e]){
            cont--;
        }
    }
    copia[cont]=letra[i];
    }
    printf("%c, %c, %c, %c, %c",copia[0],copia[1],copia[2],copia[3],copia[4]);
}
