#include <stdio.h>
#include <locale.h>//biblioteca
#include <stdlib.h>
int main ()
{
    int n1, n2;
    setlocale(LC_ALL, "Portuguese");//inclusão da biblioteca locale.h, para acentuação da língua portuguesa.

    printf("Digite um número inteiro: ");
        scanf("%d", &n1);
    printf("\nDigite outro número inteiro: ");
        scanf("%d", &n2);


    if (n1==n2)
        printf("\nSão iguais!\n\n\n");

    else if (n1>n2)
        printf("\n\nSão diferentes, %d é o maior!\n\n", n1);

    else if (n2>n1)
        printf("\n\nSão diferentes, %d é o maior!\n\n", n2);

}
