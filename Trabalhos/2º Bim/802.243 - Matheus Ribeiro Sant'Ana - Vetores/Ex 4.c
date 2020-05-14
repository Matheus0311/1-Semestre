#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
#define TAM 10 //Define o tamanho do vetor em 10.
int main()//Início da função int main ().
{
    system("title Exercício 4 - Maior valor do vetor"); // Adiciona o nome do exercício ao prompt.
    int vet [TAM], i, cont=0, aux=0;
    system("color 0A"); //Função para mudar a cor do programa.
    setlocale(LC_ALL, "Portuguese"); //Função para usar a biblioteca locale.h com acentuação na língua portuguesa.
    printf("Informe 10 números inteiros:\n\n");
    for(i=0; i<TAM; i++)
    {
        printf("----------------------------------------\n");
        printf("Informe o %dº número: ", i+1);
            scanf("%d", &vet[i]);
    }
    for (i=0; i<TAM; i++) // Irá percorrer todo o vetor.
    {
        for (cont = i+1; cont<TAM; cont++) // Irá percorrer outras posições do vetor.
        {
            if(vet[i] > vet[cont]) // Se i for maior que cont
            {
                aux = vet[cont]; //aux recebrá o valor de vet[cont].
                vet[cont] = vet [i]; // vet[cont] receberá o valor de vet [i].
                vet[i] = aux; // vet[i] receberá o valor de aux.
            }
        }
    }
    printf("----------------------------------------\n");
    printf("\nO maior valor do vetor é: %d\n\n", vet[TAM-1]); // Saída do maior valor do vetor, como solicitado no exercício.
}
