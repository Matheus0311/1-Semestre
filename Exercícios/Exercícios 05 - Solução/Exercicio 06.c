/*Faça um programa que calcule o produto de dois números lidos da entrada (n1 e n2)
através do método de somas sucessivas. Suponha que n1 e n2 são positivos.*/

#include <stdio.h>//Inclusão de biblioteca

void main (void) //Função Principal
{
    int n1, n2; //Declaração das variaveis para os numeros de entrada
    int res = 0; //Declaração da variavel para o resultado
    int i = 1; //Inicializando a variavel i para controlar o laço

    printf("\nInforme o primeiro numero: ");
    scanf("%d", &n1); //Leitura do primeiro numero

    printf("\nInforme o segundo numero: ");
    scanf("%d", &n2); //Leitura do segundo numero


    while(i <= n2) //Executa o laço n2 vezes
    {
        res = res + n1; //Acumula n1 em res n2 vezes
        i++;//Incrementa a variavel i
    }

    printf("\nProduto dos numeros: %d\n\n", res); //Mostra na tela o produto dos números
}
