/*Created by: Matheus Ri1beiro Sant'Ana. RGM:802.243
Faça um programa que leia um número inteiro positivo N.
Calcule e mostre o maior quadrado menor ou igual a N.
Por exemplo, se N for maior ou igual a 38, o menor quadrado é 36 (quadrado de 6).*/
#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
int main()//Início da função int main ().
{
    setlocale(LC_ALL, "Portuguese");
    int n=0, i=0;
    printf("Informe um número: ");
        scanf("%d", &n);
    while (i*i<= n)
    {
        i++;
    }
    i--;
        printf("\nEsse é o quadrado mais próximo de %d: %d (quadrado de %d)\n\n", n, i*i, i);
}
