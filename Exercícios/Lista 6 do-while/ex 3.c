//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
int main()//Início da função int main ().
{
    setlocale(LC_ALL, "Portuguese");
    float c, f;
    f = 50;
    printf("  Tabela de graus Fahrenheit para Centígrados");
    printf("\n  Fahrenheit                      Centígrados");
    while (f <= 70)
    {
        c = (float) 5/9 *(f-32);
        printf("\n     %g°                              %1.f°C", f, c);
        f++;
    }
}
