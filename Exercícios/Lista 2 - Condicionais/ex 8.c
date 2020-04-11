#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float n1, n2, n3, n4, media;
    setlocale(LC_ALL, "Portuguese");//inclusão da biblioteca locale.h, para acentuação da língua portuguesa.

    printf("Digite a primeira nota: ");
        scanf("%g", &n1);
    printf("\n\nDigite a segunda nota: ");
        scanf("%g", &n2);
    printf("\n\nDigite a terceira nota: ");
        scanf("%g", &n3);
    printf("\n\nDigite a quarta nota: ");
        scanf("%g", &n4);

        media = (n1+n2+n3+n4)/4;

    if (media >= 6)
        printf("\nEssa foi a sua nota: %g. Você foi aprovado!", media);
    else
        printf("\nEssa foi a sua nota: %g. Você foi reprovado!", media);
}
