//Created by: Matheus Ri1beiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
#include <conio.h> //Biblioteca para utiliza��o de fun��es como: getche
int main()//In�cio da fun��o int main ().
{
    setlocale(LC_ALL, "Portuguese");
    int soma, n, i;
    soma=0;
    i=1;
    printf("Informe um n�mero: ");
    scanf("%d", &n);
    while (i <= n/2)
    {
        if (n%i==0)
            soma = soma + i;
        i++;
    }
    if (soma == n)
        printf("\nN�mero perfeito!\n\n");
    else
        printf("\nO n�mero n�o � perfeito!\n\n");
}
