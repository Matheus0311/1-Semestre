#include <stdio.h>//biblioteca
#include <locale.h>//biblioteca
int main ()
{
    float raio, altura, volume;
    setlocale(LC_ALL, "Portuguese");//inclus�o da biblioteca locale.h, para acentua��o da l�ngua portuguesa.

    printf("\nPrograma que l� o raio e a altura de uma lata de �leo, calcula e apresenta o seu volume.\n");//nome do programa

    printf("\nInforme a altura da lata de �leo: ");
        scanf("%f", &altura);//leitura da altura

    printf("\nInforme o raio: ");
        scanf("%f", &raio);//leitura do raio

    volume = 3.14*(raio*raio) * altura;//c�lculo

    printf("\nEsse � o seu volume: %g\n\n\n", volume);//resultado
}
