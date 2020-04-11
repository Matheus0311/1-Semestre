#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
    int qtd, codigo;
    float valor_pagar;
    setlocale(LC_ALL, "Portuguese");
    system("color 4E");

    printf("\nOpções do cardápio                  Valor\n");
    printf("\n ------------------------------------------\n");
    printf("\n| 100 - Cachorro quente   |         R$9,50 |");
    printf("\n| 101 - Bauru             |         RS8,50 |");
    printf("\n| 102 - Hambúrguer        |         R$7,00 |");
    printf("\n| 103 - Cheeseburguer     |         R$8,00 |");
    printf("\n| 104 - Refrigerante      |         R$5,50 |\n");
    printf("\n ------------------------------------------\n");
    printf("\nInforme o código do pedido: ");
        scanf("%d", &codigo);
    if (codigo == 100 || codigo == 101 || codigo == 102 || codigo == 103 || codigo == 104)
    {
        printf("\nInforme a quantidade: ");
            scanf("%d", &qtd);

        switch (codigo)
        {
            case 100:
                valor_pagar = qtd * 9.50;
                break;
            case 101:
                valor_pagar = qtd * 8.50;
                break;
            case 102:
                valor_pagar = qtd * 7.00;
                break;
            case 103:
                valor_pagar = qtd * 8.00;
                break;
            case 104:
                valor_pagar = qtd * 5.50;
                break;
            default:
                printf("\nCódigo incorreto\n");
                printf("\n------------------------------------------\n");
   }

    printf("\nValor a pagar = R$%.2f\n", valor_pagar);
    printf("\n------------------------------------------\n");

    }
    else
    {
        printf("\nCódigo Inválido!\n");
        printf("\n------------------------------------------\n");
    }
}
