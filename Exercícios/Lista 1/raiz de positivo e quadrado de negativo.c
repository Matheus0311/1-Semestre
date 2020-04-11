#include <stdio.h>
#include <math.h>
int main ()
{
    float n;

    printf("Digite um numero: ");
    scanf("%g", &n);

    if (n >= 0)
        printf("\nRaiz quadrada: %g\n", sqrt(n));
    else
        printf("\nQuadrado: %g", n*n);
}
