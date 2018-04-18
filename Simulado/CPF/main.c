#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    char cpf[11];
    int i=0;
    int s=0,s2=0,numero1,numero2,n1=10,n2=11;
    s = 0;
    do
    {

    printf("\nSISTEMA DE GERENCIAMENTO DE CPF\n");
    printf("\nMenu de Opcoes");
    printf("\n");
    printf("\n A - Adicionando CPF");
    printf("\n B - Validando CPF");
    printf("\n C - Alterando CPF");
    printf("\n S - Sair");
    printf("\n\n Escolha a opcao: ");
    op=getche();
    op=tolower(op);
    system("cls");
    switch(op)
    {
        case 'a':{system("cls");
            printf("\nAdicionando CPF\n");
            printf("Digite CPF: ");
            scanf("%s",cpf);

            printf("\nCPF %s Adicionando \n",cpf);
            break;

        }

        case 'b':{system("cls");
            printf("\nValidando CPF");
            for (i=0;i<9;i++){
                    s = s + ((cpf[i]-48)*n1);
                    n1=n1-1;
            }
            numero1 = (s%11);
            if (numero1 < 2)
            {
                numero1=0;
            }
            else
            {
                numero1=11-numero1;
            }

            for (i=0;i<9;i++){
                s2 = s2 + ((cpf[i]-48)*n2);
                n2=n2-1;
            }
            s2 = s2 + ((numero1)*2);
            numero2 = (s2%11);
            if (numero2 < 2)
            {
                numero2=0;
            }
            else
            {
                numero2=11-numero2;
            }

            if ((cpf[9]-48)==numero1 && (cpf[10]-48)==numero2)
            {
                printf("\nCPF VALIDO OK");
                printf("\nCPF ORIGINAL %s",cpf);
            }
            else
            {
                printf("\nCPF INVALIDO  ");
                printf("%s",cpf);
            }

            break;
        }

        case 'c':{system("cls");
            printf("\nAlterando CPC\n");
            printf("Digite novo CPF: ");
            scanf("%s",cpf);
            printf("\nCPF alterado para %s \n",cpf);
            break;

            break;
        }

        case 's':{system("cls");
            printf("\nSaindo..");

            break;

        }
        default:printf("\nOpcao invalida");

    }

    }while(op!='s');
    system('pause');
    return 0;
}
