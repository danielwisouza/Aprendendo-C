#include <stdio.h>
#include <stdlib.h>

typedef struct
{
char nome[31];
int idade;
}PESSOA;

//Variaveis Globais
PESSOA cadastro[31];//m�ximo de 31 pessoas
int controle=0;//quantas pessoas j� foram cadastradas

void insere()
{
    char n[20];
    printf("\nDigite nome:");
    fflush(stdin);//limpa buffer
    gets(n);//ler uma string com espa�o
    strcpy(cadastro[controle].nome,n);//copia da string para o vetor
}

int main()
{
    //Declara��o de Variaveis
    char op='s';//vari�vel para ler op��o do usuario
    while((op=='s')&&(controle<31))//enquanto o usuario quiser e tiver espa�o...
     {
       insere();//chamada da fun��o para inserir pessoa
       printf("\ndeseja continuar?(S/N)");
       op=getch();
     }
    return 0;
}
