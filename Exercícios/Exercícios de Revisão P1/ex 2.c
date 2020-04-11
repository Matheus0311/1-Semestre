#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float tempo, sal, reajuste;
    setlocale(LC_ALL, "Portuguese");
    system("color 5f");

    printf("\n----------------------------------------------------------\n");
    printf("Tempo em anos trabalhados na empresa: ");
        scanf("%f", &tempo);
    printf("\n----------------------------------------------------------\n");
    printf("Salário recebido pelo trabalho: ");
        scanf("%f", &sal);
    printf("\n----------------------------------------------------------\n");

    if (tempo < 10)
    {
        reajuste = sal + (sal*0.08);
        printf("\nSeu reajuste é de 8%% e seu salário é de %.2fR$\n", reajuste);
        printf("\n----------------------------------------------------------\n");
    }
    else
    {
        reajuste = sal + (sal*0.10);
        printf("\nSeu reajuste é de 10%% e o seu salário é de %.2fR$\n", reajuste);
        printf("\n----------------------------------------------------------\n");
    }
}
