#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
#define TAM 10 //Define o tamanho do vetor em 10.
int main()//In�cio da fun��o int main ().
{
    system("title Exerc�cio 2 - Quantas vezes o valor x aparece"); // Adiciona o nome do exerc�cio ao prompt.
    int vet [TAM], i, x, j=0;
    system("color 0A"); //Fun��o para mudar a cor do programa.
    setlocale(LC_ALL, "Portuguese"); //Fun��o para usar a biblioteca locale.h com acentua��o na l�ngua portuguesa.
    printf("informe um n�mero para encontrar dentro da matriz: ");
        scanf("%d", &x);
        printf("\n");
    for(i=0; i<TAM; i++)
    {
        printf("--------------------------------------------------\n");
        printf("Informe o %d� n�mero: ", i+1);
            scanf("%d", &vet[i]);
    }
    printf("--------------------------------------------------\n");
    for (i=0; i<TAM; i++)
    {
        if (x==vet[i])
        {
            j++; // Ir� incrementar mais um na vari�vel j quando o valor inserido na vari�vel x for lido dentro do vetor.
        }
    }
    printf("\nO total de vezes que o n�mero %d apareceu foi de: %d vez(es)\n\n", x, j); // Sa�da da quantidade de vezes que o valor de x apareceu no vetor, como solicitado no exerc�cio.
}

