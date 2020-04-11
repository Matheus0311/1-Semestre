//Created by: Matheus Ri1beiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
int main()//Início da função int main ().
{
    setlocale(LC_ALL, "Portuguese");
    int n, i=2, primo=1;
    printf("Informe um número: ");
        scanf("%d", &n);
    while (i <= n/2 && primo ==1)
    {
        if (n%i==0)
            primo = 0;
            i++;
    }
    if (primo == 1)
        printf("\nNúmero primo\n");
    else
        printf("\nNúmero não primo\n");
}
