#include <stdio.h>
void main()
{
    float lamp, pot, larg, comp, m2, potm2;
    printf("\nPrograma para calcular a quantidade de lampadas para iluminar um comodo\n");
    printf("\nInforme a potencia da lampada: ");
    scanf("%f", &pot);

    printf("\nInforme a largura do comodo: ");
    scanf("%f", &larg);

    printf("\nInforme o comprimento do comodo: ");
    scanf("%f", &comp);

    potm2 = 20;
    m2 = larg*comp;
    lamp = (m2*potm2)/pot;

    printf("\nEssa e a quantidade de lampadas por metro quadrado: %f\n\n\n", lamp);
}
