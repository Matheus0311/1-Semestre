#include <stdio.h>
 main()
{
    float gasto, garcom;
    printf("\nPrograma para calcular o gasto do cliente + 10% do garcom\n");
    printf("\nGasto do cliente: \n");
    scanf("%f", &gasto);

    garcom = gasto + gasto/10;

    printf("\nO total a pagar sera de: %f\n\n\n", garcom);

}
