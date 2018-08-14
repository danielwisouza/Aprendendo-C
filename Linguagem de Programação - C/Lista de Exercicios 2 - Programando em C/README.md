Tarefa: fun��es

Fa�a os exerc�cios descritos, usando linguagem de programa��o C. Nomeie cada um dos programas como programa1, programa 2, etc. Em seguida, poste um arquivo chamado seu_nome.zip, contendo os c�digos, isto �, programa1.c, programa 2.c..., bem como arquivos de texto. Importante: N�o esque�a de acrescentar ao final de cada c�digo da fun��o main uma das instru��es:
system("pause");
getch();

1) Considerando o programa Quadrado apresentado em sala de aula, pede-se:

a) fazer prote��o para que somente n�meros inteiros sejam permitidos como entrada para o lado do quadrado

b) acrescentar as seguintes fun��es:

b1) int area_maior_10 (int lado), que retorna 1, se �rea maior que 10, sen�o retorna 0;

b2) void perim_menor_10 (int lado), que escreve na tela se o per�metro do quadrado � menor ou maior que 10.

2) Fa�a um programa que apresente o menu de op��es a seguir e permita ao usu�rio escolher a op��o desejada, mostrando o seu resultado final. Verifique a possibilidade de op��o inv�lida ou inexistente. Dica: use switch case.

Menu de Op��es
A- Imposto
B- Novo sal�rio
C- Classifica��o

Aten��o: Cada op��o deve ser implementada em uma fun��o diferente.

A op��o A dever� receber o sal�rio de um funcion�rio, calcular e apresentar o valor do imposto de renda mensal, usando regras descritas em:  
http://idg.receita.fazenda.gov.br/acesso-rapido/tributos/irpf-imposto-de-renda-pessoa-fisica

Confira se o resultado est� coerente com:

http://www.receita.fazenda.gov.br/Aplicacoes/ATRJO/Simulador/simulador.asp?tipoSimulador=M


A op��o B dever� receber o sal�rio de um funcion�rio, calcular e mostrar o valor do novo sal�rio, usando as regras a seguir:

Aw SAL�RIO                                 AUMENTO %
Maiores que R$ 15000,00                      10%
De R$ 7500,00 a R$ 15000,00              20%
De R$ 1000,00 a R$ 7500,00                30%
Menores que R$1000,00                        40%

A op��o C receber� o sal�rio de um funcion�rio e mostrar� a sua classifica��o usando a rela��o a seguir:

SAL�RIO CLASSIFICA��O
At� R$ 7000,00 Mal remunerado
Maiores que R$ 7000,00 Bem remunerado

 

3) Fa�a um programa que leia, via teclado, cinco n�meros inteiros, calcule e mostre, conforme escolha do usu�rio:

a) O maior n�mero dentre eles;

b) O menor n�mero dentre eles.

c) a m�dia aritm�tica entre eles;

d) a mediana entre eles;

e) a moda entre eles.

Use uma fun��o para cada item.

 
4) Um ve�culo tem um certo consumo de combust�vel (medidos em km / litro) e uma certa quantidade de combust�vel no tanque. O consumo � especificado em uma constante e o n�vel de combust�vel inicial � 0. Implemente um programa contenha as seguintes fun��es:

a) void andar( ) que simula o ato de dirigir o ve�culo por uma certa dist�ncia, reduzindo o n�vel de combust�vel no tanque de gasolina;

b) float obterGasolina( ), que retorna o n�vel atual de combust�vel;

c) adicionarGasolina(float litros), para abastecer o tanque.

O programa deve apresentar um menu de op��es que permita ao usu�rio escolher a op��o desejada.



5) Fa�a um programa que contenha as seguintes caracter�sticas

a) vari�veis -> char nome[20], int idade, float peso e float altura

b) fun��es -> void envelhecer(int anos), void engordar(float kg), void emagrecer(float kg), void crescer(), 

float Imc (float peso,  float altura)

Obs: Por padr�o, a cada ano que a pessoa envelhece, sendo a idade dela menor que 21 anos, ela deve crescer 0,5 cm.

A fun��o main fornecer� um menu para que o usu�rio escolha a op��o desejada.

 

6) Fa�a um programa, descritor de uma bomba de combust�vel, que contenha as seguintes caracter�sticas

a) vari�veis -> char tipoCombustivel, float valorLitro, float quantidadeCombustivel

b) fun��es ->

b1. void abastecerPorValor(float valor) � dado o valor a ser abastecido, mostra a quantidade de litros de combust�vel que foi colocada no ve�culo;

b2. void abastecerPorLitro(float litros) � dada a quantidade em litros de combust�vel, mostra o valor a ser pago pelo cliente.

b3. void alterarValor( loat valor) � altera o valor do litro do combust�vel.

b4. void alterarCombustivel(char c) � altera o tipo do combust�vel.

b5. void alterarQuantidadeCombustivel( ) � altera a quantidade de combust�vel restante na bomba.

OBS: Sempre que acontecer um abastecimento � necess�rio atualizar a quantidade de combust�vel total na bomba.

A fun��o main fornecer� um menu para que o usu�rio escolha a op��o desejada.

 

7) Fa�a um programa que contenha um menu com as seguintes op��es:

(a) Ler uma string S1 (tamanho m�ximo 20 caracteres);

(b) Imprimir o tamanho da string S1;

(c) Comparar a string S1 com uma nova string S2 fornecida pelo usu�rio e imprimir o resultado da compara��o;

(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatena��o;

(e) Imprimir a string S1 de forma reversa;

(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usu�rio;

(g) Substituir a primeira ocorr�ncia do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 ser�o lidos via teclado.

====================================================================================================================================================
/*coment?rios com mais de uma linha
*/

//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int n1,n2;
    char op='$';
    while(op=='$')
    {
        printf("\nDigite n1:");
        scanf("%d",&n1);
        printf("\nDigite n2:");
        scanf("%d",&n2);
        printf("\nDigite a op:");
        op=getche();
        switch(op)
        {
          case '+':printf("\n%d",n1+n2);
                   printf("\nEncerrar?");
                   op=getche();
                   if (op!='s')op='$';
                   break;

         case '-': printf("\n%d",n1-n2);
                   printf("\nEncerrar?");
                   op=getche();
                   if (op!='s')op='$';
                   break;

        case '*': printf("\n%d",n1*n2);
                   printf("\nEncerrar?");
                   op=getche();
                   if (op!='s')op='$';
                   break;

        case '/':  printf("\n%d",n1/n2);
                   printf("\nEncerrar?");
                   op=getche();
                   if (op!='s')op='$';
                   break;
        default: printf("\n op??o inv?lida");
                op='$';
        }


    }

    return 0;
}
