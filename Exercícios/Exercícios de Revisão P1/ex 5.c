#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float pesoa, pesob;
    int planeta;
    setlocale(LC_ALL, "Portuguese");
    system("color 09");

    printf("\n------------------------------------------------\n");
    printf(" N°    |    Gravidade       |          Planeta\n       |     Relativa       |");
    printf("\n------------------------------------------------\n");
    printf(" 1     |       0,37         |          Mercúrio\n");
    printf(" 2     |       0,88         |          Vênus\n");
    printf(" 3     |       0,38         |          Marte\n");
    printf(" 4     |       2,64         |          Júpiter\n");
    printf(" 5     |       1,15         |          Saturno\n");
    printf(" 6     |       1,17         |          Urano\n");
    printf("------------------------------------------------\n");

    printf("\nPeso de um objeto na terra em KG: ");
        scanf("%f", &pesoa);
    printf("\n------------------------------------------------\n");
    printf("\nInforme o número correspondente ao planeta: ");
        scanf("%d", &planeta);
    printf("\n------------------------------------------------\n");

     switch(planeta)
    {
        case 1:
                pesob = (pesoa * 0.37);
                printf("Peso em Mercúrio = %gKG", pesob);
                printf("\n------------------------------------------------\n");
                break;
        case 2:
                pesob = (pesoa * 0.88);
                printf("Peso em Vênus = %gKG", pesob);
                printf("\n------------------------------------------------\n");
                break;
        case 3:
                pesob = (pesoa * 0.38);
                printf("Peso em Marte = %gKG", pesob);
                printf("\n------------------------------------------------\n");
                break;
        case 4:
                pesob = (pesoa * 2.64);
                printf("Peso em Júpiter = %gKG", pesob);
                printf("\n------------------------------------------------\n");
                break;
        case 5:
                pesob = (pesoa * 1.15);
                printf("Peso em Saturno = %gKG", pesob);
                printf("\n------------------------------------------------\n");
                break;
        case 6:
                pesob = (pesoa * 1.17);
                printf("Peso em Urano = %gKG", pesob);
                printf("\n------------------------------------------------\n");
                break;
        default:
                printf("Planeta inválido");
                printf("\n------------------------------------------------\n");
                break;
    }
}
