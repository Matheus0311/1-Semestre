/*A série de Fibonacci é expressa da seguinte forma: 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
Faça um programa que calcule a série de Fibonacci, para N termos, onde N deve ser lido.*/
#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
int main()//Início da função int main ().
{
    setlocale(LC_ALL, "Portuguese");
    int n, ult_termo, termo_ant, i, aux;
    termo_ant = 0;
    ult_termo = 1;
    i = 0;
    printf("Informe o número de termos na série de Fibonacci: ");
        scanf("%d", &n);
    printf("\nSerie de Fibonacci com %d termos: ", n);
    for (i=0;i<n;)
    {
        printf("%d  ", ult_termo);

        aux = ult_termo; //Armazena o ultimo termo em uma variável auxiliar
        ult_termo = ult_termo + termo_ant; //Calcula o próximo termo (soma dos dois último termos)
        termo_ant = aux; //Atribui o último termo já escrito na tela para a variável termo_ant

        i++; //Incrementa a variável i
    }
}
