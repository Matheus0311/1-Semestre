#include <stdio.h>
#include <locale.h>//biblioteca
#include <stdlib.h>
int main ()
{
    float n1, n2, n3, n4, media;
    setlocale(LC_ALL, "Portuguese");//inclusão da biblioteca locale.h, para acentuação da língua portuguesa.

    printf("NOTA >= 6 O ALUNO ESTÁ APROVADO;");
    printf("\nNOTA <6 E >=3 O ALUNO ESTÁ DE EXAME;");
    printf("\nNOTA <3 O ALUNO ESTÁ REPROVADO.");

    printf("\n\nDigite a primeira nota: ");
        scanf("%g", &n1);
    printf("\n\nDigite a segunda nota: ");
        scanf("%g", &n2);
    printf("\n\nDigite a terceira nota: ");
        scanf("%g", &n3);
    printf("\n\nDigite a quarta nota: ");
        scanf("%g", &n4);

        media = (n1+n2+n3+n4)/4;

    if (media >= 6)
        printf("\nSua média é %g. Você foi aprovado, parabéns!\n\n", media);
    else if ( media <6 && media >= 3)
        printf("\nSua média é %g. Você está de exame, estude para as provas!\n\n", media);
    else if (media < 3)
        printf("\nSua média é %g. Você não atingiu a média necessária e está reprovado.\n\n", media);
    system("pause");
return 0;}

