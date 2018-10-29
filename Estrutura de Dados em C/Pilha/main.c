#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int valor;
    struct celula *seg;
}celula;

int validaPalindrome(char v[]){
    int n = strlen(v);
    int i;
    celula *c = malloc(sizeof(celula));
    c->seg=NULL;
    int meio = (n/2);
    printf("n %i",n);
    printf("\nMeio %i",meio);
    for (i=0;i<=meio;i++){
        //c->valor = v[i];
        c->seg = v[i];
        c->seg = c;
    };
    if (n%2)(meio=meio+1);{
        for (i=meio;i<n;i++)
            if (c->seg!=v[i]);
                return 0;
        printf("SIM");
        return 1;
    };
}
int main()
{
    char v[]={"ANAa"};
    printf("\nResposta: %i",validaPalindrome(v));
    return 0;
}
