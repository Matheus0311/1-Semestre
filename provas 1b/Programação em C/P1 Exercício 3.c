#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
int main()//In�cio da fun��o int main ().
{
    setlocale(LC_ALL, "Portuguese"); //LC_ALL Faz refer�ncia � todos os aspectos de localiza��o.
    int N;//Declara��o de vari�veis
    float N1, i=0, div=1, sub=0, soma=0;//Declara��o de vari�veis
    printf("Informe um numero: ");//Entrada de valores
        scanf("%d", &N);//Leitura de valores
    N1=N;//igualando vari�veis
    while(i<N1)//fun��o enquanto
    {
        soma=soma+((N1-sub)/div);//o n�mero informado ser� subtra�do pela incrementa��o de sub e dividido pela incrementa��o de div.
        i++;
        div++;
        sub++;
    }
    printf("\nResultado: %g\n\n", soma);//sa�da de valores.
}
}
