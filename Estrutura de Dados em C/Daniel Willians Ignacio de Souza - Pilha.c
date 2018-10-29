#include <stdio.h>
#include <conio.h>
#include <mem.h>

// Listar tarefas a serem Realizadas empinhando de forna que ao
// Realizar uma tarefa ela é retirada da fila sem levar em conta o peso mas sim qual foi colocada por ultimo

int i = 1;
int k = 0;
int listaTrabalhos[10];
char nomeTrabalhos[10][50];
char nTrabalho;

void insereTrabalho(char *nTrabalho){
    //printf("\nteste --------------- %s",nTrabalho);

    listaTrabalhos[k] = i;

    //strcpy(k, listaTrabalhos[k]);
    strcpy(nomeTrabalhos[k],nTrabalho);
    //nomeTrabalhos[k][50] = *nTrabalho;
    printf("\nTrabalho Nro. %d - %s inserido com sucesso!", i, nomeTrabalhos[k]);
    i++;
    k++;

}

void concluiTrabalho(){
    printf("\nMateria Codigo %d concluida!", (listaTrabalhos[0]));
    for (int j = 0; j < k; ++j) {

        listaTrabalhos[j-1] = listaTrabalhos[j];
        nomeTrabalhos[j-1][50] = nomeTrabalhos[j][50];
    }

    k--;
}

void imprimeTrabalhos(){
    printf("\n\nExibindo trabalhos pendentes");
    for (int j = 0; j < k; ++j) {
        printf("\nCodigo: %d - Trabalho: %s", listaTrabalhos[j], nomeTrabalhos[j]);
    }

}


int main(){
    int escolha = 0;
    do{
    printf("\n\n1 - Adicionar trabalho\n2 - Remover trabalho\n3 - Listar trabalhos\n4 - Sair");
    scanf("%d", &escolha);
    switch(escolha){
        case 1:
            fflush(stdin);
            printf("Insira o nome do trabalho: ");
            scanf("%s", &nTrabalho);
            insereTrabalho(&nTrabalho);
            break;
        case 2:
            concluiTrabalho();
            break;
        case 3:
            imprimeTrabalhos();
            break;
        default:
            printf("Opcao invalida");
    }
    }while(escolha != 4);



    return 0;
}
