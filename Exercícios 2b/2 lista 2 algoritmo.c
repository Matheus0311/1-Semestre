#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5
int main ()
{
    setlocale(LC_ALL, "Portuguese");
   int vet[TAM];
   int p, i;
   printf("Informe 100 numeros: \n");
   for (i=0; i<TAM; i++)
   {
       printf("Informe o %d� numero: ", i+1);
        scanf("%d", &vet[i]);
   }
   p=0;
   printf("A posi��o que o 30 se encontra � (s�o) a(s): ");
   for (i=0;i<TAM; i++)
   {
       if (vet[i]==30)
       {
           p = i+1;
           printf("%d�   ", p);
           p++;
        }
   }
}
