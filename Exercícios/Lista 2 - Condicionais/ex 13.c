#include <stdio.h>
#include <locale.h>//biblioteca
#include <stdlib.h>
#include <conio.h>
int main()
{
    float altura, peso;
    char sexo;
    setlocale(LC_ALL, "Portuguese");//inclus�o da biblioteca locale.h, para acentua��o da l�ngua portuguesa.

    printf("Digite seu sexo: ('h' ou 'H' para homens e 'm' OU 'M' para mulheres): ");
        sexo = getche();
        printf("Digite seu sexo: ('h' ou 'H' para homens e 'm' OU 'M' para mulheres): ");
            sexo = getche();
        printf("\nDigite a sua altura: ");
            scanf("%f", &altura);

    if (sexo == ('h' || 'H') || sexo == ('m' || 'M' ))
        peso = ((72.7*altura) - 58);

    else
         if (sexo == 'm' || 'M')
            peso = ((62.1*altura) - 44.7);

        printf("\nO seu peso ideal �: %g KG\n", peso);
}
