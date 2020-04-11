/* Descrição do Programa: Apresenta exemplo de uso de scanf */
#include <stdio.h>
void main ()
{
int num1, num2, soma;
printf("Programa para ilustrar a funcao scanf \n");
printf("\nEntre com um numero inteiro: ");
scanf("%d", &num1);
printf("\nEntre com outro numero inteiro: ");
scanf("%d", &num2);
soma = num1 + num2;
printf("\nA soma destes numeros vale: %d\n\n\n\n", soma);
}
