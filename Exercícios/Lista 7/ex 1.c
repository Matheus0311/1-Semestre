//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
// Fa�a um programa que, dados N n�meros inteiros positivos, calcula e mostra a soma dos que s�o primos.
#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
int main()//In�cio da fun��o int main ().
{
    int num=0, n1=0, n2=0, soma=0, i=1, c=0, resto=0;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe quantos n�meros primos quer somar: ");
        scanf("%d", &num);
    for (i=1; i<=num; i++)
    {
        n2=0;
        c=1;
        printf("\nInforme o %d� n�mero:", i);
            scanf("%d", &n1);
        while (c<=n1)
        {
            resto=n1%c;
            if (resto==0)
            {
                n2++;
            }
            c++;
        }
        if (n2 == 2)
        {
            soma=soma+n1;
        }
    }
    printf("\nResultado da soma:%d\n\n", soma);
    system("pause");
}
