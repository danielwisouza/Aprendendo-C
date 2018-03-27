#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado1, lado2,lado3,perimetro;
    printf("Digite os tres lados do triangulo:");
    scanf("%f%f%f",&lado1, &lado2,&lado3);
    perimetro = (lado1+lado2+lado3);
    printf("O perimetro do triangulo e: %.2f\n",perimetro);
    if (perimetro < 10){
        printf("Perimetro menor que 10.\n");
    }else{
        printf("Perimetro maior que 10.\n");}
    printf("Final do programa!\n");
    return 0;
}


