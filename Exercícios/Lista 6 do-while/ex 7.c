/*A s�rie de Fibonacci � expressa da seguinte forma: 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
Fa�a um programa que calcule a s�rie de Fibonacci, para N termos, onde N deve ser lido.*/
#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
int main()//In�cio da fun��o int main ().
{
    setlocale(LC_ALL, "Portuguese");
    int n, ult_termo, termo_ant, i, aux;
    termo_ant = 0;
    ult_termo = 1;
    i = 0;
    printf("Informe o n�mero de termos na s�rie de Fibonacci: ");
        scanf("%d", &n);
    printf("\nSerie de Fibonacci com %d termos: ", n);
    for (i=0;i<n;)
    {
        printf("%d  ", ult_termo);

        aux = ult_termo; //Armazena o ultimo termo em uma vari�vel auxiliar
        ult_termo = ult_termo + termo_ant; //Calcula o pr�ximo termo (soma dos dois �ltimo termos)
        termo_ant = aux; //Atribui o �ltimo termo j� escrito na tela para a vari�vel termo_ant

        i++; //Incrementa a vari�vel i
    }
}
