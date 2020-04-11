#include <stdio.h>//biblioteca
#include <locale.h>//biblioteca
int main ()
{
    float raio, altura, volume;
    setlocale(LC_ALL, "Portuguese");//inclusão da biblioteca locale.h, para acentuação da língua portuguesa.

    printf("\nPrograma que lê o raio e a altura de uma lata de óleo, calcula e apresenta o seu volume.\n");//nome do programa

    printf("\nInforme a altura da lata de óleo: ");
        scanf("%f", &altura);//leitura da altura

    printf("\nInforme o raio: ");
        scanf("%f", &raio);//leitura do raio

    volume = 3.14*(raio*raio) * altura;//cálculo

    printf("\nEsse é o seu volume: %g\n\n\n", volume);//resultado
}
