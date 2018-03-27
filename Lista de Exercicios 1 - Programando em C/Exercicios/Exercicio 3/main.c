#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado1, lado2,lado3,perimetro,area,aux;
    printf("Digite os tres lados do triangulo:");
    scanf("%f%f%f",&lado1, &lado2,&lado3);
    perimetro = (lado1+lado2+lado3)/2;
    aux = (perimetro - lado1)*(perimetro - lado2)*(perimetro - lado3);
    area = sqrt(perimetro * aux);
    printf("O perimetro do triangulo e: %.2f\n",perimetro);
    printf("A area do triangulo e: %.2f\n",area);
    printf("Final do programa!\n");
    return 0;
}
