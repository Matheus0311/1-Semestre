/*O algoritmo de Euclides pode ser usado para encontrar o máximo divisor comum (MDC) de dois inteiros positivos, n1 e n2. Exemplo:
suponha n1 = 72 e n2 = 42; você pode usar este algoritmo da seguinte maneira:
a) Divida o maior pelo menor (72/42): 72 = 42 * 1 + 30
b) Divida o divisor (42) pelo resto (30): 42 = 30 * 1 + 12
c) Repita este processo até que obtenha um resto igual a zero: 30 = 12 * 2 + 6 12 = 6 * 2 + 0
d) O último resto não zero é o MDC de n1 e n2.
Faça um programa usando o método acima, que leia dois números inteiros e, então, calcule e escreva o MDC entre eles.*/
#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
int main()//Início da função int main ().
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, aux, resto;
    printf("Informe um número: ");
        scanf("%d", &n1);
    printf("Informe outro número: ");
        scanf("%d", &n2);
    if (n2 > n1)
    {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    resto = n1%n2;
    while (resto != 0)
    {
        n1 = n2;
        n2 = resto;
        resto = n1%n2;
    }
    printf("\nEsse é o MDC: %d", n2);
}
