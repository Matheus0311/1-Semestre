#include <stdio.h>//Biblioteca de fun��o
#include <stdlib.h>//Biblioteca de fun��o
#include <locale.h>//Biblioteca para adicionar acentua��o da l�ngua portuguesa
int main()
{
    float tempo, sal, reajuste;//declara��o de vari�veis
    setlocale(LC_ALL, "Portuguese");//comando para adicionar acentua��o da l�ngua portuguesa
    system("color 5f");//fun��o de mudan�a de cor do programa

    printf("\n----------------------------------------------------------\n");//separa��o por tabela de linhas para est�tica do programa
    printf("Tempo em anos trabalhados na empresa: ");//Entrada de dados
        scanf("%f", &tempo);//leitura de dados
    printf("\n----------------------------------------------------------\n");
    printf("Sal�rio recebido pelo trabalho: ");//Entrada de dados
        scanf("%f", &sal);//leitura de dados
    printf("\n----------------------------------------------------------\n");

    if (tempo < 10)//condi��o
    {
        reajuste = sal*1.08;//c�lculo
        printf("\nSeu reajuste � de 8%% e seu sal�rio � de %.2fR$\n", reajuste);//sa�da de dados
        printf("\n----------------------------------------------------------\n");
    }
    else
    {
        reajuste = sal*1.1;//c�lculo
        printf("\nSeu reajuste � de 10%% e o seu sal�rio � de %.2fR$\n", reajuste);//sa�da de dados
        printf("\n----------------------------------------------------------\n");
    }
}
