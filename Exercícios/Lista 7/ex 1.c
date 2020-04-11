//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
// Faça um programa que, dados N números inteiros positivos, calcula e mostra a soma dos que são primos.
#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
int main()//Início da função int main ().
{
    int num=0, n1=0, n2=0, soma=0, i=1, c=0, resto=0;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe quantos números primos quer somar: ");
        scanf("%d", &num);
    for (i=1; i<=num; i++)
    {
        n2=0;
        c=1;
        printf("\nInforme o %dº número:", i);
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
