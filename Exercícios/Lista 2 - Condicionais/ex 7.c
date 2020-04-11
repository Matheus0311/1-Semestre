#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int n1, n2;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite um número inteiro: ");
        scanf("%d", &n1);
    printf("\nDigite outro número inteiro: ");
        scanf("%d", &n2);

    if (n1%n2==0)
        printf("%d é múltiplo de %d", n1, n2);
    else
        printf("%d não é múltiplo de %d", n1, n2);
}
