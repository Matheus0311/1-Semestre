#include <stdio.h>
void main ()
{
    float q_latas, gasto, comp, larg, area, preco_lata, lata_litro, litro_pinta, lata_pinta;
    printf("\nEsse programa calcula quantas latas de tinta e o preco que ficara para pintar uma determinada area\n");

    printf("\nDigite o comprimento: ");
    scanf("%g", &comp);

    printf("\nDigite a largura: ");
    scanf("%g", &larg);

    preco_lata = 25.00;
    lata_litro = 3.6;
    litro_pinta = 13;
    area = comp*larg;
    q_latas = (lata_litro*area)/13;

    lata_pinta = 46.8;
    gasto = q_latas * preco_lata;

    printf("\nEsses sao o total de metros quadrados: %g, a quantidade de latas: %g e esse e o preco: %g\n\n\n", area, q_latas, gasto);

}
