#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct wifi
{
    char cor[20];
	float xo;
    float yo;
    float raio;
}WF;

WF eq;
WF tabW[3];

void ler_equi()
{

	printf("\nDigite cor do equipamento:\n");
	fgets(eq.cor, 20, stdin);
    printf("\nDigite o raio do equipamento:\n");
    scanf("%f",&eq.raio);
    printf("\nDigite a posicao no eixo x:\n");
    scanf("%f",&eq.xo);
    printf("\nDigite a posicao no eixo y:\n");
    scanf("%f",&eq.yo);

}


void ler_varios()
{
    int i;
    char n[20];
	for(i = 0;i < 3; i++)
	{

		printf("\nDigite cor do equipamento:\n");
		fflush(stdin);
		gets(n);
		strcpy(tabW[i].cor,n);
    	printf("\nDigite o raio de equipamento:\n");
    	scanf("%f",&tabW[i].raio);
    	printf("\nDigite a posi��o no eixo x:\n");
    	scanf("%f",&tabW[i].xo);
    	printf("\nDigite a posi��o no eixo y:\n");
    	scanf("%f",&tabW[i].yo);
	}

}

float calcular_area_Wifi()
{
   return(3.14*eq.raio*eq.raio);
}

int capta_sinal(float x1, float y1)
{
    float b,c,a;
    b = eq.xo - x1;
    c = eq.yo - y1;
    a = sqrt((b*b) + (c*c));
    printf("\na=%.2f, b=%.2f, c=%.2f",a, b, c);
    if (a <= eq.raio)return 1;
    else return 0;
}

void sinal_de_3 (float x1, float y1)
{
    float b, c, a;
    int i;
    ler_varios();
    for(i = 0;i < 3; i++)
    {
        b= tabW[i].xo-x1;
        c= tabW[i].yo-y1;
        a= sqrt((b*b) + (c*c));
        printf("\na=%.2f, b=%.2f, c=%.2f", a, b, c);
        if (a <= tabW[i].raio){
            printf("\n%s, dentro da area\n",tabW[i].cor);
        }
        else printf("\n%s, fora da area\n",tabW[i].cor);
    }
}

int main()
{
    char op;
    float h,v;
    do
    {
      printf("\nDeseja:\n1 - Ler atributos\n2 - Area\n3 - Capta\n4 - Sair\n5 - Ler tres roteadores\n6 - Ler tres e analisar sinal\n");
      op = getche();
      switch(op)
      {
          case '1':ler_equi();
                   break;
          case '2':printf("\nArea: %.2f",calcular_area_Wifi());
                   break;
          case '3':printf("\nDigite a posicaoo do dispositivo(x,y)\n");
                   scanf("%f,%f",&h,&v);
                   if(capta_sinal(h,v)==1) printf("\nDentro da area\n");
                   else                    printf("\nFora da area\n");
                   break;
          case '4':break;
          case '5':ler_varios();
                    break;
          case '6':printf("\nDigite a posicao do dispositivo(x,y)\n");
                   scanf("%f,%f",&h,&v);
                   sinal_de_3(h,v);
          default: printf("\nOpcao inválida!\n");
      }
    }while(op != '4');


    return 0;
}
