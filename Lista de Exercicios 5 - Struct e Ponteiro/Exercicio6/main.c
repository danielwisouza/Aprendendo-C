#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct dados
{
    char nomeNoiva[30];
    char nomeNoivo[30];
    char paiNoiva[30];
    char maeNoiva[30];
    char paiNoivo[30];
    char maeNoivo[30];
    char data[12];
    char hora[12];

} ARM;

ARM cadastro[40];
int controle = 0;

void armazenar()
{
    char nome[30];
    printf("\nDigite o nome da noiva: ");
    fflush(stdin);
    gets(nome);
    strcpy(cadastro[controle].nomeNoiva,nome);
    printf("\nDigite o nome da M�e da noiva: ");
    fflush(stdin);
    gets(nome);
    strcpy(cadastro[controle].maeNoiva,nome);
    printf("\nDigite o nome do Pai da noiva: ");
    fflush(stdin);
    gets(nome);
    strcpy(cadastro[controle].paiNoiva,nome);
    printf("\nDigite o nome do noivo: ");
    fflush(stdin);
    gets(nome);
    strcpy(cadastro[controle].nomeNoivo,nome);
    printf("\nDigite o nome da M�e do noivo: ");
    fflush(stdin);
    gets(nome);
    strcpy(cadastro[controle].maeNoivo,nome);
    printf("\nDigite o nome do Pai do noivo: ");
    fflush(stdin);
    gets(nome);
    strcpy(cadastro[controle].paiNoivo,nome);
    printf("\nDigite a data do casamento: ");
    fflush(stdin);
    gets(nome);
    strcpy(cadastro[controle].data,nome);
    printf("\nDigite a hora do casamento: ");
    fflush(stdin);
    gets(nome);
    strcpy(cadastro[controle].hora,nome);
    controle++;
}

void casamentodata()
{
    char data[12];
    int i;
    printf("\nDigite uma data para saber os casamentos ocorridos na mesma: ");
    fflush(stdin);
    gets(data);
    for (i = 0; i < controle; ++i){
        if (strcmp(cadastro[i].data, data) == 0){
            printf("%s e %s\n", cadastro[i].nomeNoiva, cadastro[i].nomeNoivo);
        }
    }
}

void nomenubente()
{
    char nome[30];
    int i;
    printf("\nDigite o nome do noivo(a) para saber o nubente: ");
    fflush(stdin);
    gets(nome);
    for (i = 0; i < controle; ++i){
        if (strcmp(cadastro[i].nomeNoiva, nome) == 0)
            printf("%s\n", cadastro[i].nomeNoivo);
            if (strcmp(cadastro[i].nomeNoivo, nome) == 0)
                printf("%s\n", cadastro[i].nomeNoiva);
    }
}

void dataehoracasamento()
{
    char nome1[30];
    char nome2[30];
    int i;
    printf("\nDigite o nome do noivo para saber a data e hora do casamento: ");
    fflush(stdin);
    gets(nome1);
    printf("Digite o nome do noiva para saber a data e hora do casamento: ");
    fflush(stdin);
    gets(nome2);
    for (i = 0; i < controle; ++i){
        if (strcmp(cadastro[i].nomeNoivo, nome1) == 0 && strcmp(cadastro[i].nomeNoiva, nome2) == 0)
            printf("\n%s\n", cadastro[i].data);
            printf("\n%s\n", cadastro[i].hora);
    }
}

int main()
{
    char op = 'c';
    while (op != 's'){
        printf("\nDeseja:\nA - Armazenar dados do casamento\nB - Casamentos ocorridos em determinada data\nC - Nome do noivo(a)\nD - Data e hora de determinado casamento\nS - Sair\n");
        op = getche();
        op = toupper(op);
        switch (op){
            case 'A': armazenar();
                    break;
            case 'B': casamentodata();
                    break;
            case 'C': nomenubente();
                    break;
            case 'D': dataehoracasamento();
                    break;
            case 'S': system("pause");
                    break;
            default: printf("Valor inv�lido!");
                    break;
        }
    }
    return 0;
}
