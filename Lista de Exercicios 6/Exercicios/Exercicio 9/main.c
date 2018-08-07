#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// definição de um novo tipo
typedef struct dado
{
    int numero;
    char ciaAerea[20];
    char Modelo_Aeronave[20];
    char origem[20];
    char destino[20];
    int qtdeTotalAssentos;
    int qtdeAssentosOcupados;
}AERONAVE;

 AERONAVE aviao;
 FILE *p_aviao;

 void abre_arquivo(){
      p_aviao=fopen ("dados_frota.dat","a+b");
}


void cadastrar(){
     int continuar=1;
     do {
         //LEITURA DOS DADOS
        system("cls");
        printf("*****Cadastro de aviao****");
        printf("\n Aviao Num: ");
        scanf("%d",&aviao.numero);
        printf("%\n Cia Aeronave: ");
        scanf("%s", aviao.ciaAerea);
        printf("\n Modelo Aeronave: ");
        scanf("%s", aviao.Modelo_Aeronave);
        printf("\n Aviao origem: ");
        scanf("%s", aviao.origem);
        printf("\n Aviao destino: ");
        scanf("%s", aviao.destino);
        printf("\n Aviao assentos: ");
        scanf("%d",&aviao.qtdeTotalAssentos);
        printf("\n Aviao ocupados: ");
        scanf("%d",&aviao.qtdeAssentosOcupados);
        // Posiciona ponteiro de arquivo no final do arquivo
        // para evitar sobreescrever dados
        fseek(p_aviao,0, SEEK_END);
        // grava dados de um avião
        // fwrite(variável, tamanho,
        // qtde de dados por vez,
        //arquivo apontado pelo ponteiro
        fwrite (&aviao, sizeof(AERONAVE), 1,p_aviao);
        printf("\nSucesso./nQuer continuar? 1- SIM  2 - NAO\n");
        scanf ("%d", &continuar);
         }while (continuar==1);
}

void mostrar()
{
    char nome[10]={"Brasil"};
      if ((aviao.numero!=0)&&(strcmp(aviao.origem,nome==0))){
      printf("\n Num:%d Av:%s Mod:%s Dest:%s Origem:%s Total:%d Ocupado:%d",
      aviao.numero,aviao.ciaAerea,aviao.Modelo_Aeronave,
      aviao.origem,aviao.destino,
      aviao.qtdeTotalAssentos,aviao.qtdeAssentosOcupados);
      }
}

void listar()
  {
        //resetar ponteiro
       // início do arquivo
       rewind(p_aviao);
       do{
       // le arquivo e coloca dados na variável aviao
       fread(&aviao,sizeof(AERONAVE),1,p_aviao);
       // testa se é fim de arquivo,
       // se não for mostra dados lidos
       if(feof(p_aviao)==0) mostrar();
       }while(feof(p_aviao)==0);
       getch();
}


void reservar(){
       int voo;
       int fim=1;
       int cont=0;
       int desejos;
       system("cls");
       printf("Digite o numero do voo: ");
       scanf("%d", &voo);
       p_aviao=fopen("dados_frota.dat", "r+b");
       do
       {
         // procurando o avião certo
        fread(&aviao,sizeof(AERONAVE),1,p_aviao);
        if(aviao.numero==voo){
printf("Quantidade de assentos disponiveis e %d\n", aviao.qtdeTotalAssentos-aviao.qtdeAssentosOcupados);
printf("Digite quantidade de desejos: ");
       scanf("%d",&desejos);
       // controla o fim da procura
       fim=0;
aviao.qtdeAssentosOcupados=aviao.qtdeAssentosOcupados+desejos;
 //posiciona o ponteiro corretamente
 fseek(p_aviao,cont*sizeof(AERONAVE),SEEK_SET);
 //grava dados
 fwrite(&aviao,sizeof(AERONAVE),1,p_aviao);
 break;
     //conta registros
  } cont++;
       }while (fim==1);
       printf("\nReserva feita com sucesso");
       getch();
}

void cancelar(){
        int voo;
       int fim=1;
       int cont=0;
       int desejos;
       system("cls");
       printf("Digite o numero do voo: ");
       scanf("%d", &voo);
       p_aviao=fopen("dados_frota.dat", "r+b");
       do
       {
         // procurando o avião certo
        fread(&aviao,sizeof(AERONAVE),1,p_aviao);
        if(aviao.numero==voo){
printf("Quantidade de assentos disponiveis e %d\n", aviao.qtdeTotalAssentos-aviao.qtdeAssentosOcupados);
printf("Digite quantidade para remover ");
       scanf("%d",&desejos);
       // controla o fim da procura
       fim=0;
aviao.qtdeAssentosOcupados=aviao.qtdeAssentosOcupados-desejos;
 //posiciona o ponteiro corretamente
 fseek(p_aviao,cont*sizeof(AERONAVE),SEEK_SET);
 //grava dados
 fwrite(&aviao,sizeof(AERONAVE),1,p_aviao);
 break;
     //conta registros
  } cont++;
       }while (fim==1);
       printf("\nPassagem Cancelada com sucesso");
       getch();

}

void exclui()
{
       int voo;
       int fim=1;
       int cont=0;
       system("cls");
       printf("Digite o numero do voo: ");
       scanf("%d", &voo);
       p_aviao=fopen("dados_frota.dat", "r+b");
       do
       {// procurando o avião certo
        fread(&aviao,sizeof(AERONAVE),1,p_aviao);
        if(aviao.numero==voo){
        aviao.numero=0;
        // controla o fim da procura
       fim=0;
 //posiciona o ponteiro corretamente
 fseek(p_aviao,cont*sizeof(AERONAVE),SEEK_SET);
 //grava dados
 fwrite(&aviao,sizeof(AERONAVE),1,p_aviao);
 break;
     //conta registros
  } cont++;
       }while (fim==1);
       printf("\nVOO excluido com sucesso");
       getch();
}

int main()
{
    abre_arquivo();
    //Inicio meu switch case
    char op;
    int continuar;
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
            cadastrar();
            break;
        }

        case 'teste':{system("cls");
                break;
        }
        case 'b':{system("cls");
                printf("\nOpcao B - Listar Voos\n");
                listar();
                break;
         }
        case 'c':{system("cls");
                printf("\nOpcao C - Reservar assento em um Voo\n");
                reservar();
                break;
         }
        case 'd':{system("cls");
                printf("\nOpcao D - Cancelar Voo\n");
                exclui();
                printf("\nLista Atualizada de voos");
                listar();
                break;
         }
        case 'e':{system("cls");
                printf("\nOpcao E - Cancelar passagem\n");
                cancelar();
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
