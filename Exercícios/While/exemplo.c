#include <stdio.h>
void main()
{
int soma=0, cont=0, n;
do{
printf("\nEntre com um número: ");
scanf ("%d", &n);
soma = soma + n;
cont++;
} while (n != 0);
printf("\nA média dos valores é: %.2f", (float) soma/cont);
}
