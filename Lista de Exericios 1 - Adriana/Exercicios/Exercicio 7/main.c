#include <stdio.h>
#include <stdlib.h>
int main()
{
    float altura, peso,IMC;
    printf("Digite sua altura:\n");
    scanf("%f",&altura);
    printf("Digite seu peso:\n");
    scanf("%f",&peso);
    IMC = (peso / (altura *altura));
    if (IMC <= 16)
        printf("Magreza grave.\n");
    if (IMC > 16 && IMC <= 17)
        printf("Magreza moderada.\n");
    if (IMC > 17 && IMC <= 18.5)
        printf("Magreza leve.\n");
    if (IMC > 18.5 && IMC <= 25)
        printf("Saudavel.\n");
    if (IMC > 25 && IMC <= 30)
        printf("Sobrepeso.\n");
    if (IMC > 30 && IMC <= 35)
        printf("Obesidade Grau I.\n");
    if (IMC > 35 && IMC <= 40)
        printf("Obesidade Grau II (Severa).\n");
    if (IMC > 40)
        printf("Obesidade Grau III (mórbida).\n");

    printf("Final algoritmo!\n");
    return 0;
}
