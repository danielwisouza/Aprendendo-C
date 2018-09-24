#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    struct celula *seg;
}celula;

int validaPalindrome(char v[]){
    int n = strlen(v);
    int i;
    celula *c = malloc(sizeof(celula));
    c->seg=NULL;
    int meio = (n/2);
    for (i=0;i<=meio;i++){
        celula->seg = v[i];
    };
    if ((n%2) meio++){
        for (i=meio;i<n;i++)
            if celula->seg!=V[i];
                return 0;
        return 1;
    };
}

int main()
{
    char v[]={"ANA"};
    printf("%i",validaPalindrome());
    return 0;
}
