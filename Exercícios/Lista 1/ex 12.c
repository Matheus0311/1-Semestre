#include <stdio.h>
void main ()
{
    float not1, not2, not3, mediap;
    printf("\nPrograma para calcular a media ponderada onde a primeira nota tem peso = 2, a segunda tem peso = 3 e a terceira tem peso = 5\n");
    printf("\nDigite a primeira nota: ");
    scanf("%f", &not1);

    printf("\nDigite a segunda nota: ");
    scanf("%f",&not2);

    printf("\nDigite a terceira nota: ");
    scanf("%f", &not3);

    mediap = (not1*2 + not2*3 + not3*5)/10;

    printf("\nA media ponderada e de: %f\n\n\n", mediap);

}
