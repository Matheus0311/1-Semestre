#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main()
{
    float n1, n2, divi;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe o primeiro número: ");
        scanf("%f", &n1);
    do{
        printf("\nInforme o segundo valor: ");
            scanf("%f", &n2);
    }while (n2==0);


    divi = n1/n2;

    printf("\nO resultado é: %g", divi);

}
