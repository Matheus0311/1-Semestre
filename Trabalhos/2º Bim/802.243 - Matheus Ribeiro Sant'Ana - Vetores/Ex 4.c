#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
#define TAM 10 //Define o tamanho do vetor em 10.
int main()//In�cio da fun��o int main ().
{
    system("title Exerc�cio 4 - Maior valor do vetor"); // Adiciona o nome do exerc�cio ao prompt.
    int vet [TAM], i, cont=0, aux=0;
    system("color 0A"); //Fun��o para mudar a cor do programa.
    setlocale(LC_ALL, "Portuguese"); //Fun��o para usar a biblioteca locale.h com acentua��o na l�ngua portuguesa.
    printf("Informe 10 n�meros inteiros:\n\n");
    for(i=0; i<TAM; i++)
    {
        printf("----------------------------------------\n");
        printf("Informe o %d� n�mero: ", i+1);
            scanf("%d", &vet[i]);
    }
    for (i=0; i<TAM; i++) // Ir� percorrer todo o vetor.
    {
        for (cont = i+1; cont<TAM; cont++) // Ir� percorrer outras posi��es do vetor.
        {
            if(vet[i] > vet[cont]) // Se i for maior que cont
            {
                aux = vet[cont]; //aux recebr� o valor de vet[cont].
                vet[cont] = vet [i]; // vet[cont] receber� o valor de vet [i].
                vet[i] = aux; // vet[i] receber� o valor de aux.
            }
        }
    }
    printf("----------------------------------------\n");
    printf("\nO maior valor do vetor �: %d\n\n", vet[TAM-1]); // Sa�da do maior valor do vetor, como solicitado no exerc�cio.
}
