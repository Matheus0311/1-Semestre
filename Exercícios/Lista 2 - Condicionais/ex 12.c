#include <stdio.h>
#include <locale.h>//biblioteca
#include <stdlib.h>
int main()
{
    int A, B, C;
    setlocale(LC_ALL, "Portuguese");//inclus�o da biblioteca locale.h, para acentua��o da l�ngua portuguesa.

printf("Digite um n�mero inteiro: ");
        scanf("%d", &A);
    printf("\nDigite outro n�mero inteiro: ");
        scanf("%d", &B);
    printf("\nDigite outro n�mero inteiro: ");
        scanf("%d", &C);

    if  (A>B && A<C || A>C && A<B)
        printf("\n%d � o n�mero intermedi�rio de %d, %d e %d!\n\n", A, A, B, C);

    else
    {
        if (B>A && B<C || B<A && B>C)
        printf("\n%d � o n�mero intermedi�rio de %d, %d e %d!\n\n", B, A, B, C);

    else
        printf("\n%d � o n�mero intermedi�rio de %d, %d e %d!\n\n", C, A, B, C);
    }
}
