#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "principal.h"

void ordem(char nome[])
{
  int i = 0,menor = 97,cont;
  char ordem[3][15]={"a","b","c"};
  for (i=0; i <3; i=i+1){
  cont = 3;
        if (tolower(nome[i][0]) < menor){
        cont--;
        }

    ordem[cont]=i;
  }
    printf("%i, %i, %i",ordem[0],ordem[1],ordem[2];
  }
