#include <stdio.h>
#include <locale.h>//biblioteca
#include <stdlib.h>
int main()
{
    int A, B, C;
    setlocale(LC_ALL, "Portuguese");//inclusão da biblioteca locale.h, para acentuação da língua portuguesa.

printf("Digite um número inteiro: ");
        scanf("%d", &A);
    printf("\nDigite outro número inteiro: ");
        scanf("%d", &B);
    printf("\nDigite outro número inteiro: ");
        scanf("%d", &C);

    if  (A>B && A<C || A>C && A<B)
        printf("\n%d é o número intermediário de %d, %d e %d!\n\n", A, A, B, C);

    else
    {
        if (B>A && B<C || B<A && B>C)
        printf("\n%d é o número intermediário de %d, %d e %d!\n\n", B, A, B, C);

    else
        printf("\n%d é o número intermediário de %d, %d e %d!\n\n", C, A, B, C);
    }
}
