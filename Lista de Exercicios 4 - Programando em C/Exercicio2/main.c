#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char op;
    do{
    printf("MENU DE OPCOES\n");
    printf("a - Cadastrar uma pessoa\n");
    printf("b - Calcular a idade de uma pessoa selecionada pelo usuário\n");
    printf("c - Listar pessoas que nasceram a partir de um determinado ano\n");
    printf("d - Listar pessoas que nasceram antes de um determinado ano\n");
    printf("e-  Encontrar o nome de uma pessoa com determinado RG\n");
    printf("s-  Sair\n");
    printf("Escolha opcao\n");
    op=getche();
    op=tolower(op);
    }while (op='s');
}
