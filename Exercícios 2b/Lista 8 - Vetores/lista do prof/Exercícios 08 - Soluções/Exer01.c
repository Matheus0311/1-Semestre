#include<stdio.h> //Inclus�o de biblioteca

void main (void)//Fun��o principal
{
    int V[10], max, aux, i, j; //Declara��o do vetor de vari�veis

    printf("\nInforme Dez numeros inteiros\n\n");

    for(i = 0; i < 10; i++) //La�o para percorrer o vetor
    {
        printf("%d%c numero:", i+1, 167);
        scanf("%d", &V[i]); //Leitura de cada n�mero para o vetor
    }

    for(i = 9; i > 0; i--) //Percorre o vetor,do fim para o inicio, colocando o maior elemento do intervalor de 0 a i na posi��o i
    {
        max = i; //Inicializa a vari�vel max com i
        for(j = 0; j < i; j++) //Percorre o vetor no intervalo de 0 a i-1
        {
            if(V[j] > V[max]) //Se o elemento da posi��o j for maior que o elemento da posi��o max,atualiza max com j
                max = j;
        }
        if(max != i) //Troca o elemento da posi��o max com o elemento da posi��o i
        {
            aux = V[i];
            V[i] = V[max];
            V[max] = aux;
        }
    }

    printf("\nNumero em ordem crescente: ");

    for(i = 0; i < 10; i++) //La�o para percorrer o vetor
    {
        printf("%d ", V[i]); //Escreve os n�meros do vetor
    }
    printf("\n\n");
}
