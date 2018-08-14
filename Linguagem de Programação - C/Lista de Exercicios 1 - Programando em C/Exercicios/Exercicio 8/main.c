#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,x;
    printf("Digite o valor de a e b da funcao f(x) = ax + b)\n");
    scanf("%f %f",&a,&b);
    //y = ax + b
    //y = 0
    x = (b/(a * -1));
    printf("Valor de x=%.2f\n",x);
    printf("Final Programa!\n");
    return 0;
}
