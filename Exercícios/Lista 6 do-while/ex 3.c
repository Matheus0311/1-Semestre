//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
int main()//In�cio da fun��o int main ().
{
    setlocale(LC_ALL, "Portuguese");
    float c, f;
    f = 50;
    printf("  Tabela de graus Fahrenheit para Cent�grados");
    printf("\n  Fahrenheit                      Cent�grados");
    while (f <= 70)
    {
        c = (float) 5/9 *(f-32);
        printf("\n     %g�                              %1.f�C", f, c);
        f++;
    }
}
