#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float litros, valor;
    setlocale(LC_ALL, "Portuguese");
    system("color 2f");

    printf("\nValor da gasolina por litro");
    printf("\nR$ 4,30");
    printf("\n----------------------------------------------------------\n");
    printf(" Quantidade de litros        |         Desconto por litro\n");
    printf(" Até 20 litros               |                   4%%        \n");
    printf(" Acima de 20 litros          |                   6%%        ");
    printf("\n----------------------------------------------------------\n");

    printf("\nInforme a quantidade de litros vendidos: ");
        scanf("%f", &litros);
    printf("\n----------------------------------------------------------\n");

    if (litros <21)
    {
       valor = ((litros * 4.30) - (litros * 0.04));
       printf("\nValor a pagar = %.2fR$\n", valor);
       printf("\n----------------------------------------------------------\n");
    }
    else
    {
        valor = ((litros * 4.30)-(litros * 0.06));
        printf("\nValor a pagar = %.2fR$\n", valor);
        printf("\n----------------------------------------------------------\n");
    }
}
