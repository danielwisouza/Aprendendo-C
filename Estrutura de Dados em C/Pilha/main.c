#include <stdio.h>
#include <stdlib.h>

typedef struct Elemento_da_lista{
    char *dados;
    struct Elemento_da_lista *proximo;
}Elemento;

struct Localizar{
  Elemento *inicio;
  int tamanho;
} Pilha;

int empilhar(Localizar * monte, char *dados){
  Elemento *novo_elemento;
  if ((novo_elemento = (Elemento *) malloc (sizeof (Elemento))) == NULL)
    return -1;
  if ((novo_elemento->dados = (char *) malloc (50 * sizeof (char)))
      == NULL)
    return -1;
  strcpy (novo_elemento->dados, dados);
  novo_elemento->proximo = monte->inicio;
  monte->inicio = novo_elemento;
  monte->tamanho++;
}

int desempilhar (Localizar *monte){
  Elemento *p_elemento;
  if (monte->tamanho == 0)
    return -1;
  p_elemento = monte->inicio;
  monte->inicio = monte->inicio->proximo;
  free (p_elemento->dados);
  free (p_elemento);
  monte->tamanho--;
  return 0;
}

void mostrar(Localizar * monte){
  Elemento *atual;
  int i;
  atual = monte->inicio;

  for(i=0;i<monte->tamanho;++i){
    printf("\t\t%s\n", atual->dados);
    atual = atual->proximo;
  }
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
