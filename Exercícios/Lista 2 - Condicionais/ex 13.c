#include <stdio.h>
#include <locale.h>//biblioteca
#include <stdlib.h>
#include <conio.h>
int main()
{
    float altura, peso;
    char sexo;
    setlocale(LC_ALL, "Portuguese");//inclusão da biblioteca locale.h, para acentuação da língua portuguesa.

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

        printf("\nO seu peso ideal é: %g KG\n", peso);
}
