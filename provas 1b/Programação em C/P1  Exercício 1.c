#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
int main()//In�cio da fun��o int main ().
{
    setlocale(LC_ALL, "Portuguese"); //LC_ALL Faz refer�ncia � todos os aspectos de localiza��o.
    int dia_pag, i=0;//Declara��o de vari�veis
    float valor, valor_final;//Declara��o de vari�veis
    printf("O dia de vencimento � at� o dia 10 de cada m�s.\n");//Pois na quest�o havia essa condi��o.
    printf("\nInforme o valor da presta��o: ");//Entrada de valores
        scanf("%f", &valor);//Leitura de valores
    printf("Informe o dia do pagamento: ");//Entrada de valores
        scanf("%d", &dia_pag);//Leitura de valores
    if (dia_pag>0 && dia_pag<=10)//Condi��o
    {
        valor_final=((valor) - (valor*0.1));//c�lcula o desconto
        printf("\nO valor a pagar ser� de: R$%.2f", valor_final);//Sa�da de valores
        printf("\nO desconto � de 10%% pois foi pago antes do dia  10 e est� em dia.\n\n");
    }
    else
    {
        if(dia_pag>10 && dia_pag<=15)//condi��o
        {
            printf("\nO valor a pagar ser� de: R$%.2f", valor);
            printf("\nN�o houve desconto e nem multa pois foi em menos de 5 dias de atraso.\n\n");
        }
        else
        {
            if(dia_pag>15 && dia_pag<32)
            {
                dia_pag=dia_pag-15;
                while (i<=dia_pag)
                {
                    valor_final=((valor)+(valor*0.02));//Incrementa 2% de multa ao dia
                    i++;
                }
                printf("\nO valor a pagar ser� de: R$%.2f", valor_final);
                printf("\n\nHouve multa de 2%% ao dia pois o pagamento foi feito ap�s os 5 dias de atraso toler�veis.\n\n");
            }
        }
    }
    return(0);
    }
