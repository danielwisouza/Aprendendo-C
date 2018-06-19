#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define ANO 2017

// definição de um novo tipo
typedef struct dado
{
        //campos da estrutura
         char nome [20];
         char rg[10];
         int anonasc;
         struct dado *prox;
}*PESSOA;

void insere(PESSOA *p, char nome2[20], char rg2[10],int anonasc2)
{
     PESSOA ser=malloc(sizeof(struct dado));
     if(ser!=NULL)
     {
          strcpy(ser->nome,nome2);
          strcpy(ser->rg,rg2);
          ser->anonasc=anonasc2;
          ser->prox=*p;
          *p=ser;
     }
}

void imprimeIdade(PESSOA p)
{
     char nomePesquisa[20];
     char nomeCopy[20];
     printf("\n Imprimindo lista Idade das Pessoas Cadastradas\n");
     while (p!=NULL)
     {
           printf("nome: %s\t",p-> nome);
           printf("idade:%d\n",ANO - (p->anonasc));
           p=p->prox;
     }
}
void imprimeAnoDepois(PESSOA p){
    int anonascimeto;
    printf("Digite apartir de qual ano quer exibir as pessoas: ");
    scanf("%i",&anonascimeto);
    while (p!=NULL)
    {
        if (p->anonasc>=anonascimeto){
            printf("nome: %s\t",p-> nome);
            printf("idade:%d\n",ANO - (p->anonasc));
        }
        p=p->prox;
    }
}
void imprimeAnoAntes(PESSOA p){
    int anonascimeto;
    printf("Digite apartir de qual ano quer exibir as pessoas: ");
    scanf("%i",&anonascimeto);
    while (p!=NULL)
    {
        if (p->anonasc<=anonascimeto){
            printf("nome: %s\t",p-> nome);
            printf("idade:%d\n",ANO - (p->anonasc));
        }
        p=p->prox;
    }
}

void imprimePessoaRG(PESSOA p){
    char RG[10];
    printf("Digite O RG da pessoa que deseja Pesquisar: ");
    fflush(stdin);
    gets(RG);
    while (p!=NULL)
    {
        if (strcmp(RG,p->rg)==0){
            printf("nome: %s\t",p-> nome);
            printf("idade:%d\n",ANO - (p->anonasc));
            }
        p=p->prox;
    }
}

int main()
{
    PESSOA cadastro=NULL;
    PESSOA bkp=NULL;
    //Inicio meu switch case
    char op;
    do{
    printf("\nMENU DE OPCOES\n");
    printf(" A - Cadastrar uma Pessoa\n");
    printf(" B - Calcular a Idade\n");
    printf(" C - Listar pessoas a partir ano\n");
    printf(" D - Listar pessoas antes ano\n");
    printf(" E - Encontrar pessoa RG\n");
    printf(" S - Sair\n");
    printf("Escolha opcao: ");
    op=getche();
    op=tolower(op);
    switch(op)
     {
        case 'a':{system("cls");
                printf("\nOpcao A Cadastrando Pessoa\n");
                char nome1[20];
                char rg1[10];
                int anonasc1;
                printf("\nDigite nome\n");
                fflush(stdin);
                gets(nome1);
                printf("\nDigite RG\n");
                fflush(stdin);
                gets(rg1);
                printf("\nDigite ano de nascimento\n");
                scanf("%d",&anonasc1);
                insere(&cadastro,nome1,rg1,anonasc1);
        }

        case 'teste':{system("cls");
                printf("\nOpcao B Calcular a Idade\n");
                break;
        }
        case 'b':{system("cls");
                printf("\nOpcao B Calcular a Idade\n");
                imprimeIdade(cadastro);
                break;
         }
        case 'c':{system("cls");
                printf("\nOpcao C Listar pessoas a partir ano\n");
                imprimeAnoDepois(cadastro);
                break;
         }
        case 'd':{system("cls");
                printf("\nOpcao D Listar pessoas antes ano\n");
                imprimeAnoAntes(cadastro);
                break;
         }
        case 'e':{system("cls");
                printf("\nOpcao E Encontrar pessoa RG\n");
                imprimePessoaRG(cadastro);
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

