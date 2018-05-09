#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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

void insere()
{
    char n[20],m[10];
    printf("\nDigite nome:");
    fflush(stdin);//limpa buffer
    gets(n);//ler uma string com espaço
    strcpy(cadastro[controle].nome,n);//cópia da string para o vetor
    printf("Digite ano de nascimento:");
    scanf("%d",&cadastro[controle].anonasc);
    printf("Digite o RG: ");
    fflush(stdin);//limpa buffer
    gets(m);
    strcpy(cadastro[controle].rg,m);
    controle++;
}

void imprime()
{
     char dateStr [9];//data no formato dd/mm/aa\0
     int i,idade;
     char op;
     _strdate(dateStr);//chamada de uma função da biblioteca time.h
     ANO=2000+((dateStr[6]-48)*10)+((dateStr[7]-48));//ajuste do ano atual
     printf("Qual pessoa Deseja consultar a idade: ");
     for(i=0;i<10;i++){
        printf("%i %s",i,cadastro);
     }
     getc(op);



}

int main()
{
    char op;
    do{
    printf("\nMENU DE OPCOES\n");
    printf(" A - Cadastrar uma Pessoa\n");
    printf(" B - Calcular a Idade\n");
    printf(" C - Listar pessoas a partir ano\n");
    printf(" D - Listar pessoas antes ano\n");
    printf(" E -  Encontrar pessoa RG\n");
    printf(" S -  Sair\n");
    printf("Escolha opcao: ");
    op=getche();
    op=tolower(op);
    switch(op)
     {
        case 'a':{system("cls");
                printf("\nOpcao A Cadastrando Pessoa ");
                insere();
                printf("\nANO: %d\t",ANO);
                break;
        }
        case 'b':{system("cls");
                printf("\nOpcao B Calcular a Idade ");
                imprime();
                break;
        }
        case 'c':{system("cls");
                printf("\nOpcao C Listar pessoas a partir ano ");
                break;
         }
        case 'd':{system("cls");
                printf("\nOpcao D Listar pessoas antes ano");
                char timeStr [9];//data no formato hh:mm:ss\0
                break;
         }
        case 'e':{system("cls");
                printf("\nOpcao E Encontrar pessoa RG");
                printf("%s",cadastro);
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

