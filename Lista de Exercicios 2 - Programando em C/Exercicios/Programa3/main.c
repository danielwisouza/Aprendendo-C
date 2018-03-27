#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

void moda (int numero[])
{
  int i = 0,cont = 0,mir=0;
  int posicao =0,repitir = 0;
  for (i; i <5; i=i+1){
        for (cont; cont <5; cont=cont+1){
        if (numero[i] ==  numero[cont]){
            posicao= posicao+ 1;}}
        if (posicao > mir){
            mir = posicao;
            repitir = numero[i];
        }
  }
  printf("\nNumero que mais se repete %i",repitir);
}

void mediana (int numero[])
{

}

void maior (int numero[])
{
  int i = 0,mr=numero[0];
  for (i; i <5; i=i+1){
        if (numero[i] > mr)mr = (numero[i]);}
    printf("Maior numero %i",mr);
}

void menor (int numero[])
{
  int i = 0,mn=numero[0];
  for (i; i <5; i=i+1){
        if (numero[i] < mn)mn = (numero[i]);}
    printf("Maior numero %i",mn);
}
void media_aritmetica (int numero[])
{
    float total,media;
    int i = 0;
    total = (numero[0]+numero[1]+numero[2]+numero[3]+numero[4]);
    media = (total / 5);
    printf("\nMedia Aritmetica = %.2f\n",media);
}
main()
{
    int numero [5]={0};
    int i = 0;
    //Inicializei o Vetor com todos os números valendo Zero
    char op;
    printf("Insira 5 numeros:\n");
    for (i; i <5; i=i+1)
        scanf("%i",&numero[i]);
    system("cls");
    do
    {
     printf("\nNumeros %i %i %i %i %i\n\n",numero[0],numero[1],numero[2],numero[3],numero[4]);
     printf(" MENU DE OPCOES ");
     printf("\n ----------------------- ");
     printf("\n A - Maior");
     printf("\n B - Menor ");
     printf("\n C - Media Aritmetica ");
     printf("\n D - Mediana ");
     printf("\n E - Moda");
     printf("\n S - Saindo");
     printf("\n\n Escolha uma opcao: ");
     op=getche();
     op=tolower(op);//mandando para min�sculo
     switch(op)
     {
        case 'a':{system("cls");
                printf("\nOpcao A Maior Numero ");
                maior(numero);
                break;
        }
        case 'b':{system("cls");
                printf("\nOpcao B Menor Numero ");
                menor(numero);
                break;
        }
        case 'c':{system("cls");
                printf("\nOpcao C Media Aritmetica ");
                media_aritmetica(numero);
                break;
         }
        case 'd':{system("cls");
                printf("\nOpcao D Mediana ");
                mediana(numero);
                break;
         }
        case 'e':{system("cls");
                printf("\nOpcao E Moda ");
                moda(numero);
                break;
         }
         case 's':{system("cls");
                printf("\nSaindo.. ");
                break;
         }
         default:printf("\nOpcao Incorreta.");

     }
    }while(op!='s');
    return 0;
    system("pause");
}

