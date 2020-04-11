//Created by: Matheus Ri1beiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
#include <conio.h> //Biblioteca para utilização de funções como: getche
int main()//Início da função int main ().
{
    setlocale(LC_ALL, "Portuguese");
    int soma, n, i;
    soma=0;
    i=1;
    printf("Informe um número: ");
    scanf("%d", &n);
    while (i <= n/2)
    {
        if (n%i==0)
            soma = soma + i;
        i++;
    }
    if (soma == n)
        printf("\nNúmero perfeito!\n\n");
    else
        printf("\nO número não é perfeito!\n\n");
}
