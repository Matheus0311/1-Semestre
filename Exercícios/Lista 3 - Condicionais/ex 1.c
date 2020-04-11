#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int idade;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite a idade em anos do nadador: ");
    scanf("%d", &idade);

    if (idade < 5)
         printf("\nNadador não se encaixa em nenhuma categoria!\n");
    else if (idade >= 5 && idade <= 7)
        printf("\nNadador se encaixa na categoria Infantil A!\n");
    else if (idade >= 8 && idade <= 10)
        printf("\nNadador se encaixa na categoria Infantil B!\n");
    else if (idade >= 11 && idade <= 13)
        printf("\nNadador se encaixa na categoria Juvenil A!\n");
    else if (idade >= 14 && idade <= 17)
        printf("\nNadador se encaixa na categoria Juvenil B!\n");
    else if (idade > 17)
        printf("\nNadador se encaixa na categoria Adulto!\n");
}
