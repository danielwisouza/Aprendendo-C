#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "caracteres.h"

int main()
{
    char s[3][7];
    char letra;
    int i;
    printf("\Digite nomes:\n");
    for(i=0;i<3;i++)
    {
        gets(s[i]);
    }
    printf("qual letra?");
    letra=getche();
    substitui_caracter(s[1],letra);
    printf("\n%d",conta_caracter(s[0],letra));
    printf("\nVogais nome 1: %i",conta_vogais(s[0]));
    printf("\nVogais nome 2: %i",conta_vogais(s[1]));
    printf("\nVogais nome 3: %i",conta_vogais(s[2]));
    substitui_vogais_por_asterisco(s[0],letra);
    substitui_vogais_por_asterisco(s[1],letra);
    substitui_vogais_por_asterisco(s[2],letra);
    conta_consoante(s[0]);
    return 0;
}
