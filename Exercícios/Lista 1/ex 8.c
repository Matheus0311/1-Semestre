#include <stdio.h>
void main()

{
   float celsius, Fa;

   printf("\nPrograma para tranformar celsius em Fahrenheit\n");
   printf("\nValor em graus Celsius: ");
   scanf("%f", &celsius);

   Fa = celsius * 1.8 + 32;

   printf("\nEsse e o resultado em Fahrenheit: %f\n\n\n", Fa);



}
