//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
int main()//Início da função int main ().
{
    int num, maior, i=1;
    setlocale(LC_ALL, "Portuguese");
    printf("\nInforme o %d° número: ", i);
        scanf("%d", &num);
    i++;
    maior = num;

    while (i<=10)
    {
        printf("Informe o %d° número: ", i);
            scanf("%d", &num);
        i++;
        if (num > maior)
             maior = num;
    }
     printf("\nEsse é o maior número: %d", maior);
}
