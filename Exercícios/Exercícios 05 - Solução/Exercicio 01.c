/*Faça um programa que imprima os valores pares de 0 (zero) a 10 (dez).*/

#include <stdio.h>//Inclusão de biblioteca

void main (void) //Função Principal
{
    int i; //Declaração da variável i

    i = 0; //Inicializa a variável i com zero

    printf("\nNumeros Pares de Zero a Dez:");

    while (i <= 10) //Executa enquanto o i for menor ou igual a 10
    {
        printf(" %d", i); //Imprime o valor de i
        i = i + 2; //Incrementa o i em 2
    }
}
