//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
int main()//In�cio da fun��o int main ().
{
    int fat=1, num, i=1;
    setlocale(LC_ALL,"Portuguese");
    printf("Informe um n�mero: ");
        scanf("%d", &num);
    while (i<num)
    {
        fat = fat * i;
        i++;
    }
    printf("Esse � o fatorial: %d", fat);
}
