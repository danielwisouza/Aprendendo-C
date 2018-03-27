#include <stdio.h>
#include <stdlib.h>

int main()
{
    float largura,altura,area, perimetro;
    printf("Digite a largura do retangulo:");
    scanf("%f",&largura);
    printf("Digite o Altura:");
    scanf("%f",&altura);
    area = (largura * altura);
    perimetro = ((largura + altura)/2);
    printf("O Perimetro do retangulo e %.2f\n",perimetro);
    printf("A area do retangulo e %.2f\n",area);

    printf("Final do Programa!\n");
    system("pause");
    return 0;
}
