#include <stdio.h>
#include <locale.h>//biblioteca
#include <stdlib.h>
int main()
{
    int n1, n2, n3;
    setlocale(LC_ALL, "Portuguese");//inclus�o da biblioteca locale.h, para acentua��o da l�ngua portuguesa.

    printf("Digite um n�mero inteiro: ");
        scanf("%d", &n1);
    printf("\nDigite outro n�mero inteiro: ");
        scanf("%d", &n2);
    printf("\nDigite outro n�mero inteiro: ");
        scanf("%d", &n3);


    if (n1<n2 && n1<n3)
        printf("\n%d � o menor n�mero!\n", n1);
    else
    {
        if (n2<n3)
            printf("\n%d � o menor n�mero!\n", n2);
        else
            printf("\n%d � o menor n�mero!\n", n3);
    }
    system("pause");
return 0;}

