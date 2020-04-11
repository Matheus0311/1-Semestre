#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    float a, b, c, media, soma;
    setlocale (LC_ALL, "Portuguese");
    printf ("Informe o primeiro número: ");
        scanf ("%f", &a);
    printf ("Informe o segundo número: ");
        scanf ("%f", &b);
    printf ("Informe o terceiro número: ");
        scanf ("%f", &c);
    soma = a + b + c;
    media = soma/3;
    printf("\nEssa é a soma: %g", soma);
    printf("\nEssa é a média: %g", media);

}
