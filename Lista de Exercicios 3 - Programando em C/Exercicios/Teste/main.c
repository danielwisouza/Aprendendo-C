#include <stdio.h>
#include <stdlib.h>

int main()
{
    char teste[50];
    gets(teste);
    printf("%i",(strlen(teste)-1));
    return 0;
}
