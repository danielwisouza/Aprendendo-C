#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funcao1(char palavra1[],char palavra2[]){
    if(strcmp(palavra1,palavra2)==0){
        printf("Strings Iguais\n");
    }
    else{
        printf("String diferentes\n");
    }
}

void funcao2(char palavra1[],char palavra2[]){
    printf("Palavra 1 tem %d letras\n",strlen(palavra1));
    printf("Palavra 2 tem %d letras\n\n",strlen(palavra2));

}

void funcao3(char palavra1[],char palavra2[]){
    printf("Agora palavra 1 e igual a palavra 2: %s \n\n",strcpy(palavra1,palavra2));
}

void funcao4(char palavra1[],char palavra2[]){
    printf("Agora palavra 1 foi concatenada com palavra 2: %s\n",strcat(palavra1,palavra2));
}

void funcao5(char palavra1[],char palavra2[]){
    int id;
    printf("Palavra 1: %s\n",palavra1);
    printf("Qual posicao de 0 ate %i: ",(strlen(palavra1)-1));
    scanf("%i",&id);
    printf("O caracter é: %c\n",palavra1[id]);

}

void funcao6(char palavra1[],char palavra2[]){
	char *pdest;
	pdest = memccpy(palavra1,palavra2,'c',45);
	printf( "Result: %s\n",palavra1);
    printf( "Length: %d characters\n", strlen(palavra1));
}

void funcao7(char palavra1[],char palavra2[]){
    char *pdest;
	pdest = memmove(palavra1,palavra2,4);
	printf( "Result: %s\n",palavra1);
    printf( "Length: %d characters\n", strlen(palavra1));

}

void funcao8(char palavra1[],char palavra2[]){
    char *pdest;
	pdest = memccpy(palavra1,palavra2,4,3);
	printf( "Result: %s\n",palavra1);
    printf( "Length: %d characters\n", strlen(palavra1));

}

void funcao9(char palavra1[],char palavra2[]){
    char *pdest;
	pdest = strncat(palavra1,palavra2,5);
	printf( "Result: %s\n",palavra1);
    printf( "Length: %d characters\n", strlen(palavra1));

}
void funcao10(char palavra1[],char palavra2[]){
    char *pdest;
	pdest = memchr(palavra1,palavra2,3);
	printf( "Result: %s\n",palavra1);
    printf( "Length: %d characters\n", strlen(palavra1));

}

void funcao11(char palavra1[],char palavra2[]){
    char *pdest;
	pdest = strchr(palavra1,4);
	printf( "Result: %s\n",palavra1);
    printf( "Length: %d characters\n", strlen(palavra1));

}

void funcao12(char palavra1[],char palavra2[]){
    char *pdest;
	pdest = strcspn(palavra1,palavra2);
	printf( "Result: %s\n",palavra1);
    printf( "Length: %d characters\n", strlen(palavra1));

}

void funcao13(char palavra1[],char palavra2[]){
    char *pdest;
	pdest = strspn(palavra1,palavra2);
	printf( "Result: %s\n",palavra1);
    printf( "Length: %d characters\n", strlen(palavra1));

}

void funcao14(char palavra1[],char palavra2[]){
    char *pdest;
	//pdest = strtod(palavra1,palavra2);
	printf( "Result: %s\n",palavra1);
    printf( "Length: %d characters\n", strlen(palavra1));

}

void funcao15(char palavra1[],char palavra2[]){
    char *pdest;
	pdest =  memset(palavra1,4,2);
	printf( "Result: %s\n",palavra1);
    printf( "Length: %d characters\n", strlen(palavra1));

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
    printf(" F - Copia de bloco de memoria\n");
    printf(" G - Move bloco de memoria\n");
    printf(" H - Compara dois blocos de memoria\n");
    printf(" I - Adiciona “n” caracteres de uma string\n");
    printf(" J - Localiza caractere em bloco de memoria\n");
    printf(" K - Localiza primeira ocorrencia de caractere\n");
    printf(" L - Retorna o numero de caracteres lidos antes da ocorrencia\n");
    printf(" M - Retorna o comprimento da string");
    printf(" N - Divide uma string em sub-strings com base em um caractere\n");
    printf(" O - Preenche bloco de memoria com valor especificado\n");
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
