#include <stdio.h>
#include <stdlib.h>
//Trabalhando com string
#include <string.h>
//Copiando string 'strcpy'
int main()
{
    //Declaração de Variavel
    int ID_ALUNO;
    float nota1, nota2, nota3, ME, MA;
    char APRO;
    char CON[10];
    //Entrada de Dadods
    printf("Digite o ID do aluno:");
    scanf("%d",&ID_ALUNO);
    printf("Digite as 3 notas do aluno:");
    scanf("%f%f%f",&nota1,&nota2,&nota3);
    printf("Digite a media de exercicios do aluno:");
    scanf("%f", &ME);

    //Processamento
    MA = ((nota1*1)+(nota2*2)+(nota3*3)+ME)/7;
    if (MA>=9)
        APRO='A';
    if (MA<9 && MA >= 7.5)
        APRO='B';
    if (MA<7 && MA >= 6)
        APRO='C';
    if (MA <6 && MA >= 4)
        APRO='D';
    if (MA<4)
        APRO='E';
    if ((APRO == 'A') || (APRO == 'B') || (APRO == 'C'))
        strcpy (CON,"Aprovado");
    else
        strcpy (CON,"Reprovado");
    //Saída
    printf("Codigo do aluno: %d",ID_ALUNO);
    printf("\nNota da prova 1: %.2f, Prova 2: %.2f e Prova 3: %.2f.",nota1,nota2,nota3);
    printf("\nMedia dos exercicios: %.2f",ME);
    printf("\nMedia Aproveitamento: %.2f ",MA);
    printf("\nAproveitameno: %c",APRO);
    printf("\nConceito final: %s",CON);
    printf("\nFinal do Programa.\n");
    system("pause");
    return 0;
}
