#include <stdio.h>//Biblioteca de função
#include <stdlib.h>//Biblioteca de função
#include <locale.h>//Biblioteca para adicionar acentuação da língua portuguesa
int main()
{
    float sal, fin;//declaração de variáveis
    setlocale(LC_ALL, "Portuguese");//comando para adicionar acentuação da língua portuguesa
    system("color 6");//função de mudança de cor do programa
    printf("\n-------------------------------------------\n");//separação por tabela de linhas para estética do programa
    printf("\nInforme o seu salário: ");//Entrada de dados
        scanf("%f", &sal);//leitura de dados
    printf("\n-------------------------------------------\n");
    printf("\nInforme o valor do financiamento: ");//Entrada de dados
        scanf("%f", &fin);//leitura de dados
    printf("\n-------------------------------------------\n");

    if (fin <= (sal*5))//condição
    {
        printf("\nFinanciamento Concedido!\n");//Sáida de dados
        printf("\n-------------------------------------------\n");
    }
    else
   {
        printf("\nFinanciamento Negado!\n");//saída de dados
        printf("\n-------------------------------------------\n");
   }
}
