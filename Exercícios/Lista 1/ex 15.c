#include <stdio.h>
int main()
{
    int seg, segundos, minutos, horas;
    printf("\nPrograma para receber valor em segundos e mostrar em horas, minutos e segundos\n");
    printf("\nDigite a quantidae de segundos e te direi o tempo em horas, minutos e segundos, duvida?\n");
    printf("\nValor em segundos: ");
        scanf("%d", &seg);

    (horas = seg/3600);
    (minutos = (seg - (3600*horas))/60);
    (segundos = (seg - (3600*horas)- (minutos*60)));

    printf("\nEsse e o seu tempo: %dh:%dm:%ds: \n\n\n", horas, minutos, segundos);
}
