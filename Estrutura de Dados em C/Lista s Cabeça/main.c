#include <stdio.h>
#include <stdlib.h>

struct cel{
    int conteudo;
    struct cel * seg; /*seguint*/
};

typedef struct cel celula;

void imprima(celula *lst){
    celula *p;
    for(p = lst->seg; p != NULL; p = p->seg)
        printf("%d\n", p ->conteudo);
}

void insere(int y, celula **p){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->conteudo = y;

    if(*p == NULL){
        *p = nova;
        nova->seg = NULL;
    }else{
        nova->seg = *p;
        *p = nova;
    }
}

int main(void)
{
    int i;
    celula *lst;
    lst = NULL;

    for (i = 0; i < 10; i++)
        insere(i, &lst);
    imprima(lst);
    system("pause");
}
