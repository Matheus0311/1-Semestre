#include <stdio.h>//Biblioteca de função
#include <stdlib.h>//Biblioteca de função
#include <locale.h>//Biblioteca para adicionar acentuação da língua portuguesa
int main()
{
    float tempo, sal, reajuste;//declaração de variáveis
    setlocale(LC_ALL, "Portuguese");//comando para adicionar acentuação da língua portuguesa
    system("color 5f");//função de mudança de cor do programa

    printf("\n----------------------------------------------------------\n");//separação por tabela de linhas para estética do programa
    printf("Tempo em anos trabalhados na empresa: ");//Entrada de dados
        scanf("%f", &tempo);//leitura de dados
    printf("\n----------------------------------------------------------\n");
    printf("Salário recebido pelo trabalho: ");//Entrada de dados
        scanf("%f", &sal);//leitura de dados
    printf("\n----------------------------------------------------------\n");

    if (tempo < 10)//condição
    {
        reajuste = sal*1.08;//cálculo
        printf("\nSeu reajuste é de 8%% e seu salário é de %.2fR$\n", reajuste);//saída de dados
        printf("\n----------------------------------------------------------\n");
    }
    else
    {
        reajuste = sal*1.1;//cálculo
        printf("\nSeu reajuste é de 10%% e o seu salário é de %.2fR$\n", reajuste);//saída de dados
        printf("\n----------------------------------------------------------\n");
    }
}
