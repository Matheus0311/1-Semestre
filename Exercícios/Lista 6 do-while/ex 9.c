/* Faça um programa que gere a seguinte saída:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6 */
#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
int main()//Início da função int main ().
{
    setlocale(LC_ALL, "Portuguese");
    int i=1, j=0;
    printf("Saída gerada: \n\n");
    while(i<=6)
    {
        j = 1;
        while (j<=i)
        {
            printf("%d ", j);
            j++;
        }
        printf("\n");
        i++;
    }
}

