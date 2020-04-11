#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
    int qtd, codigo;
    float valor_pagar;
    setlocale(LC_ALL, "Portuguese");

    printf("\nOpções de produto por código:");
    printf("\n1001");
    printf("\n1324");
    printf("\n6548");
    printf("\n5987");
    printf("\n7623");
    printf("\nInforme o código do pedido: ");
        scanf("%d", &codigo);
    printf("\nInforme a quantidade: ");
        scanf("%d", &qtd);

   switch (codigo)
   {
    case 1001:
        valor_pagar = qtd * 12.32;
        break;
    case 1324:
        valor_pagar = qtd * 16.45;
        break;
    case 6548:
        valor_pagar = qtd * 22.37;
        break;
    case 5987:
        valor_pagar = qtd * 25.32;
        break;
    case 7623:
        valor_pagar = qtd * 36.45;
        break;
    default:
        valor_pagar = 0;
   }
   printf("\nValor a pagar = R$%.2f\n", valor_pagar);
}
