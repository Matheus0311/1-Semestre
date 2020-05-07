#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
int main()//Início da função int main ().
{
    setlocale(LC_ALL, "Portuguese"); //LC_ALL Faz referência à todos os aspectos de localização.
    int dia_pag, i=0;//Declaração de variáveis
    float valor, valor_final;//Declaração de variáveis
    printf("O dia de vencimento é até o dia 10 de cada mês.\n");//Pois na questão havia essa condição.
    printf("\nInforme o valor da prestação: ");//Entrada de valores
        scanf("%f", &valor);//Leitura de valores
    printf("Informe o dia do pagamento: ");//Entrada de valores
        scanf("%d", &dia_pag);//Leitura de valores
    if (dia_pag>0 && dia_pag<=10)//Condição
    {
        valor_final=((valor) - (valor*0.1));//cálcula o desconto
        printf("\nO valor a pagar será de: R$%.2f", valor_final);//Saída de valores
        printf("\nO desconto é de 10%% pois foi pago antes do dia  10 e está em dia.\n\n");
    }
    else
    {
        if(dia_pag>10 && dia_pag<=15)//condição
        {
            printf("\nO valor a pagar será de: R$%.2f", valor);
            printf("\nNão houve desconto e nem multa pois foi em menos de 5 dias de atraso.\n\n");
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
                printf("\nO valor a pagar será de: R$%.2f", valor_final);
                printf("\n\nHouve multa de 2%% ao dia pois o pagamento foi feito após os 5 dias de atraso toleráveis.\n\n");
            }
        }
    }
    return(0);
    }
