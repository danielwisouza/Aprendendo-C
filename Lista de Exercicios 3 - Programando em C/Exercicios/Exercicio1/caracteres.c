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

int conta_vogais (char s[])
{
    int i, qtde = 0;
    for(i=0;s[i]!='\0';i++)
  {
      if((tolower(s[i])=='a') || (tolower(s[i]) == 'e') || (tolower(s[i]) == 'i') || (tolower(s[i]) == 'o') || (tolower(s[i]) == 'u')) qtde++;
  }
  return qtde;
}

void substitui_vogais_por_asterisco(char s[])
{
  int i;
  for(i=0;s[i]!='\0';i++)
  {
      if((tolower(s[i])=='a') || (tolower(s[i]) == 'e') || (tolower(s[i]) == 'i') || (tolower(s[i]) == 'o') || (tolower(s[i]) == 'u')) s[i]='*';
  }
  printf("\nSubstituir Vogais Ficou:%s",s);
}

void conta_consoante (char s[])
{
  int i, qtde = 0;
  for(i=0;s[i]!='\0';i++)
  {
      if((tolower(s[i])!='a') && (tolower(s[i]) != 'e') && (tolower(s[i]) != 'i') && (tolower(s[i]) != 'o') && (tolower(s[i]) != 'u')) qtde++;
  }
  printf("\nExistem %i consoantes no nome 0",qtde);
}
