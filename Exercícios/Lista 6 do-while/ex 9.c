/* Fa�a um programa que gere a seguinte sa�da:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6 */
#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
int main()//In�cio da fun��o int main ().
{
    setlocale(LC_ALL, "Portuguese");
    int i=1, j=0;
    printf("Sa�da gerada: \n\n");
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

