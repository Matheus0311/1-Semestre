/*Faça um programa que leia dez números inteiros aleatórios e
apresente os números que são divisíveis por 3 (três).*/

#include <stdio.h>//Inclusão de biblioteca

void main (void) //Função Principal
{
    int numero; //Declaração da variavel numero
    int i = 1; //Inicializa a variavel i para controlar o laço

    printf("\nInforme DEZ numeros inteiros");

    do{
        printf("\n\nInforme o Numero e Tecle Enter: ");
        scanf("%d", &numero); //Leitura do número

        if(numero % 3 == 0)//Verifica se o numero informado eh divisivel por TRES
            printf("Numero divisivel por TRES");
        else
            printf("Numero NAO divisivel por TRES");

        i++;//Incrementa a variavel i

    }while(i <= 10); //Executa o laço DEZ vezes

    printf("\n\n"); //Pula DUAS linhas no final

}
