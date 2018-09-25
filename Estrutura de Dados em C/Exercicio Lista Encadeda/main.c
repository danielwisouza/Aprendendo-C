#include <stdio.h>
#include <stdlib.h>

// O algoritomo tem qye receber a quantodade total de um determinado produto e seu preço
// Apos receber deve registar retirade de veda simutando um estoque que atualmente é felito em um cadenio de papel
// Para isso utilizarem uma lista encadeada para fazer os registors e um afunção que realiza a retidada

typedef struct dado
{
    int codigo;
    char nome [20];
    float preco;
    int quantidade;
    struct dado *prox;
} *PRODUTO;

void insere(PRODUTO *p,int codigo, char nome[],int quantidade,float preco)
{
     PRODUTO ser=malloc(sizeof(struct dado));
     if(ser!=NULL)
     {
          ser->codigo=codigo;
          strcpy(ser->nome,nome);
          ser->preco=preco;
          ser->quantidade=quantidade;
          ser->prox=*p;
          *p=ser;
     }
}

void imprime(PRODUTO p){
    while (p!=NULL)
    {
        printf("Cod: %i | Prod: %s | Quant: %i| Valor Unitario: %2.f \n",p->codigo,p->nome,p->quantidade,p->preco);
        p=p->prox;
    }
}

void vendaProduto(PRODUTO p){
    int cod;
    int quant;
    printf("Digite o codigo do Produto: ");
    scanf("%i",&cod);
    printf("\nDigite a quantidade de produtos: ");
    scanf("%i",&quant);
    while (p!=NULL)
    {
        if ((cod == p->codigo)){
            p->quantidade=(p->quantidade-quant);
        }
        p=p->prox;
    }
}

int main()
{
    PRODUTO cadastro=NULL;
    PRODUTO bkp=NULL;
    int codigo;
    char nome[20];
    float preco;
    int quantidade;
    char op;
    do{
    printf("\nMENU DE OPCOES\n");
    printf(" A - Cadastrar Produto\n");
    printf(" B - Listar Produtos\n");
    printf(" C - Venda Produto Codigo\n");
    printf(" S - Sair\n");
    printf("Escolha opcao: ");
    op=getche();
    op=tolower(op);
    switch(op)
     {
        case 'a':{system("cls");
                printf("\nOpcao A Cadastrar Produto: \n");
                printf("\nDigite codigo do Produto: ");
                scanf("%i",&codigo);
                printf("\nDigite nome do Produto: ");
                fflush(stdin);
                gets(nome);
                printf("\nDigite a quantidade total: ");
                scanf("%i",&quantidade);
                printf("\nDigite o preco do produto unitario: ");
                scanf("%f",&preco);
                insere(&cadastro,codigo,nome,quantidade,preco);
                break;
        }
        case 'b':{system("cls");
                printf("\nOpcao B Listar Produtos\n");
                imprime(cadastro);
                break;
         }
        case 'c':{system("cls");
                printf("\nOpcao C Venda Poduto Codigo\n");
                vendaProduto(cadastro);
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
