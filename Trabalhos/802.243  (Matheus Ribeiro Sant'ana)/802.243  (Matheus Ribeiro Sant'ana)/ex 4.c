#include <stdio.h>//Biblioteca de fun��o
#include <stdlib.h>//Biblioteca de fun��o
#include <locale.h>//Biblioteca para adicionar acentua��o da l�ngua portuguesa
int main()
{
    float atual, mini, max, med;//declara��o de vari�veis
    setlocale(LC_ALL, "Portuguese");//comando para adicionar acentua��o da l�ngua portuguesa
    system("color F5");//fun��o de mudan�a de cor do programa

    printf("\n------------------------------------------\n");//separa��o por tabela de linhas para est�tica do programa
    printf("\nInforme a quantidade atual do estoque: ");//Entrada de dados
        scanf("%f", &atual);//leitura de dados
    printf("\nInforme a quantidade min�ma do estoque: ");//Entrada de dados
        scanf("%f", &mini);//leitura de dados
    printf("\nInforme a quantidade m�xima do estoque: ");//Entrada de dados
        scanf("%f", &max);//leitura de dados
    printf("\n------------------------------------------\n");

        med = (max + mini)/2;//c�lculo

    if (atual >= med)//condi��o
    {
        printf("\nN�o efetuar compra!\n");//sa�da de dados
        printf("\n------------------------------------------\n");
    }

    else
    {
        printf("\nEfetuar compra!\n");//sa�da de dados
        printf("\n------------------------------------------\n");
    }
}
