#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[50];
    int i=0, qtde=0;
    printf("Digite uma palavra:\n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
      if((tolower(s[i])=='a') || (tolower(s[i])=='e') ||(tolower(s[i])=='i') ||(tolower(s[i])=='o') ||(tolower(s[i])=='u')){
       qtde++;
      }
    }
    printf("Existe %i vogais na palavra %s\n\n",qtde,s);
    char letra[1];
    printf("Digite uma letra para substituir as vogais: ");
    fflush(stdin);
    gets(letra);
    for(i=0;s[i]!='\0';i++)
    {
      if((tolower(s[i])=='a') || (tolower(s[i]) == 'e') || (tolower(s[i]) == 'i') || (tolower(s[i]) == 'o') || (tolower(s[i]) == 'u')){
            strcpy(s[i],letra[1]);
      }
    }
    printf("%s",s);
    system("pause");
}
