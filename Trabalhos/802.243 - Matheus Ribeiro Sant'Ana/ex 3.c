//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
#include <conio.h> //Biblioteca para utilização de funções como: getche
int main()//Início da função int main ().
{
    setlocale(LC_ALL, "Portuguese");//LC_ALL Faz referência à todos os aspectos de localização.
    int n1=0, soma=0;//Declarações de variáveis do tipo inteiras.
    int i=0;//Iniciando i com 0;
    char V;//Declaração de variável do tipo caractere.
    do//Início da função Do-While para o programa repetir quantas vezes o usuário informar.
    {
        system("color A");//Mudança de coloração do programa.
        printf("______________________________________________________________________________________\n");
        printf("Programa que mostra a soma dos n primeiros números pares.");//Apresentação do programa.
        printf("\n______________________________________________________________________________________\n");
        printf("Informe um número qualquer: ");//Entrada de dados.
            scanf("%d", &n1);//Leitura de dados
        printf("______________________________________________________________________________________\n");
        while(i<=n1)//Enquanto i menor ou igual a n1 o programa será executado.
        {
            soma = soma + n1;//Cálculo
            i++;//Incrementando i + 1
        }
        system("color D");
        printf("\nA soma dos %d números pares é: %d", n1, soma);//Saída de dados.
        printf("\n______________________________________________________________________________________\n\n\n\n");
        system("pause");//Pausa no programa.
        system("cls");//Limpar a tela.
        system("color 06");//Mudança de coloração do programa.
        printf("Deseja reiniciar a operação? (S/N)\n-----> ");//Obtendo confirmação do usuário para repetir o programa.
            V = getche();//Leitura da confirmação.
        if(V == 's' || V == 'S')//Condição para que se repita.
        {
            system("cls");//Limpa tela.
            n1=0, soma=0, i=0;//Reiniciando as variáveis.
        }
        else//Condição para que o programa não se repita.
        {
            system("cls");//Limpa tela
            system("color 40");//Mudança de coloração do programa
            printf(".\n.\n.\n.\n.\n.\n.\n.\n.\nFECHANDO PROGRAMA!\n\n\n\n\n\n");//Aviso.
            system("pause");//Pausa no programa
        }
    }while (V == 's' || V == 'S');//Condição para o "Do-While" repetir todo o programa enquanto os valores forem informados.
}
