#include <stdio.h>
#include <locale.h>//biblioteca
#include <stdlib.h>
int main ()
{
    int n1;
    setlocale(LC_ALL, "Portuguese");//inclusão da biblioteca locale.h, para acentuação da língua portuguesa.

    printf("Digite qualquer número inteiro: ");
        scanf("%d", &n1);

    if (n1%3==0)
        printf("\nÉ divisível por 3!");
    else
        printf("\nNão é divisível por 3!\n\n");

}
