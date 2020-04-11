/* Faça um programa que gere a saída abaixo:
6
6 5
6 5 4
6 5 4 3
6 5 4 3 2
6 5 4 3 2 1*/
#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
int main()//Início da função int main ().
{
    setlocale(LC_ALL, "Portuguese");
    int i=6, j=0;
    printf("Saída gerada: \n\n");
    while(i>=1)
    {
        j = 6;
        while (j>=i)
        {
            printf("%d ", j);
            j--;
        }
        printf("\n");
        i--;
    }
}

