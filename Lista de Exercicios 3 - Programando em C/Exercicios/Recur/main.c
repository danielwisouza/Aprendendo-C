#include <stdio.h>
#include <stdlib.h>

int ordem(int index,int vetor[],int aux)
{
    if ((index)>aux);

        printf("%i",vetor[index-aux]);
        aux++;
        return ordem(index,vetor,aux);

    if ((sizeof(vetor)/4)==vetor[aux]);
        return 0;
}

int main()
{
    int vetor[10]={0,1,2,3,4,5,6,7,8,9};
    int index = sizeof(vetor)/4,aux=0;
    ordem(index,vetor,aux);
    printf("%d",(sizeof(vetor)/4));

    system("pause");
}
