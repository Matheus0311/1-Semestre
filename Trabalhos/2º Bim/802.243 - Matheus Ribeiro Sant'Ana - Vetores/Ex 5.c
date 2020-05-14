#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
#define TAM 10 //Define o tamanho do vetor em 10.
int main()//Início da função int main ().
{
    system("title Exercício 5 - Mostrar a média e a quantidade de números menores que a média"); // Adiciona o nome do exercício ao prompt.
    float vet [TAM], media=0, soma=0;
    int i, menores=0;
    system("color 0A"); //Função para mudar a cor do programa.
    setlocale(LC_ALL, "Portuguese"); //Função para usar a biblioteca locale.h com acentuação na língua portuguesa.
    printf("Informe 10 números reais:\n\n");
    for(i=0; i<TAM; i++)
    {
        printf("--------------------------------------------------\n");
        printf("Informe o %dº número: ", i+1);
            scanf("%f", &vet[i]);
    }
    printf("--------------------------------------------------\n");
    for(i=0; i<TAM; i++)
    {
        soma=soma+vet[i]; // Realiza a soma dos valores dentro do vetor vet[i].
    }
    media = soma/TAM; // Realiza a média dos valores usando a soma dividida pela quantidade total de valores do vetor.
    for(i=0; i<TAM; i++)
    {
        if(vet[i] < media)
        {
            menores++;// Se o número inserido no vetor for menor que a média será incrementado mais um na variável menores.
        }
    }
    printf("\nA soma é: %.2f\n", soma); // Saída da soma.
    printf("\n--------------------------------------------------\n");
    printf("\nA média é: %.2f\n", media); // Saída da média, como solicitado no exercício.
    printf("\n--------------------------------------------------\n");
    printf("\nO total de números abaixo dessa média é de: %d\n", menores); // Saída de quantos números são menores que a média, como solicitado no exercício.
    printf("\n--------------------------------------------------\n");
}

