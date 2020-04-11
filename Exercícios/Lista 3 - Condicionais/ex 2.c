#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int idade;
    setlocale(LC_ALL, "Portuguese");

    printf("Informe a idade em anos: ");
    scanf("%d", &idade);

    if (idade <= 10)
            printf("\nA pessoa deverá pagar R$ 30,00\n");
    else if (idade >= 11 && idade <=29)
            printf("\nA pessoa deverá pagar R$ 60,00\n");
    else if (idade >= 30 && idade <= 45)
            printf("\nA pessoa deverá pagar R$ 120,00\n");
    else if (idade >= 46 && idade <=59)
            printf("\nA pessoa deverá pagar R$ 150,00\n");
    else if (idade >= 60)
            printf("\nA pessoa deverá pagar R$ 250,00\n");
    }
