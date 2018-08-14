#include <stdio.h>
#include <stdlib.h>
#include<conio.h>


int main()
{
    char semana[7][4]={"SAB","DOM","SEG","TER","QUA","QUI","SEX"};
    int a,b,c,d,e,f,g,h,i,j,dia,mes,ano;
    printf("---  Quem dia e Hoje ---\n");
    printf("\nDigite dia:");
    scanf("%i",&dia);
    printf("\Digite mes:");
    scanf("%i",&mes);
    printf("\Digite ano:");
    scanf("%i",&ano);
    a = ((12-mes)/10);
    b = (ano-a);
    c = (mes+(12*a));
    d = (b/100);
    e = (d / 4);
    f = (2 - d + e);
    g = (365.25 * b);
    h = (30.6001 * (c + 1));
    i = (f + g + h + dia + 5);
    j = (i % 7);
    printf("\nValor de J: %i\n",j);
    printf("O dia %i/%i/%i e %s\n.",dia,mes,ano,semana[j]);
    system("pause");
    return 0;
}
