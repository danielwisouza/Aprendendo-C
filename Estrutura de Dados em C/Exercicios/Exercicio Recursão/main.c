#include <stdio.h>
#include <stdlib.h>

//Dado um conjunto de idade retornar a menor e a menor idade

//Caso: Ao aplicar um teste logico foi necessário indexar a menor e maior idade dentre os participantes

int maior(int n, int numeros[]) {
   int x;
   if (n == 1) x = numeros[0];
   else {
      x = maior (n-1, numeros);
      if (x < numeros[n-1]) x = numeros[n-1];
   }
   return x;
}

int menor(int n, int numeros[]){
    int x;
    if (n==1) x=numeros[0];
    else{
        x=menor(n-1,numeros);
        if (x>numeros[n-1]) x=numeros[n-1];
    }
}
int main()
{
    int numeros[]={52,75,2,85,10,15,49,20,4,6};
    printf("A maior idade e %i anos",maior(10,numeros));
    printf("\nA menor idade e %i anos",menor(10,numeros));
    return 0;
}
