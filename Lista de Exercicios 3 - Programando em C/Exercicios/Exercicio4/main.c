#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "biblioteca.h"

int main()
{
    int coluna=4,linha=4;
    int a[linha][coluna], b[linha][coluna];
    int i,e;
    char op;
    printf("Insira os Elementos da Matriz 4 X 4 numeros: Matriz 1\n");
    for (i=0; i <linha; i=i+1){
        for (e=0; e <coluna; e=e+1){
        scanf("%i",&a[i][e]);
    }}
    system("cls");
    printf("Insira os Elementos da Matriz 4 X 4: Matriz 2\n");
    for (i=0; i <linha; i=i+1){
        for (e=0; e <coluna; e=e+1){
        scanf("%i",&b[i][e]);
    }}
    system("cls");
    //exibir(a,b);
    do
    {
     printf(" MENU DE OPCOES ");
     printf("\n ----------------------- ");
     printf("\n A - Somar");
     printf("\n B - Subtrair ");
     printf("\n S - Saindo");
     printf("\n\n Escolha uma opcao: ");
     op=getche();
     op=tolower(op);//mandando para min�sculo
     switch(op)
     {
        case 'a':{system("cls");
                printf("\nOpcao A Somar ");
                adicao(a,b);
                break;
        }
        case 'b':{system("cls");
                printf("\nOpcao B Subtrair");
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

