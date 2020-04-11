//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
int main()//Início da função int main ().
{
    int fat=1, num, i=1;
    setlocale(LC_ALL,"Portuguese");
    printf("Informe um número: ");
        scanf("%d", &num);
    while (i<num)
    {
        fat = fat * i;
        i++;
    }
    printf("Esse é o fatorial: %d", fat);
}
