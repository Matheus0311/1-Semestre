#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
#define TAM 10 //Define o tamanho do vetor em 10.
int main()//Início da função int main ().
{
    system("title Exercício 1 - Ordem Inversa"); // Adiciona o nome do exercício ao prompt.
    int vet [TAM], i;
    system("color 0A"); //Função para mudar a cor do programa.
    setlocale(LC_ALL, "Portuguese"); //Função para usar a biblioteca locale.h com acentuação na língua portuguesa.
    printf("Informe 10 números inteiros: ");
    for(i=0; i<TAM; i++)
    {
        printf("\n----------------------------------------\n");
        printf("Informe o %dº número: ", i+1);
            scanf("%d", &vet[i]);
    }
    system("cls");
    for(i=TAM-1; i>=0; i--) //Irá sequenciar os valores armazenados no sentido inverso
    {
        printf("----------------------------------------");
        printf("\n%d\n", vet[i]); // Saída dos valores do vetor na ordem inversa, como solicitado no exercício.
    }
    printf("----------------------------------------");
}
