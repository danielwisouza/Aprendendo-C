#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define ANO 2018
/**/
// defini��o de um novo tipo
typedef struct dado
{
        //campos da estrutura
         char nome [20];
         char rg[10];
         int anonasc;
         struct dado *prox;
}*PESSOA;

void insere(PESSOA *p,char nome1[], char rg1[], int anonasc1)
{

     PESSOA ser=malloc(sizeof(struct dado));
     if(ser!=NULL)
     {

          strcpy(ser->nome,nome1);
          strcpy(ser->rg,rg1);
          ser->anonasc=anonasc1;
          ser->prox=*p;
          *p=ser;
     }
}

void imprime(PESSOA p)
{
     printf("\n**** imprimindo lista atualizada***\n");
     while (p!=NULL)
     {
           printf("Nome: %s\t",p->nome);
           printf("RG: %s\t",p->rg);
           printf("Ano Nascimento:%d\n",p->anonasc);
           p=p->prox;
     }

}
/*
void imprimirPessoaIdade(PESSOA p)
{
    char nome3[20];
    printf("Escolha uma da pessoas abaixo: \n\n");
    while (p!=NULL)
    {
        printf("%s\t",p->nome);
        p=p->prox;
    }
    printf("\n\nDigite o nome que deseja consultar a idade: ");
    fflush(stdin);
    gets(nome3);
    while (p!=NULL)
    {
        if (strcmp(nome3,p->nome) == 0){
        printf("nome: %s\t",p-> nome);
        printf("idade:%d\n",ANO - (p->anonasc));
        }
        p=p->prox;
    }


}
*/

void listar_ano(PESSOA p)
{
    int i,busca;
    printf("\nA partir de qual ano deseja buscar? ");
    scanf("%i",&busca);
    printf("\nLista de pessoas cadastradas no ano: ");
    while (p!=NULL)
    {
        if (p->anonasc >= busca){
            printf("Nome: %s\t",p->nome);
            printf("idade:%d\n",ANO - (p->anonasc));
        }
    }
}
/*
void listar_ano_antes()
{
    int i,busca;
    printf("Qual ano deseja buscar? ");
    scanf("%i",&busca);
    printf("nLista de pessoas cadastradas no ano: ");
    for (i=0;i<10;i++){
        if (cadastro[i].anonasc<=busca){
            printf("\n%s",cadastro[i].nome);
        }
    }
}

void encontrarRG()
{
    int i;
    char copRG[10];
    printf("Digite o RG de busca: ");
    fflush(stdin);//limpa buffer
    gets(copRG);
    printf("Encontramos os regintes RGs cadastrados: \n");
    for (i=0;i<10;i++){
        if (strcmp(copRG,cadastro[i].rg)==1){
            printf("\n%s",cadastro[i].nome);
        }
    }
}
*/
int main()
{
    PESSOA cadastro=NULL;
    PESSOA bkp=NULL;
    char nome1[20];
    char rg1[10];
    int anonasc1=0;
    //Inicio meu switch case
    char op;
    do{
    printf("\nMENU DE OPCOES\n");
    printf(" A - Cadastrar uma Pessoa\n");
    printf(" B - Calcular a Idade pessoa selecionada\n");
    printf(" C - Listar pessoas a partir ano\n");
    printf(" D - Listar pessoas antes ano\n");
    printf(" E - Encontrar pessoa por RG\n");
    printf(" S - Sair\n");
    printf("Escolha opcao: ");
    op=getche();
    op=tolower(op);
    switch(op)
     {
        case 'a':{system("cls");
                printf("\nOpcao A Cadastrando Pessoa\n");
                printf("\nDigite nome\n");
                fflush(stdin);
                gets(nome1);
                printf("\nDigite RG\n");
                fflush(stdin);
                gets(rg1);
                printf("\nDigite ano de nascimento\n");
                scanf("%d",&anonasc1);
                insere(&cadastro,nome1,rg1,anonasc1);
                imprime(cadastro);

                break;
        }
        case 'b':{system("cls");
                printf("\nOpcao B Calcular a Idade\n");
                imprime(cadastro);
                break;
        }
        case 'c':{system("cls");
                printf("\nOpcao C Listar pessoas a partir ano\n");
                break;
         }
        case 'd':{system("cls");
                printf("\nOpcao D Listar pessoas antes ano\n");
                break;
         }
        case 'e':{system("cls");
                printf("\nOpcao E Encontrar pessoa RG\n");
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
