#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[2][10]={"TESTE","TESTE"};
    teste(A[0]);
    return 0;
}

void teste(char A[])
{
    //printf("s A [0]%s",A[0]);
    printf("s A %s",A[0]);
    //printf("c %c",A[0]);
    //printf("d %d",A[0]);
    //printf("p %p",A[0]);
}
