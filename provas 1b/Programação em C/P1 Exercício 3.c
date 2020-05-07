#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
int main()//Início da função int main ().
{
    setlocale(LC_ALL, "Portuguese"); //LC_ALL Faz referência à todos os aspectos de localização.
    int N;//Declaração de variáveis
    float N1, i=0, div=1, sub=0, soma=0;//Declaração de variáveis
    printf("Informe um numero: ");//Entrada de valores
        scanf("%d", &N);//Leitura de valores
    N1=N;//igualando variáveis
    while(i<N1)//função enquanto
    {
        soma=soma+((N1-sub)/div);//o número informado será subtraído pela incrementação de sub e dividido pela incrementação de div.
        i++;
        div++;
        sub++;
    }
    printf("\nResultado: %g\n\n", soma);//saída de valores.
}
}
