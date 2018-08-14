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
    printf("Digite nome:");
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
     int ind;
     _strdate(dateStr);//chamada de uma função da biblioteca time.h
     ANO=2000+((dateStr[6]-48)*10)+((dateStr[7]-48));//ajuste do ano atual
     printf("\nQual pessoa Deseja consultar a idade:\n");
     for(i=0;i<10;i++){
        printf(" - %i = ",i);
        printf("%s\n",cadastro[i].nome);
     }
     printf("\nDigite o numero corespondente ao nome: ");
     fflush(stdin);//limpa buffer
     scanf("%i",&ind);
     idade = (ANO - cadastro[ind].anonasc);
     printf("A pessoa %s tem %i anos de idade",cadastro[ind].nome,idade);

}

void listar_ano()
{
    int i,busca;
    printf("\nQual ano deseja buscar? ");
    scanf("%i",&busca);
    printf("\nLista de pessoas cadastradas no ano: ");
    for (i=0;i<10;i++){
        if (cadastro[i].anonasc>=busca){
            printf("\n%s",cadastro[i].nome);
        }
    }
}

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
    printf("Escolha opcao: ");
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

