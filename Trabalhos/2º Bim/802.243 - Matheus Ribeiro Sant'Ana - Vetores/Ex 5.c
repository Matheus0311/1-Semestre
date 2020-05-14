#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
#define TAM 10 //Define o tamanho do vetor em 10.
int main()//In�cio da fun��o int main ().
{
    system("title Exerc�cio 5 - Mostrar a m�dia e a quantidade de n�meros menores que a m�dia"); // Adiciona o nome do exerc�cio ao prompt.
    float vet [TAM], media=0, soma=0;
    int i, menores=0;
    system("color 0A"); //Fun��o para mudar a cor do programa.
    setlocale(LC_ALL, "Portuguese"); //Fun��o para usar a biblioteca locale.h com acentua��o na l�ngua portuguesa.
    printf("Informe 10 n�meros reais:\n\n");
    for(i=0; i<TAM; i++)
    {
        printf("--------------------------------------------------\n");
        printf("Informe o %d� n�mero: ", i+1);
            scanf("%f", &vet[i]);
    }
    printf("--------------------------------------------------\n");
    for(i=0; i<TAM; i++)
    {
        soma=soma+vet[i]; // Realiza a soma dos valores dentro do vetor vet[i].
    }
    media = soma/TAM; // Realiza a m�dia dos valores usando a soma dividida pela quantidade total de valores do vetor.
    for(i=0; i<TAM; i++)
    {
        if(vet[i] < media)
        {
            menores++;// Se o n�mero inserido no vetor for menor que a m�dia ser� incrementado mais um na vari�vel menores.
        }
    }
    printf("\nA soma �: %.2f\n", soma); // Sa�da da soma.
    printf("\n--------------------------------------------------\n");
    printf("\nA m�dia �: %.2f\n", media); // Sa�da da m�dia, como solicitado no exerc�cio.
    printf("\n--------------------------------------------------\n");
    printf("\nO total de n�meros abaixo dessa m�dia � de: %d\n", menores); // Sa�da de quantos n�meros s�o menores que a m�dia, como solicitado no exerc�cio.
    printf("\n--------------------------------------------------\n");
}

