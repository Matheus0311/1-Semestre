#include <stdio.h>
void main()
{
    float FA, celsius;

    printf("\nPrograma para transformar Fahrenheit em Celsius\n");
    printf("\nValor em Fahrenheit: ");
    scanf("%f", &FA);

    celsius = (FA-32)/1.8;

    printf("\nEsse e o resultado em Celsius: %f\n\n\n", celsius);
}
