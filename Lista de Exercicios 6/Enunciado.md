Tarefa:ponteiro, lista encadeada e arquivo
Codifique os programas a seguir, zipe-os e envie o arquivo resultante por esse ambiente.

SUGESTÕES:

A) TESTE OS EXEMPLOS VISTOS EM SALA DE AULA.

B) ASSISTA AO VÍDEO DISPONÍVEL EM

https://www.youtube.com/watch?v=HolumnShg-U

C) COMECE A RESOLVER OS ITENS MAIS SIMPLES DA TAREFA E DEPOIS VÁ PARA OS ITENS MAIS COMPLEXOS.

Importante, não esqueça de acrescentar ao final de cada código da função main uma das instruções:
system("pause");
getch();

 


1- Comente o vídeo By Casseb. O que você achou dele?


2- Observe o trecho do código a seguir.char *dia_semana(int n) {char *d[] = {"erro","domingo","segunda-feira","terça-feira","quarta-feira","quinta-feira","sexta-feira","sábado"};return d[1<=n && n<=7 ? n : 0];}

Responda:
a) Explique o que será retornado pela função?
b) Existem ponteiros neste trecho de código? Explique.


3- Usando a função char *dia_semana(int n) apresentada no item anterior, implemente um programa que simule um calendário permanente, isto é, o usuário digitará uma data e o programa retornará o dia da semana correspondente àquela data digitada. Adapte o código que você fez para a lista anterior de exercícios.

4 -Faça um programa, usando lista encadeada, de forma que possam ser cadastradas quantas pessoas o usuário desejar. Deverão ser cadastrados os seguintes dados: nome, RG e ano de nascimento. O programa permite as seguintes funcionalidades, conforme escolha do usuário:

a) -  Cadastrar uma pessoa;

b)- Calcular a idade de uma pessoa selecionada pelo usuário;

c)-  Listar pessoas que nasceram a partir de um determinado ano;

d)- Listar pessoas que nasceram antes de um determinado ano;

e) - Encontrar o nome de uma pessoa com determinado RG;

f)- Sair.

O programa deverá ser executado em loop até o usuário digitar a opção f.

5- Faça um programa para controle de passagens aéreas. O programa deve conter uma estrutura capaz de armazenar os seguintes dados:

int numero_voo,

char ciaAerea [20],

char Modelo_Aeronave [20],

char origem [20],

char destino [20],

int qtdeTotalAssentos,

int qtdeAssentosOcupados.

Todos os dados devem ser armazenados em uma lista encadeada. O programa deve ter, no mínimo, as seguintes funcionalidades:

a - Incluir voo

b - listar voos

c - Reservar assento em um voo

d - Cancelar voo

e- Cancelar passagem

f-Sair

6 - Adicione as seguintes funcionalidades ao programa Lista encadeada - lendo caracteres:

a) - Função que inverte a sequência de carateres armazenados e os imprime na ordem em que foram digitados;

b)- Função que conta quantos espaços há na sequência de carateres digitada pelo usuário e retorna esse número para ser mostrado na tela.

7 - Explique o significado de cada ocorrência de * no fragmento de código a seguir e indique qual a saída exibida na tela.int *p, x=5;*p *= 2**p;printf("%d", x);

8 - Faça o teste de mesa para o programa lista encadeada de caracteres, apresentado pela professora em sala.

9 - Adapte o programa 5 de forma que os dados sejam lidos e armazenados via arquivo.

10 - Adapte o programa 6 de forma que os dados sejam lidos e armazenados via arquivo.
