#include<stdio.h> //Inclus�o de biblioteca
#define TAM 100

void main (void)//Fun��o principal
{
    int V[100], voto, eleito, i; //Declara��o do vetor e de vari�veis

    for(i = 0; i < TAM; i++) //Inicializando o vetor com ZERO
        V[i] = 0;

    printf("\nPara votar informe o codigo do candidato (de 0 a 99). Para encerrar digite -1\n");

    do{
        printf("\nCodigo do Candidato: ");
        scanf("%d", &voto); //Lendo o voto

        if(voto >= 0 && voto <= 99) //Verificando se o voto � v�lido
        {
            V[voto]++; //Computando o voto do candidato
            printf("Voto computado com sucesso!\n");
        }
        else
        {
            if(voto > 99)
                printf("Voto invalido!\n");
            else
                printf("Votacao Encerrada!\n");
        }
    }while(voto >= 0); //Encerrando a vota��o

    eleito = 0; //Inicializando a vari�vel eleito com o primeiro candidato
    for(i = 1; i < TAM; i++) //Percorrendo o vetor de votos
    {
        if(V[eleito] < V[i]) //Determinando o candidato mais votado
            eleito = i;
    }

    printf("\n\nO candidato %d foi eleito", eleito); //Mostrando o candidato eleito

    printf("\n\n");
}
