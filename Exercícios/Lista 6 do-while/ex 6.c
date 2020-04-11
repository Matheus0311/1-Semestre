/*Created by: Matheus Ri1beiro Sant'Ana. RGM:802.243
Fa�a um programa que leia um n�mero inteiro positivo N.
Calcule e mostre o maior quadrado menor ou igual a N.
Por exemplo, se N for maior ou igual a 38, o menor quadrado � 36 (quadrado de 6).*/
#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
int main()//In�cio da fun��o int main ().
{
    setlocale(LC_ALL, "Portuguese");
    int n=0, i=0;
    printf("Informe um n�mero: ");
        scanf("%d", &n);
    while (i*i<= n)
    {
        i++;
    }
    i--;
        printf("\nEsse � o quadrado mais pr�ximo de %d: %d (quadrado de %d)\n\n", n, i*i, i);
}
