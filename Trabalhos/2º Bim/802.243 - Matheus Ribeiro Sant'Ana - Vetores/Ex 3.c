#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
#define TAM 10 //Define o tamanho do vetor em 10.
int main()//Início da função int main ().
{
    system("title Exercício 3 - Quantos números pares aparecem"); // Adiciona o nome do exercício ao prompt.
    int vet [TAM], i, x=0;
    system("color 0A"); //Função para mudar a cor do programa.
    setlocale(LC_ALL, "Portuguese"); //Função para usar a biblioteca locale.h com acentuação na língua portuguesa.
    printf("Informe 10 números inteiros:\n\n");
    for(i=0; i<TAM; i++)
    {
        printf("----------------------------------------\n");
        printf("Informe o %dº número: ", i+1);
            scanf("%d", &vet[i]);
    }
    for(i=0; i<TAM; i++)
    {
        if(vet[i] % 2 == 0)
        {
            x++; // Se o resultado do resto da divisão de vet[i] por 2 for 0 esse número será par e será incrementado mais um na variável x.
        }
    }
    printf("----------------------------------------\n");
    printf("\nA quantidade de números pares é de: %d\n\n", x); // Saída da quantidade de números pares inseridos, como solicitado no exercício.
}
