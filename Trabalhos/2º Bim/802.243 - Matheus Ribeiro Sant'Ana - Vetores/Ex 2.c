#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
#define TAM 10 //Define o tamanho do vetor em 10.
int main()//Início da função int main ().
{
    system("title Exercício 2 - Quantas vezes o valor x aparece"); // Adiciona o nome do exercício ao prompt.
    int vet [TAM], i, x, j=0;
    system("color 0A"); //Função para mudar a cor do programa.
    setlocale(LC_ALL, "Portuguese"); //Função para usar a biblioteca locale.h com acentuação na língua portuguesa.
    printf("informe um número para encontrar dentro da matriz: ");
        scanf("%d", &x);
        printf("\n");
    for(i=0; i<TAM; i++)
    {
        printf("--------------------------------------------------\n");
        printf("Informe o %dº número: ", i+1);
            scanf("%d", &vet[i]);
    }
    printf("--------------------------------------------------\n");
    for (i=0; i<TAM; i++)
    {
        if (x==vet[i])
        {
            j++; // Irá incrementar mais um na variável j quando o valor inserido na variável x for lido dentro do vetor.
        }
    }
    printf("\nO total de vezes que o número %d apareceu foi de: %d vez(es)\n\n", x, j); // Saída da quantidade de vezes que o valor de x apareceu no vetor, como solicitado no exercício.
}

