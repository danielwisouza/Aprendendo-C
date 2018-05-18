#include <stdio.h>
#include <stdlib.h>
#define MAX 10000000000000000000000000000000
typedef struct dado
{
        //campos da estrutura
         int centro;
         int raio;
}PESSOA;

//variáveis globais
PESSOA cadastro[1];//máximo de 10 pessoas
int controle=0;//quantas pessoas já foram cadastradas
int ANO;//ano atual
PESSOA *p[MAX];
void insere()
{
    p[0]=malloc(sizeof(PESSOA));
    printf("Digite o RAIO da circunferencia: ");
    scanf("%d",&p[0]->raio);
    printf("Digite o CENTRO da circunferencia: ");
    scanf("%d",&p[0]->centro);
    controle=0;//Igual a zero para sempre sobreescrever os dados pois pede-se somente uma vez
}

void comprimento()
{
    float comp;
    comp = (2*3.14*p[0]->raio);
    printf("O comprimento e %.2f",comp);
}

void area()
{
    float area;
    area = (3.14 * ((p[0]->raio)*(p[0]->raio)));
    printf("A area e %.2f",area);
}

int main()
{
 system("cls");
    char op;
    do{
    printf("\nMENU DE OPCOES");
    printf("\n A - Adicionar Dados\n");
    printf(" B - Calcular Comprimento\n");
    printf(" C - Calcular a area \n");
    printf(" S - Sair\n");
    printf("Escolha opcao: ");
    op=getche();
    op=tolower(op);
    switch(op)
     {
        case 'a':{system("cls");
                printf("\nOpcao A Adicionando dados\n");
                insere();
                break;
        }
        case 'b':{system("cls");
                printf("\nOpcao B Calcular Comprimento\n");
                comprimento();
                break;
        }
        case 'c':{system("cls");
                printf("\nOpcao C Calcular a area\n");
                area();
                break;
        }
        case 's':{system("cls");
                printf("\nSaindo.. ");
                break;
         }
         default:
             ("\nOpcao Incorreta.");

     }
    }while(op!='s');
    return 0;
    system("pause");
}
