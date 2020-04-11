#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, resto;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite um numero: ");
    scanf("%d", &b);

    (resto = a%b);
    if (resto = 0)
        printf("%d e divisivel por %d", a, b);
    else
        printf("%d nao e divisivel por %d", a, b);

}
