#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float RGM, N1, N2, N3, ME, MA;
    setlocale(LC_ALL, "Portuguese");

    printf("Informe seu número de identificação ou registro de matrícula (RGM) sem pontos: ");
        scanf("%g", &RGM);
    printf("\nInforme a sua primeira nota: ");
        scanf("%f", &N1);
    printf("\nInforme a sua segunda nota: ");
        scanf("%f", &N2);
    printf("\nInforme a sua terceira nota: ");
        scanf("%f", &N3);
    printf("\nInforme a média dos exercícios: ");
        scanf("%f", &ME);

    MA = (N1 + (N2 * 2) + (N3 * 3) + ME ) / 7;

    if (MA >= 9)
        printf( "\n%g o seu conceito é A!\n", RGM);
    else if (MA < 9 && MA >= 7.5)
        printf("\n%g o seu conceito é B!\n", RGM);
    else if (MA < 7.5 && MA >= 6)
        printf("\n%g o seu conceito é C!\n", RGM);
    else if (MA <6 && MA >= 4)
        printf("\n%g o seu conceito é D!\n", RGM);
    else if (MA < 4)
        printf("\n%g o seu conceito é E!\n", RGM);
}
