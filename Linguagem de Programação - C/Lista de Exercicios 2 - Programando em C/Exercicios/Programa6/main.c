#include <stdio.h>
#include <stdlib.h>


void abastecerPorValor(float valor)
{

}

void abastecerPorLitro(float litros)
{

}

void alterarValor( loat valor)
{

}

void alterarCombustivel(char c)
{

}

void alterarQuantidadeCombustivel( )
{

}
int main()
{

    char tipoCombustivel;
    float valorLitro, quantidadeCombustivel;
    char op;
    system("cls");
    do
    {
     printf("\n\n MENU DE OPCOES ");
     printf("\n ----------------------- ");
     printf("\n A - Abastecwe por Valor");
     printf("\n B - Abastecer por Litro");
     printf("\n B - Alterar Valor ");
     printf("\n C - Alterar Combustivel ");
     printf("\n D - Alterar Quantidade Combustivel");
     printf("\n S - Saindo");
     printf("\n\n Escolha uma opcao: ");
     op=getche();
     op=tolower(op);//mandando para min�sculo
     switch(op)
     {
        case 'a':{system("cls");
                printf("\nOpcao A Abastecer por Valor");

                break;
        }
        case 'b':{system("cls");
                printf("\nOpcao B Abastecer por Litro ");

                break;
        }
        case 'c':{system("cls");
                printf("\nOpcao C Alterar Valor");

                break;
         }
        case 'd':{system("cls");
                printf("\nOpcao D Alterar Combustivel ");

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
