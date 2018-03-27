#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

void andar(float km, float litro)
{
    float constante;
    constante = (km/litro);
    printf("\n\n%2.f Litros de Gasolina consumidos",constante);
}

float obterGasolina(float km, float litro, float volume)
{
    float gasolina;
    gasolina = volume-(km/litro);
    printf("\\nnNivel atual de Combustivel: %2.f",gasolina);
}

void adicionarGasolina (float km, float litro, float volume)
{
   float gasolina;
   gasolina = (volume-(litro-(km/litro)));
   printf("\n\nNivel atual de combustivel: %2.f",gasolina);
}

main()
{
    char op;
    float km, litro, volume;

    do
    {
     printf("\n\n MENU DE OPCOES ");
     printf("\n ----------------------- ");
     printf("\n A - Andar");
     printf("\n B - Obter Gasolina ");
     printf("\n C - Adicionar Gasolina ");
     printf("\n S - Saindo");
     printf("\n\n Escolha uma opcao: ");
     op=getche();
     op=tolower(op);//mandando para min�sculo
     switch(op)
     {
        case 'a':{system("cls");
            printf("\nDistancia percorrida?");
            scanf("%f", &km);
            printf("\nEspecificacao: KM por litro do seu veiculo?");
            scanf("%f", &litro);
            andar(km,litro);
            break;
        }
        case 'b':{system("cls");
            printf("\nDistancia percorrida?");
            scanf("%f", &km);
            printf("\nEspecificacao: KM por litro do seu veiculo?");
            scanf("%f", &litro);
            printf("\nQual volume do tanque?");
            scanf("%f",&volume);
            andar(km,litro);
            obterGasolina(km,litro,volume);
            break;
            }
        case 'c':{system("cls");
            printf("\nDistancia percorrida?");
            scanf("%f", &km);
            printf("\nEspecificacao: KM por litro do seu veiculo?");
            scanf("%f", &litro);
            printf("\nQual volume do tanque?");
            scanf("%f",&volume);
            andar(km,litro);
            adicionarGasolina(km,litro,volume);
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
