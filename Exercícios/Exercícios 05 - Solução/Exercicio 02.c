/*Faça um programa que leia um número qualquer e divida por 2 (dois),
sucessivamente, até que o resultado seja menor que 1 (um), mostre a sequencia de resultados.*/

#include <stdio.h>//Inclusão de biblioteca

void main (void) //Função Principal
{
    float n; //Declaração da variável n

    printf("\nInforme um Numero: ");
    scanf("%f", &n); //Leitura do número

    printf("\nResultados das divisoes sucessivas de %g por 2: ", n);

    do{
        n = n / 2;
        printf("  %g", n); //Imprime o resultado da divisão anterior por 2
    }while(n >= 1.0); //Executa enquanto n for maior ou igual que 1
}
