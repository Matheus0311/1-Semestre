#include <stdio.h>//Biblioteca de fun��o
#include <stdlib.h>//Biblioteca de fun��o
#include <locale.h>//Biblioteca para adicionar acentua��o da l�ngua portuguesa
int main()
{
    float sal, fin;//declara��o de vari�veis
    setlocale(LC_ALL, "Portuguese");//comando para adicionar acentua��o da l�ngua portuguesa
    system("color 6");//fun��o de mudan�a de cor do programa
    printf("\n-------------------------------------------\n");//separa��o por tabela de linhas para est�tica do programa
    printf("\nInforme o seu sal�rio: ");//Entrada de dados
        scanf("%f", &sal);//leitura de dados
    printf("\n-------------------------------------------\n");
    printf("\nInforme o valor do financiamento: ");//Entrada de dados
        scanf("%f", &fin);//leitura de dados
    printf("\n-------------------------------------------\n");

    if (fin <= (sal*5))//condi��o
    {
        printf("\nFinanciamento Concedido!\n");//S�ida de dados
        printf("\n-------------------------------------------\n");
    }
    else
   {
        printf("\nFinanciamento Negado!\n");//sa�da de dados
        printf("\n-------------------------------------------\n");
   }
}
