#include <stdio.h>
#include <stdlib.h>

void imc (int nome[],float peso, float altura)
{
      float controle;
      controle = peso/(altura*altura);
      printf("\n%s seu IMC e : %.2f",nome,controle);

}

void crescer (int nome[],int idade, float altura)
{
    if (idade<21){
        altura=altura+((21-idade)*0.005);
        printf("\n%s, Voce terá %fm aos 21 anos",nome,altura);
    }
    else{
        printf("\n%s,Você não crescerá mais para cima.",nome);

    }
}

void emagrecer (int nome[],float peso,float kg)
{
    int controle;
    controle = (peso - kg) ;
    printf("\n %s voce tera %i quilos se emagrecer %i quilos.",nome,controle,kg);
}

void engordar (int nome[],float peso,float kg)
{
    int controle;
    controle = (peso + kg) ;
    printf("\n %s voce tera %i quilos se  engordar %i quilos.",nome,controle,kg);
}

void envelhecer(int nome[],int idade,int anos)
{
    int controle;
    controle = (idade +anos) ;
    printf("\n %s voce tera %i anos se envelhecer %i anos.",nome,controle,anos);
}
int main()
{

    char nome[20];
    int idade,anos;
    float peso,kg;
    float altura;
    char op;
    system("cls");
    do
    {
     printf("\n\n MENU DE OPCOES ");
     printf("\n ----------------------- ");
     printf("\n A - Envelhecer");
     printf("\n B - Engordar ");
     printf("\n C - Emagrecer ");
     printf("\n D - Crescer");
     printf("\n E - IMC");
     printf("\n S - Saindo");
     printf("\n\n Escolha uma opcao: ");
     op=getche();
     op=tolower(op);//mandando para min�sculo
     switch(op)
     {
        case 'a':{system("cls");
                printf("\nOpcao A Maior Envelhecer ");
                printf("\nDigite seu nome: ");
                scanf("%[^\n]s",&nome);
                printf("Digite sua idade: ");
                scanf("%i",&idade);
                printf("Quantos anos deseja envelhecer? ");
                scanf("%i",&anos);
                envelhecer(nome,idade,anos);
                break;
        }
        case 'b':{system("cls");
                printf("\nOpcao B Menor Engordar ");
                printf("\nDigite seu nome: ");
                scanf("%[^\n]s",&nome);
                printf("Digite seu peso: ");
                scanf("%i",&peso);
                printf("Quantos quilos quer engordar? ");
                scanf("%i",&kg);
                engordar(nome,peso,kg);
                break;
        }
        case 'c':{system("cls");
                printf("\nOpcao C Media Emagrecer ");
                printf("\nDigite seu nome: ");
                scanf("%[^\n]s",&nome);
                printf("Digite seu peso: ");
                scanf("%i",&peso);
                printf("Quantos quilos quer emagrecer? ");
                scanf("%i",&kg);
                engordar(nome,peso,kg);
                break;
         }
        case 'd':{system("cls");
                printf("\nOpcao D Crescer ");
                printf("\nDigite seu nome: ");
                scanf("%[^\n]s",&nome);
                printf("Digite a sua idade: ");
                scanf("%i",&idade);
                printf("Quantos a sua altura: ");
                scanf("%i",&altura);
                engordar(nome,idade,altura);
                break;
         }
        case 'e':{system("cls");
                printf("\nOpcao E IMC ");
                printf("\nDigite seu nome: ");
                scanf("%[^\n]s",&nome);
                printf("Digite seu peso: ");
                scanf("%f",&peso);
                printf("Quantos a sua altura: ");
                scanf("%f",&altura);
                imc(nome,peso,altura);
                break;
         }
         case 's':{system("cls");
                printf("\nSaindo.. ");
                break;
         }
         default:printf("\nOpcao Incorreta.");

     }
    }while(op!='s');
    return 0;
    system("pause");
}
