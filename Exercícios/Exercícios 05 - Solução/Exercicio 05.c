/*Faça um programa que leia um inteiro positivo N. Calcule e mostre os N primeiros
termos da sequência (1, 3, 6, 10, 15, 21, ...).*/

#include <stdio.h>//Inclusão de biblioteca

void main (void) //Função Principal
{
    int termo = 0; //Declaração da variavel termo
    int N; //Variável para a quantidade de termos da sequencia
    int i = 1; //Inicializando a variavel i para controlar o laço

    printf("\nInforme a qtde de termos para a sequencia: ");
    scanf("%d", &N); //Leitura da qtde de termos

    printf("\n\nSequencia de %d termos :", N);

    while(i <= N) //Executa o laço N vezes
    {
        termo = termo + i; //Calcula o termo
        i++;//Incrementa a variavel i

        printf("  %d", termo); //Escreve o termo na tela
    }

    printf("\n\n"); //Pula DUAS linhas no final
}
