#include <stdio.h>
#include <locale.h>//biblioteca
#include <stdlib.h>
int main()
{
    int n1, n2, n3;
    setlocale(LC_ALL, "Portuguese");//inclusão da biblioteca locale.h, para acentuação da língua portuguesa.

    printf("Digite um número inteiro: ");
        scanf("%d", &n1);
    printf("\nDigite outro número inteiro: ");
        scanf("%d", &n2);
    printf("\nDigite outro número inteiro: ");
        scanf("%d", &n3);


    if (n1<n2 && n1<n3)
        printf("\n%d é o menor número!\n", n1);
    else
    {
        if (n2<n3)
            printf("\n%d é o menor número!\n", n2);
        else
            printf("\n%d é o menor número!\n", n3);
    }
    system("pause");
return 0;}

