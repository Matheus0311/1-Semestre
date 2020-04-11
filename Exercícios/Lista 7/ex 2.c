/*Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
Sabe-se que um número da forma n3 é igual a soma de n ímpares consecutivos.
Exemplo: 13 = 1; 23 = 3 + 5; 33 = 7 + 9 + 11; 43 = 13 + 15 + 17 + 19...
Faça um programa que, dado M, determina e mostra os ímpares consecutivos cuja soma é igual a n3 para n assumindo valores de 1 a M*/
#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
int main()//Início da função int main ().
{
    setlocale(LC_ALL, "Portuguese");
    int m=0, n=0, i=0, soma=0, inicio=0;
    printf("Programa para mostrar a soma dos números ímpares consecutivos\n");
    printf("\nInforme um número: ");
        scanf("%d", &m);
    for (n = 1; n <= m; n++)
    {
        soma=0;
        for (inicio = 1; soma != n * n * n; inicio = inicio + 2)
        {
            soma=0;
            for (i = 0; i < n; i++)
                soma = soma + inicio + 2 * i;
        }
        inicio = inicio - 2;
    printf("%d*%d*%d = %d", n, n, n, inicio);
    for (i = 1; i < n; i++)
      printf("+%d", inicio+2*i);
    printf("\n");
  }

  return 0;
}
