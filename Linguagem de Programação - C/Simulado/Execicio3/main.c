#include <stdio.h>
#include <stdlib.h>

void aleatorios()
{
int n,i,j,k,g;
int sort[10];
    for(i=0;i<10;i++) sort[i]=10;
    k=0;
    for(i=0;i<10;i++){
        g=0;
        while (g==0){     // um n�mero rand�mico
        qualquer entre 0 e 9
        n =(rand()%10);
            for(j=0;j<10;j++) {if (sort[j]==n)k=1;}
            // se o n�mero for v�lido, ficar� armazenado no vetor
            if (k==0){
                sort[i]=n;
                printf("%d",n);
                printf("\n");
                g=1;
                }
                else k=0;
        }
    }
}

main()
{
//inicia a gera��o de n�meros rand�micos a partir de hora do sistema
srand ((unsigned) time(NULL));
aleatorios();
getch();
}
