/*Faça um programa que leia uma lista de números aleatórios, cujo último número é -99.
Ao final, o programa deve mostrar a media aritmética de todos os números positivos da lista,
os números negativos devem ser descartados.*/

#include <stdio.h>//Inclusão de biblioteca

void main (void) //Função Principal
{
    float numero; //Declaração da variavel numero
    float soma = 0; //Inicializa a variavel soma com zero
    int quant = 0; //Inicializa a variavel quant com zero

    printf("\nInforme uma sequencia de numeros cujo o ultimo numer eh -99\n");

    do{
        printf("\nInforme o Numero e Tecle Enter: ");
        scanf("%f", &numero); //Leitura do número
        if(numero > 0)
        {
            soma = soma + numero; //Acumula em soma o número informado
            quant ++; //Incrementa a variável soma
        }
    }while(numero != -99); //Executa o laço enquanto numero for diferente de -99

    if(quant == 0)
        printf("\nNenhum numero positivo informado\n\n");
    else
        printf("\nMedia dos numeros: %g\n\n", soma/quant); //Apresenta a média calculada
}
