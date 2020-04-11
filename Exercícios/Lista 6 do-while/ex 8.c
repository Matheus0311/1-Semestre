/*O algoritmo de Euclides pode ser usado para encontrar o m�ximo divisor comum (MDC) de dois inteiros positivos, n1 e n2. Exemplo:
suponha n1 = 72 e n2 = 42; voc� pode usar este algoritmo da seguinte maneira:
a) Divida o maior pelo menor (72/42): 72 = 42 * 1 + 30
b) Divida o divisor (42) pelo resto (30): 42 = 30 * 1 + 12
c) Repita este processo at� que obtenha um resto igual a zero: 30 = 12 * 2 + 6 12 = 6 * 2 + 0
d) O �ltimo resto n�o zero � o MDC de n1 e n2.
Fa�a um programa usando o m�todo acima, que leia dois n�meros inteiros e, ent�o, calcule e escreva o MDC entre eles.*/
#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
int main()//In�cio da fun��o int main ().
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, aux, resto;
    printf("Informe um n�mero: ");
        scanf("%d", &n1);
    printf("Informe outro n�mero: ");
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
    printf("\nEsse � o MDC: %d", n2);
}
