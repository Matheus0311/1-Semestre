#include <stdio.h>
#include <locale.h>
void main()
{
int n;
setlocale(LC_ALL, "Portuguese");
do{
    printf("\n Digite um n�mero positivo: ");
        scanf("%d", &n);
  } while( n <= 0 );
        printf("\n � um n�mero positivo\n");
}
