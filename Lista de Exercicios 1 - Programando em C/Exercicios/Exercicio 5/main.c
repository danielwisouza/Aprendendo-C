#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado1, lado2,lado3,perimetro;
    printf("Digite os tres lados do triangulo:");
    scanf("%f%f%f",&lado1, &lado2,&lado3);
    if ((lado1 == lado2) && (lado2 == lado3))
        printf("Triangulo equilatero.\n");
    if (((lado1 == lado2) && (lado1 != lado3)) || ((lado2 == lado3) && (lado2 != lado1)))
        printf("Triangulo Isosceles.\n");
    if ((lado1 != lado2) && (lado1 != lado3) && (lado2 != lado3))
        printf("Triangulo escaleno.\n");
    printf("Final do programa!\n");
    return 0;
}
