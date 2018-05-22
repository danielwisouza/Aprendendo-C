#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX 10000
// definição de um novo tipo
typedef struct dado
{
        //campos da estrutura
         char nome [20];
         char rg[10];
         int anonasc;
}PESSOA;

//variáveis globais
PESSOA cadastro[10];//máximo de 10 pessoas
int controle=0;//quantas pessoas já foram cadastradas
int ANO;//ano atual
PESSOA *p[MAX];
void insere()
{
    char no[20],copyRG[10];
    int i, n;
    printf("\nQuantos registros?");
    while(!scanf("%d",&n))
    {
        while(getchar()!='\n')printf("\nQauntos registros?");
    }
    for (i=0; i<n; i++)
    {
        p[i]=malloc(sizeof(PESSOA));
        printf("Digite nome: ");
        fflush(stdin);
        fgets(no,20,stdin);
        strcpy(p[i]->nome,no);
        printf("Digite RG: ");
        fflush(stdin);
        fgets(copyRG,10,stdin);
        strcpy(p[i]->rg,copyRG);
        printf("Digite Nascimento: ");
        scanf("%d",&p[i]->anonasc);
        controle++;
    }
}
void imprime()
{
     char dateStr [9];//data no formato dd/mm/aa\0
     int i,idade;
     int ind;
     _strdate(dateStr);//chamada de uma função da biblioteca time.h
     ANO=2000+((dateStr[6]-48)*10)+((dateStr[7]-48));//ajuste do ano atual
     printf("\nQual pessoa Deseja consultar a idade:\n");
     for(i=0;i<10;i++){
        printf("%i: %s",i,p[i]->nome);
     }
     printf("\nDigite o numero corespondente ao nome: ");
     fflush(stdin);//limpa buffer
     scanf("%i",&ind);
     idade = (ANO - p[ind]->anonasc);
     printf("%s: %i anos de idade",p[ind]->nome,idade);

}

void listar_ano()
{
    int i,busca;
    printf("\nQual ano deseja buscar? ");
    scanf("%i",&busca);
    printf("\nLista de pessoas cadastradas no ano: ");
    for (i=0;i<controle;i++){
        if (p[i]->anonasc>=busca){
            printf("\n%s",p[i]->nome);
        }
    }
}
void listar_ano_antes()
{
    int i,busca;
    printf("Qual ano deseja buscar? ");
    scanf("%i",&busca);
    printf("\nLista de pessoas cadastradas no ano: ");
    for (i=0;i<controle;i++){
        if (p[i]->anonasc<=busca){
            printf("\n%s",p[i]->nome);
        }
    }
}
void encontrarRG()
{
    int i;
    char RG2[10];
    printf("Digite o RG de busca:");
    fflush(stdin);//limpa buffer
    fgets(RG2,10,stdin);
    printf("\nEncontramos os seguintes RGs cadastrados:");
    for (i=0;i<controle;i++){
        if (strcmp(RG2,(p[i]->rg))==0){
            printf("\n%s",p[i]->nome);
        }
    }
}
int main()
{
    system("cls");
    char op;
    do{
    printf("\nMENU DE OPCOES\n");
    printf(" A - Cadastrar uma Pessoa\n");
    printf(" B - Calcular a Idade\n");
    printf(" C - Listar pessoas a partir ano\n");
    printf(" D - Listar pessoas antes ano\n");
    printf(" E - Encontrar pessoa RG\n");
    printf(" S - Sair\n");
    printf("Escolha opcao:");
    op=getche();
    op=tolower(op);
    switch(op)
     {
        case 'a':{system("cls");
                printf("\nOpcao A Cadastrando Pessoa\n");
                insere();
                break;
        }
        case 'b':{system("cls");
                printf("\nOpcao B Calcular a Idade\n");
                imprime();
                break;
        }
        case 'c':{system("cls");
                printf("\nOpcao C Listar pessoas a partir ano\n");
                listar_ano();
                break;
         }
        case 'd':{system("cls");
                printf("\nOpcao D Listar pessoas antes ano\n");
                listar_ano_antes();
                break;
         }
        case 'e':{system("cls");
                printf("\nOpcao E Encontrar pessoa RG\n");
                encontrarRG();
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

