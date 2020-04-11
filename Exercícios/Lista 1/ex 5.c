#include <stdio.h>
void main()
{
    float not1, not2, media, mf;

    printf("\nPrograma para calcular a media\n");
    printf("\nDigite dois numeros reais que direi sua media, duivida?\n");
    printf("\nPrimeiro numero: ");
    scanf("%f", &not1);
    printf("\nSegundo numero: ");
    scanf("%f", &not2);

    media = not1+not2;
    mf = media/2;

    printf("\nSua media e essa, meu consagrado: %f\n\n\n", mf);
}
