/* Fa�a um programa que gere a sa�da abaixo:
6
6 5
6 5 4
6 5 4 3
6 5 4 3 2
6 5 4 3 2 1*/
#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
int main()//In�cio da fun��o int main ().
{
    setlocale(LC_ALL, "Portuguese");
    int i=6, j=0;
    printf("Sa�da gerada: \n\n");
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

