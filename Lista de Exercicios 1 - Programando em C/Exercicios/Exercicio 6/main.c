#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado1, lado2,lado3,perimetro,hipo;
    printf("Digite os tres lados do triangulo:");
    scanf("%f%f%f",&lado1, &lado2,&lado3);
    if (lado1 > lado2 && lado1 > lado3)
        hipo = lado1;
    if (lado2 > lado1 && lado2 > lado3)
    {
        hipo = lado2;
        //Reatribuindo valor de 1
        lado2 = lado1;
    };
    if (lado3 > lado1 && lado3 > lado2)
    {
        hipo = lado3;
        //Reatribuindo valor de 1
        lado3 = lado1;
    };

        if ((hipo * hipo) == ((lado2 * lado2)+(lado3 * lado3)))
            printf("Triangulo e acutangulo.\n");
        if ((hipo * hipo) < ((lado2 * lado2)+(lado3 * lado3)))
            printf("Triangulo e obtusangulo.\n");
        if ((hipo * hipo) > ((lado2 * lado2)+(lado3 * lado3)))
            printf("Triangulo e retangulo.\n");
    printf("Final do Programa.\n");
    return 0;
}

