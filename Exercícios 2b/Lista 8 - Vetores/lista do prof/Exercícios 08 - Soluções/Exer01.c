#include<stdio.h> //Inclusão de biblioteca

void main (void)//Função principal
{
    int V[10], max, aux, i, j; //Declaração do vetor de variáveis

    printf("\nInforme Dez numeros inteiros\n\n");

    for(i = 0; i < 10; i++) //Laço para percorrer o vetor
    {
        printf("%d%c numero:", i+1, 167);
        scanf("%d", &V[i]); //Leitura de cada número para o vetor
    }

    for(i = 9; i > 0; i--) //Percorre o vetor,do fim para o inicio, colocando o maior elemento do intervalor de 0 a i na posição i
    {
        max = i; //Inicializa a variável max com i
        for(j = 0; j < i; j++) //Percorre o vetor no intervalo de 0 a i-1
        {
            if(V[j] > V[max]) //Se o elemento da posição j for maior que o elemento da posição max,atualiza max com j
                max = j;
        }
        if(max != i) //Troca o elemento da posição max com o elemento da posição i
        {
            aux = V[i];
            V[i] = V[max];
            V[max] = aux;
        }
    }

    printf("\nNumero em ordem crescente: ");

    for(i = 0; i < 10; i++) //Laço para percorrer o vetor
    {
        printf("%d ", V[i]); //Escreve os números do vetor
    }
    printf("\n\n");
}
