#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>

int main()
{
    char nome[3][15];
    char op;
    int i;
    printf("Digite 3 nomes:\n");
    for(i=0;i<3;i++)
    {
        gets(nome[i]);
    }
    do
    {
     printf(" OPERANDO STRINGS - NOME ");
     printf("\n ----------------------- ");
     printf("\n A - Imprimir os nomes em ordem alfabetica");
     printf("\n B - Imprimir os nomes em letras maiusculas");
     printf("\n C - Informar apenas um nome");
     printf("\n S - Saindo");
     printf("\n\n Escolha uma opcao: ");
     op=getche();
     op=tolower(op);//mandando para min�sculo
     switch(op)
     {
        case 'a':{system("cls");
                printf("\nOpcao A Imprimir os nomes em ordem alfabetica\n");
                printf("%i",nome[0][0]); m
                break;
        }
        case 'b':{system("cls");
                printf("\nOpcao B Imprimir os nomes em letras maiusculas\n");
        }
                break;
        case 'C':{system("cls");
                printf("\nOpcao C Informar apenas um nome\n");
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
