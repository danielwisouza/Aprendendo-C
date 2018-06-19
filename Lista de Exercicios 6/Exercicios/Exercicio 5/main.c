#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// definição de um novo tipo
typedef struct dado
{
    int numero_voo;
    char ciaAerea[20];
    char Modelo_Aeronave[20];
    char origem[20];
    char destino[20];
    int qtdeTotalAssentos;
    int qtdeAssentosOcupados;
    struct dado *prox;
}*PESSOA;

void insere(PESSOA *p, int numero_voo1,char ciaAerea1[],char Modelo_Aeronave1[],char origem1[],char destino1[],int qtdeTotalAssentos1,int qtdeAssentosOcupados1)
{
     PESSOA ser=malloc(sizeof(struct dado));
     if(ser!=NULL)
     {
          ser->numero_voo=numero_voo1;
          strcpy(ser->ciaAerea,ciaAerea1);
          strcpy(ser->Modelo_Aeronave,Modelo_Aeronave1);
          strcpy(ser->origem,origem1);
          strcpy(ser->destino,destino1);
          ser->qtdeTotalAssentos=qtdeTotalAssentos1;
          ser->qtdeAssentosOcupados=qtdeAssentosOcupados1;
          ser->prox=*p;
          *p=ser;
     }
}

void imprimeDados(PESSOA p)
{
     printf("\n Imprimindo lista Todos os Voos\n");
     while (p!=NULL)
     {
            printf("Numero do voo: %i\t",p->numero_voo);
            //printf("CiaAerea: %s\n",p->ciaAerea);
            //printf("Modelo da Aeronave: %s\n",p->Modelo_Aeronave);
            //printf("Origem: %s\n",p->origem);
            printf("Destino: %s\t",p->destino);
            printf("Total de Assentos: %i\t",p->qtdeTotalAssentos);
            printf("Assentos Ocupados: %i\n",p->qtdeAssentosOcupados);
           p=p->prox;
     }
}

void reservarAcento(PESSOA p)
{
    int codVoo=0;
    int assento=0;
    int assentosDisponievis;
    printf("Qual numero do voo que deseja reservar: ");
    scanf("%i",&codVoo);
    printf("Quantos assento deseja reservar: ");
    scanf("%i",&assento);
    while (p!=NULL)
    {
        assentosDisponievis = (p->qtdeTotalAssentos - p->qtdeAssentosOcupados);
        if (codVoo==p->numero_voo){
            if (assento <= assentosDisponievis){
                p->qtdeAssentosOcupados= p->qtdeAssentosOcupados + assento;
                printf("Reserva realizada com sucesso.. ");
            }
            else{
                printf("Voo Lotado temos %i de vagas disponiveis",assentosDisponievis);
            }
        }
        p=p->prox;
    }
}


void cancelarVoo(PESSOA *p){
    int codVoo;
    printf("Qual voo deseja excluir: ");
    scanf("%i",codVoo);
    //while (p!=NULL);
        //if(codVoo==p->numero_voo){
          //  free(p);
          //  return;
        //}
    //p=p->prox;
    PESSOA n=*p;
    if(n==NULL)return;
    *p=n->prox;
    free(n);

}

int main()
{
    PESSOA cadastro=NULL;
    PESSOA bkp=NULL;
    int numero_voo1;
    char ciaAerea1 [20];
    char Modelo_Aeronave1 [20];
    char origem1 [20];
    char destino1 [20];
    int qtdeTotalAssentos1;
    int qtdeAssentosOcupados1;
    //Inicio meu switch case
    char op;
    do{
    printf("\nMENU DE OPCOES\n");
    printf(" A - Incluir Voo\n");
    printf(" B - Listar Voos\n");
    printf(" C - Reservar assento em um voo\n");
    printf(" D - Cancelar Voo\n");
    printf(" E - Cancelar Passagem\n");
    printf(" S - Sair\n");
    printf("Escolha opcao: ");
    op=getche();
    op=tolower(op);
    switch(op)
     {
        case 'a':{system("cls");
            printf("\nOpcao A - Incluir Voo\n");
            printf("Insira o numero do voo: ");
            scanf("%i",&numero_voo1);
            printf("Insira a CiaAerea: ");
            fflush(stdin);
            gets(ciaAerea1);
            printf("Insira Modelo da Aeronave: ");
            fflush(stdin);
            gets(Modelo_Aeronave1);
            printf("Insira Origem: ");
            fflush(stdin);
            gets(origem1);
            printf("Insira Destino: ");
            fflush(stdin);
            gets(destino1);
            printf("Insira Quant Total de Assentos: ");
            scanf("%i",&qtdeTotalAssentos1);
            printf("Insira Quant Assentos Ocupados: ");
            scanf("%i",&qtdeAssentosOcupados1);
            insere(&cadastro,numero_voo1,ciaAerea1,Modelo_Aeronave1,origem1,destino1,qtdeTotalAssentos1,qtdeAssentosOcupados1);
            break;
        }

        case 'teste':{system("cls");
                break;
        }
        case 'b':{system("cls");
                printf("\nOpcao B - Listar Voos\n");
                imprimeDados(cadastro);
                break;
         }
        case 'c':{system("cls");
                printf("\nOpcao C - Reservar assento em um Voo\n");
                reservarAcento(cadastro);
                break;
         }
        case 'd':{system("cls");
                printf("\nOpcao D - Cancelar Voo\n");
                cancelarVoo(&cadastro);
                break;
         }
        case 'e':{system("cls");
                printf("\nOpcao E - Cancelar passagem\n");
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
