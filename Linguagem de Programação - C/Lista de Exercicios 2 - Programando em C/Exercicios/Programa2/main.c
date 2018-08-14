#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

void classificacao(float classfi)
{
    if (classfi >= 7000.01)
        printf("\nBem Remunerado");
    if (classfi < 70000.00)
        printf("\nMal Remunerado");
}
void porcentagem(float novo)
{
    float porce;
    if (novo>15000.00);(porce=0.1);
    if ((novo>=7500.00) && (novo<=15000.00));(porce=0.2);
    if ((novo>=1000.00) && (novo<7500.00));(porce=0.3);
    if (novo<1000.00);(porce=0.4);
    printf("Valor do novo salario %2.f",(novo*porce+novo));
}
void imposto(float SalarioFuncionario)
{
    float aliquota;
    if (SalarioFuncionario <= 1903.98); (aliquota=0);
    if ((SalarioFuncionario>1903.98) && (SalarioFuncionario<=2826.65));(aliquota=0.075);
    if ((SalarioFuncionario>2826.65) && (SalarioFuncionario<=3751.05));(aliquota=0.15);
    if ((SalarioFuncionario>3751.05) && (SalarioFuncionario<= 4664.68));(aliquota=0.225);
    if (SalarioFuncionario>4664.68);(aliquota=0.275);
    printf("\nImposto: %.2f",(SalarioFuncionario*aliquota));
}
main()
{
    float salario;
    char op;
    do
    {
     printf(" MENU DE OPCOES ");
     printf("\n ----------------------- ");
     printf("\n A - Imposto ");
     printf("\n B - Novo Salario ");
     printf("\n C - Classificacao ");
     printf("\n S - Fechar Programa ");
     printf("\n\n Escolha uma opcao: ");
     op=getche();
     op=tolower(op);//mandando para min�sculo
     switch(op)
     {
        case 'a':{system("cls");
                printf("\nOpcao A escolhida Imposto ");
                printf("\nDigite Salario Funcionario: ");
                scanf("%f",&salario);
                imposto(salario);
                break;
        }
         case 'b':{system("cls");
                printf("\nOpcao B escolhida: Novo Salario ");
                printf("\nDigite Salario Funcionario: ");
                scanf("%f",&salario);
                porcentagem(salario);
                break;
        }
         case 'c':{system("cls");
                printf("\nOpcao C escolhida: Classificacao ");
                printf("\nDigite Salario Funcionario: ");
                scanf("%f",&salario);
                classificacao(salario);
                break;
         }
         case 's': {system("cls");
                printf("\nSaindo.. ");
                break;
         }
         default:printf("\nOpcao Incorreta.");

     }
    }while(op!='s');
    return 0;
    system("pause");
}

