#include <stdio.h>
void main()

{
    float num1, num2, produto;

printf("\nPrograma para calcular o produto de dois numeros reais\n ");
printf("\nDigite dois numeros reais e eu te direi o seu produto, duvida? \n");
printf("\nPrimeiro numero: ");
scanf("%f", &num1);
printf("\nAgora o outro numero: ");
scanf("%f", &num2);

produto = num1*num2;

printf("\nEsse e o produto da multiplicacao, meu consagrado: %f\n\n\n\n", produto);


}
