#include<stdlib.h>
#include<stdio.h>
#include <locale.h>
#define TAM 5
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    char modelo [TAM][100];
    int i, aux;
    float consumo[5], maior=consumo[5];
    for (i=0; i<TAM; i++)
    {
        printf("\nInforme o modelo do %dº carro: ", i+1);
            scanf("%s", &modelo[i]);
    }
    system("cls");
    for (i=0; i<TAM; i++)
    {
        printf("\nIforme quantos quilômetros o modelo %s faz com 1 litro: ", modelo[i]);
            scanf("%f", &consumo[i]);
        if (maior <consumo[i])
        {
            maior=consumo[i];
            aux = i;
        }
    }
        printf ("\nO carro de modelo %s é o que menos consome (aproxidamente %g KM/L)\n",modelo[aux], consumo[aux]);
        for(i = 0 ; i < TAM ; i++)
        {
            printf ("\nO carro de modelo %s precisa de %.2f L para percorrer um distancia de 1000 km", modelo[i], (1000.0/consumo[i]));
        }
}



