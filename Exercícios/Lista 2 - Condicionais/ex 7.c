#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int n1, n2;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite um n�mero inteiro: ");
        scanf("%d", &n1);
    printf("\nDigite outro n�mero inteiro: ");
        scanf("%d", &n2);

    if (n1%n2==0)
        printf("%d � m�ltiplo de %d", n1, n2);
    else
        printf("%d n�o � m�ltiplo de %d", n1, n2);
}
