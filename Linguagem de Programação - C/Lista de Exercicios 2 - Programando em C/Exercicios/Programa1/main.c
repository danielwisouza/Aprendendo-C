#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int perimetro_quadrado(int lado);//s� declara��o
void perim_menor_10 (int lado)
{
    if (perimetro_quadrado(lado) < 10)
        printf("\nB2 Perimetro quadrado menor que 10.");
    else
        printf("\nB2 Perimetro quadrado maior que 10.");
}

int area_maior_10 (int lado)
{
    int area;
    if ((lado*lado) >= 10);(area = 1);
    if ((lado*lado) < 10);(area = 0);
    return area;
}
void area_quadrado(int lado)
{
    printf("\narea=%d",lado*lado);
}

float diagonal_quadrado()
{
  int lado;
  printf("\nDigite o lado");
  scanf("%d", &lado);
  return(lado*sqrt(2));
}
int main()
{
    char op;
    int la;
    do
    {
     printf("\no que deseja:\npERIMETRO\naREA\ndIAGONAL\nsAIR\n");
     op=getche();
     op=tolower(op);//mandando para min�sculo
     switch(op)
     {
         case 'p':printf("\nlado?");
                  scanf("%d",&la);
                  printf("\nperi=%d",perimetro_quadrado(la));
                  perim_menor_10(la);
                  break;
         case 'a':printf("\nlado?");
                  scanf("%d",&la);
                  area_quadrado(la);
                  printf("\nB1 area retorna: %i",area_maior_10(la));
                  break;

         case 'd':printf("\ndiagonal=%.2f",diagonal_quadrado());
                  break;
         case 's': printf("\n tchau");
                  break;
         default:printf("\n op errada");

     }
    }while(op!='s');

    return 0;
}

int perimetro_quadrado(int lado)
{
    return(4*lado);
}
