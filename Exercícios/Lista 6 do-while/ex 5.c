//Created by: Matheus Ri1beiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
int main()//In�cio da fun��o int main ().
{
    setlocale(LC_ALL, "Portuguese");
    int n, i=2, primo=1;
    printf("Informe um n�mero: ");
        scanf("%d", &n);
    while (i <= n/2 && primo ==1)
    {
        if (n%i==0)
            primo = 0;
            i++;
    }
    if (primo == 1)
        printf("\nN�mero primo\n");
    else
        printf("\nN�mero n�o primo\n");
}
