#include <stdio.h>
void main()
{
    float raio, pi, area;
    printf("\nPrograma para descobrir area de um circulo com o raio\n");
    printf ("\nDigite o raio para conseguirmos achar a area do circulo: \n");
    scanf("%f", &raio);
     pi = 3.14159265358;
     area = pi * raio*raio;

     printf ("\nEssa e a area do circulo: %f\n\n\n", area);

}
