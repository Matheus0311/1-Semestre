#include <stdio.h>
main ()


{
    int horas, minutos, segundos, inicio;

    printf("\nQuantos segundos se passaram desde o inicio do dia?\n");
    printf("\nDigite que horas sao agora: ");
    scanf("%d", &horas);

    printf("\nDigite os minutos de agora: ");
    scanf("%d", &minutos);

    printf("\nDigite os segundos de agora: ");
    scanf("%d", &segundos);

    inicio = horas*3600 + minutos*60 + segundos;

    printf("\nO total de segundos passados desde o inicio do dia e de: %d\n\n\n", inicio);
}

