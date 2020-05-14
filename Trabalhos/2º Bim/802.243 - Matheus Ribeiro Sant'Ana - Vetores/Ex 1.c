#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
#define TAM 10 //Define o tamanho do vetor em 10.
int main()//In�cio da fun��o int main ().
{
    system("title Exerc�cio 1 - Ordem Inversa"); // Adiciona o nome do exerc�cio ao prompt.
    int vet [TAM], i;
    system("color 0A"); //Fun��o para mudar a cor do programa.
    setlocale(LC_ALL, "Portuguese"); //Fun��o para usar a biblioteca locale.h com acentua��o na l�ngua portuguesa.
    printf("Informe 10 n�meros inteiros: ");
    for(i=0; i<TAM; i++)
    {
        printf("\n----------------------------------------\n");
        printf("Informe o %d� n�mero: ", i+1);
            scanf("%d", &vet[i]);
    }
    system("cls");
    for(i=TAM-1; i>=0; i--) //Ir� sequenciar os valores armazenados no sentido inverso
    {
        printf("----------------------------------------");
        printf("\n%d\n", vet[i]); // Sa�da dos valores do vetor na ordem inversa, como solicitado no exerc�cio.
    }
    printf("----------------------------------------");
}
