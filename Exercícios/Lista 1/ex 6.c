#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    float a, b, c, media, soma;
    setlocale (LC_ALL, "Portuguese");
    printf ("Informe o primeiro n�mero: ");
        scanf ("%f", &a);
    printf ("Informe o segundo n�mero: ");
        scanf ("%f", &b);
    printf ("Informe o terceiro n�mero: ");
        scanf ("%f", &c);
    soma = a + b + c;
    media = soma/3;
    printf("\nEssa � a soma: %g", soma);
    printf("\nEssa � a m�dia: %g", media);

}
