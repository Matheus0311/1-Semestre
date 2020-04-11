#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float sal, fin;
    setlocale(LC_ALL, "Portuguese");
    system("color 4f");
    printf("\n-------------------------------------------\n");
    printf("\nInforme o seu salário: ");
        scanf("%f", &sal);
    printf("\n-------------------------------------------\n");
    printf("\nInforme o valor do financiamento: ");
        scanf("%f", &fin);
    printf("\n-------------------------------------------\n");

    if (fin <= (sal*5))
    {
        printf("\nFincanciamento Concedido!\n");
        printf("\n-------------------------------------------\n");
    }
    else
   {
        printf("\nFinanciamento Negado!\n");
        printf("\n-------------------------------------------\n");
   }
}
