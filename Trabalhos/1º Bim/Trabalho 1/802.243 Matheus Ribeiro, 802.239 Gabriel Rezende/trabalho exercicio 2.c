#include <stdio.h>//biblioteca
#include <locale.h>//biblioteca
int main ()
{
    float peso_kg, valor;
    setlocale(LC_ALL, "Portuguese");//inclus�o da biblioteca locale.h, para acentua��o da l�ngua portuguesa.

    printf("\nPrograma que leia o peso do prato servido pelo cliente (em quilos), calcula e mostra o valor a pagar\n");
        printf("\nInforme o peso do prato: ");
        scanf("%f", &peso_kg);//leitura do peso do prato

        valor = peso_kg * 22.00;//c�lculo

    printf("\nO valor total que ser� pago � de: %.2f R$\n\n\n", valor);//resultado

}
