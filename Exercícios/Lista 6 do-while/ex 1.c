//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
int main()//In�cio da fun��o int main ().
{
    int num, maior, i=1;
    setlocale(LC_ALL, "Portuguese");
    printf("\nInforme o %d� n�mero: ", i);
        scanf("%d", &num);
    i++;
    maior = num;

    while (i<=10)
    {
        printf("Informe o %d� n�mero: ", i);
            scanf("%d", &num);
        i++;
        if (num > maior)
             maior = num;
    }
     printf("\nEsse � o maior n�mero: %d", maior);
}
