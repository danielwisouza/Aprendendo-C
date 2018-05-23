#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funcao1(char palavra1,char palavra2){
    if(strcmp(palavra1,palavra2)==0){
        printf("Strings Iguais");
    }
    else{
        printf("String diferentes");
    }
}

void funcao2(char palavra1,char palavra2){
    printf("Palavra 1: %s\n",palavra1);
    printf("Palavra 1 tem %d letras\n\n",strlen(palavra1));
    printf("Palavra 2: %s\n",palavra2);
    printf("Palavra 2 tem %d letras",strlen(palavra2));

}

void funcao3(char palavra1,char palavra2){
    printf("Agora palavra 1 é igual a palavra 2: %s \n",strcpy(palavra1,palavra2));
    printf("Agora palavra 2 é igual a palavra a: %s \n",strcpy(palavra2,palavra1));
}

void funcao4(char palavra1,char palavra2){
    printf("Agora palavra 1 foi concatenada com palavra 2: %s",strcat(palavra1,palavra2));
}

void funcao5(char palavra1,char palavra2){
    int id;
    printf("Palavra 1: %s\n",palavra1);
    printf("Qual posicao ate %i: ",strlen(palavra1));
    scanf("&i",id);

}

void funcao6(){

}

void funcao7(){

}

void funcao8(){

}

void funcao9(){

}
void funcao10(){

}

void funcao11(){

}

void funcao12(){

}

void funcao13(){

}

void funcao14(){

}

void funcao15(){

}

int main()
{
    char palavra1[50];
    char palavra2[50];
    printf("\nDigite primeira palavra: ");
    fflush(stdin);//limpa buffer
    gets(palavra1);//ler uma string com espaço
    printf("\nDigite segunda palavra: ");
    fflush(stdin);//limpa buffer
    gets(palavra2);//ler uma string com espaço
    system("cls");
    char op;
    do{
    printf("Palavra 1: %s\n",palavra1);
    printf("Palavra 2: %s\n",palavra2);
    printf("\nMENU DE OPCOES\n");
    printf(" A - Comparar\n");
    printf(" B - Qual tamanho das Strings?\n");
    printf(" C - Substituir 1 por 2\n");
    printf(" D - Concatenar\n");
    printf(" E - Buscar item Palavra 1\n");
    printf(" F - \n");
    printf(" G - \n");
    printf(" H - \n");
    printf(" I - \n");
    printf(" J - \n");
    printf(" K - \n");
    printf(" L - \n");
    printf(" M - \n");
    printf(" N - \n");
    printf(" O - \n");
    printf(" S - Sair\n");
    printf("Escolha opcao:");
    op=getche();
    op=tolower(op);
    switch(op)
     {
        case 'a':{system("cls");
                funcao1(palavra1,palavra2);
                break;

        }
        case 'b':{system("cls");
                funcao2(palavra1,palavra2);
                break;
        }
        case 'c':{system("cls");
                funcao3(palavra1,palavra2);
                break;
        }
        case 'd':{system("cls");
                funcao4(palavra1,palavra2);
                break;
        }
        case 'e':{system("cls");
                funcao5(palavra1,palavra2);
                break;
        }
        case 'f':{system("cls");
                funcao6(palavra1,palavra2);
                break;
        }
        case 'g':{system("cls");
                funcao7(palavra1,palavra2);
                break;
        }
        case 'h':{system("cls");
                funcao8(palavra1,palavra2);
                break;
        }
        case 'i':{system("cls");
                funcao9(palavra1,palavra2);
                break;
        }
        case 'j':{system("cls");
                funcao10(palavra1,palavra2);
                break;
        }
        case 'k':{system("cls");
                funcao11(palavra1,palavra2);
                break;
        }
        case 'l':{system("cls");
                funcao12(palavra1,palavra2);
                break;
        }
        case 'm':{system("cls");
                funcao13(palavra1,palavra2);
                break;
        }
        case 'n':{system("cls");
                funcao14(palavra1,palavra2);
                break;
        }
        case 'o':{system("cls");
                funcao15(palavra1,palavra2);
                break;
        }
         case 's':{system("cls");
                printf("\nSaindo.. ");
                break;
        }
         default:printf("\nOpcao Incorreta.");

     }
    }while(op!='s');
    system('pause');
    return 0;
}
