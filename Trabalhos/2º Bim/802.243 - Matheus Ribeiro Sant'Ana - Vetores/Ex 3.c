#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
#define TAM 10 //Define o tamanho do vetor em 10.
int main()//In�cio da fun��o int main ().
{
    system("title Exerc�cio 3 - Quantos n�meros pares aparecem"); // Adiciona o nome do exerc�cio ao prompt.
    int vet [TAM], i, x=0;
    system("color 0A"); //Fun��o para mudar a cor do programa.
    setlocale(LC_ALL, "Portuguese"); //Fun��o para usar a biblioteca locale.h com acentua��o na l�ngua portuguesa.
    printf("Informe 10 n�meros inteiros:\n\n");
    for(i=0; i<TAM; i++)
    {
        printf("----------------------------------------\n");
        printf("Informe o %d� n�mero: ", i+1);
            scanf("%d", &vet[i]);
    }
    for(i=0; i<TAM; i++)
    {
        if(vet[i] % 2 == 0)
        {
            x++; // Se o resultado do resto da divis�o de vet[i] por 2 for 0 esse n�mero ser� par e ser� incrementado mais um na vari�vel x.
        }
    }
    printf("----------------------------------------\n");
    printf("\nA quantidade de n�meros pares � de: %d\n\n", x); // Sa�da da quantidade de n�meros pares inseridos, como solicitado no exerc�cio.
}
