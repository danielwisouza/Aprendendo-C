/*inclusão de biblioteca e definição de constante*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define ANO 2017
/**/
typedef struct dado
{
         char nome [20];
         int anonasc;
         struct dado *prox;
} *PESSOA;

/* insere dados, passados como parãmetro,
   em uma lista encadeada */
void insere(PESSOA *p, char n[20], int num)
{

     PESSOA ser=malloc(sizeof(struct dado));
     if(ser!=NULL)
     {
          strcpy(ser->nome,n);
          ser->anonasc=num;
          ser->prox=*p;
          *p=ser;
     }
}
/*insere dados, lidos dentro da função via teclado,
   em uma lista encadeada*/
void insere2(PESSOA *p)
{
     char n[20];
     int num;
     printf("\nDigite nome\n");
     fflush(stdin);
     gets(n);
     printf("\nDigite ano de nascimento\n");
     scanf("%d",&num);
     PESSOA ser=malloc(sizeof(struct dado));
     if(ser!=NULL)
     {
          strcpy(ser->nome,n);
          ser->anonasc=num;
          ser->prox=*p;
          *p=ser;
     }
}

 /*remove dados de uma lista a partir da posição indicada*/
void remover(PESSOA *p)
{
     PESSOA ser=*p;
     if(ser==NULL) return;
     *p=ser->prox;
     //free(ser);
}
 /*posiciona o ponteiro na posição indicada*/
PESSOA acessa(PESSOA p, int i)
{
      while ((i-->0)&&(p!=NULL)) p=p->prox;
      return p;
}
 /*imprime a lista*/
void imprime(PESSOA p)
{
     printf("\n**** imprimindo lista atualizada***\n");
     while (p!=NULL)
     {
           printf("nome: %s\t",p-> nome);
           printf("idade:%d\n",ANO - (p->anonasc));
           p=p->prox;
     }

}
/*função principal*/
int main ()
{
     PESSOA cadastro=NULL;
     char x[20]={"mirela"};
     int i=1970;
     PESSOA bkp=NULL;
     char op='s';
     // insere dados para testes
     do
     {
         insere(&cadastro,x,i);
         imprime(cadastro);
         i++;
     }  while (i<1976);
     // imprime a lista
     imprime(cadastro);
     // insere dados digitados pelo usuário
     while(op=='s')
      {

         bkp=acessa(cadastro,2);
         insere2(&bkp->prox);
         printf("Deseja continuar? s/n");
         op=getch();
     }
     // imprime a lista
     imprime(cadastro);
     //acessa a posição 2
     bkp=acessa(cadastro,2);
     //remove dados da posição 3(contagem  0,1,2...)
     remover(&bkp->prox);
     //imprime lista
     imprime(cadastro);
     getch();
     return 0;
/*Observação: os comandos abaixo leem string também
mas scanf lê apenas uma palavra, sem espaço
DeV-C é problemático nesse aspecto.*/
//fgets(x,19,stdin);
//scanf("%s",&x);
}

