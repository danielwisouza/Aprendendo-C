#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "matriz.h"

int main()
{
    int coluna=4,linha=4;
    int a[linha][coluna], b[linha][coluna];
    int i=0,e=0;
    char op;
    printf("Insira os Elementos da Matriz 4 X 4 numeros: Matriz 1\n");
    for (i=0; i <linha; i=i+1){
        for (e=0; e <coluna; e=e+1){
        printf("Insira os Elementos [%i][%i] da Matriz: ",i,e);
        scanf("%i",&a[i][e]);
    }}
    //system("cls");
    printf("Insira os Elementos da Matriz 4 X 4: Matriz 2\n");
    for (i=0; i <linha; i=i+1){
        for (e=0; e <coluna; e=e+1){
        printf("Insira os Elementos [%i][%i] da Matriz: ",i,e);
        scanf("%i",&b[i][e]);
    }}

    //system("cls");
    //printf("%i", a[0][0]);
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
                printf("\nOpcao A SOMA");
                fflush(stdin);
                int k=0,j=0;
                int soma[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
                printf("\nSomando\n");
                for (k=0; k<4; k++){
                    for (j=0; j<4; j++){
                soma[k][j] = a[k][j] + b[k][j];
                printf("%i ",soma[k][j]);
                }
                printf("\n"); // para pular linha quando terminar a coluna
                }
                break;
        }
        case 'b':{system("cls");
                printf("\nOpcao B Subtrair");
                fflush(stdin);
                int k=0,j=0;
                int soma[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
                printf("\nSomando\n");
                for (k=0; k<4; k++){
                    for (j=0; j<4; j++){
                soma[k][j] = a[k][j] - b[k][j];
                printf("%i ",soma[k][j]);
                }
                printf("\n"); // para pular linha quando terminar a coluna
                }
                break;
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

