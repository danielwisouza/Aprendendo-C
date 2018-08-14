#include <stdio.h>
#include <stdlib.h>

typedef struct
{
char nome[31];
int idade;
}PESSOA;

//Variaveis Globais
PESSOA cadastro[31];//máximo de 31 pessoas
int controle=0;//quantas pessoas já foram cadastradas

void insere()
{
    char n[20];
    printf("\nDigite nome:");
    fflush(stdin);//limpa buffer
    gets(n);//ler uma string com espaço
    strcpy(cadastro[controle].nome,n);//copia da string para o vetor
}

int main()
{
    //Declaração de Variaveis
    char op='s';//variável para ler opção do usuario
    while((op=='s')&&(controle<31))//enquanto o usuario quiser e tiver espaço...
     {
       insere();//chamada da função para inserir pessoa
       printf("\ndeseja continuar?(S/N)");
       op=getch();
     }
    return 0;
}
