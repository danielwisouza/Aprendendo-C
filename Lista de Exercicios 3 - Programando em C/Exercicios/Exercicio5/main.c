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
                //printf("%i",tolower(nome[0][0]));
                int x,cont;
                for (i=0; i<3;i++){
                    cont=2;
                    for (x=0; x<3;x++){
                        if ((tolower(nome[i][0])) < (tolower(nome[x][0]))){
                            cont--;
                        }
                    }
                printf("\n%s",nome[cont]);
                }
                //Arrumar aqui Daniel, se nome com segunda letra igual bug
                break;

        }
        case 'b':{system("cls");
                printf("\nOpcao B Imprimir os nomes em letras maiusculas\n");
                for (i=0; i<3;i++){
                    printf("\n%s",strupr(nome[i]));
                    }
        }
                break;
        case 'c':{system("cls");
                int id=0;
                printf("\nOpcao C Informar apenas um nome\n");
                printf("Digite o identificador 0, 1 ou 2:");
                scanf("%i",&id);
                printf("\n%s",nome[id]);
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
