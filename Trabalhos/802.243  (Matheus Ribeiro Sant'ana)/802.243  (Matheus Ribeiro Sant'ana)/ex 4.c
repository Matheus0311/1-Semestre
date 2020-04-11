#include <stdio.h>//Biblioteca de função
#include <stdlib.h>//Biblioteca de função
#include <locale.h>//Biblioteca para adicionar acentuação da língua portuguesa
int main()
{
    float atual, mini, max, med;//declaração de variáveis
    setlocale(LC_ALL, "Portuguese");//comando para adicionar acentuação da língua portuguesa
    system("color F5");//função de mudança de cor do programa

    printf("\n------------------------------------------\n");//separação por tabela de linhas para estética do programa
    printf("\nInforme a quantidade atual do estoque: ");//Entrada de dados
        scanf("%f", &atual);//leitura de dados
    printf("\nInforme a quantidade miníma do estoque: ");//Entrada de dados
        scanf("%f", &mini);//leitura de dados
    printf("\nInforme a quantidade máxima do estoque: ");//Entrada de dados
        scanf("%f", &max);//leitura de dados
    printf("\n------------------------------------------\n");

        med = (max + mini)/2;//cálculo

    if (atual >= med)//condição
    {
        printf("\nNão efetuar compra!\n");//saída de dados
        printf("\n------------------------------------------\n");
    }

    else
    {
        printf("\nEfetuar compra!\n");//saída de dados
        printf("\n------------------------------------------\n");
    }
}
