#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "caracteres.h"

int conta_caracter(char s[],char c)
{
  int i, qtde=0;
  for(i=0;s[i]!='\0';i++)
  {
      if(tolower(s[i])==tolower(c)) qtde++;
  }
  return qtde;
}

void substitui_caracter(char s[],char c)
{
    int i;
  for(i=0;s[i]!='\0';i++)
  {
      if(tolower(s[i])==tolower(c)) s[i]='*';
  }
  printf("\nnovo ficou:%s",s);
}

//Tabela asci
//97  - a
//101 - e
//105 - i
//111 - o
//117 - u
int conta_vogais (char s[])
{
    int i, qtde = 0;
    for(i=0;s[i]!='\0';i++)
  {
      if((tolower(s[i])==97) || (tolower(s[i]) == 101) || (tolower(s[i]) == 105) || (tolower(s[i]) == 111) || (tolower(s[i]) == 117)) qtde++;
  }
  return qtde;
}

void substitui_vogais_por_asterisco(char s[],char c)
{
  int i;
  for(i=0;s[i]!='\0';i++)
  {
      if((tolower(s[i])==97) || (tolower(s[i]) == 101) || (tolower(s[i]) == 105) || (tolower(s[i]) == 111) || (tolower(s[i]) == 117)) s[i]='*';
  }
  printf("\nSubstituir Vogais Ficou:%s",s);
}

void conta_consoante (char s[])
{
  int i, qtde = 0;
  for(i=0;s[i]!='\0';i++)
  {
      if((tolower(s[i])!=97) || (tolower(s[i]) != 101) || (tolower(s[i]) != 105) || (tolower(s[i]) != 111) || (tolower(s[i]) != 117)) qtde++;
  }
  printf("\nExistem %s consoantes no nome ",qtde);
}
