//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
#include <conio.h> //Biblioteca para utiliza��o de fun��es como: getche
int main()//In�cio da fun��o int main ().
{
    setlocale(LC_ALL, "Portuguese");//LC_ALL Faz refer�ncia � todos os aspectos de localiza��o.
    int n1=0, soma=0;//Declara��es de vari�veis do tipo inteiras.
    int i=0;//Iniciando i com 0;
    char V;//Declara��o de vari�vel do tipo caractere.
    do//In�cio da fun��o Do-While para o programa repetir quantas vezes o usu�rio informar.
    {
        system("color A");//Mudan�a de colora��o do programa.
        printf("______________________________________________________________________________________\n");
        printf("Programa que mostra a soma dos n primeiros n�meros pares.");//Apresenta��o do programa.
        printf("\n______________________________________________________________________________________\n");
        printf("Informe um n�mero qualquer: ");//Entrada de dados.
            scanf("%d", &n1);//Leitura de dados
        printf("______________________________________________________________________________________\n");
        while(i<=n1)//Enquanto i menor ou igual a n1 o programa ser� executado.
        {
            soma = soma + n1;//C�lculo
            i++;//Incrementando i + 1
        }
        system("color D");
        printf("\nA soma dos %d n�meros pares �: %d", n1, soma);//Sa�da de dados.
        printf("\n______________________________________________________________________________________\n\n\n\n");
        system("pause");//Pausa no programa.
        system("cls");//Limpar a tela.
        system("color 06");//Mudan�a de colora��o do programa.
        printf("Deseja reiniciar a opera��o? (S/N)\n-----> ");//Obtendo confirma��o do usu�rio para repetir o programa.
            V = getche();//Leitura da confirma��o.
        if(V == 's' || V == 'S')//Condi��o para que se repita.
        {
            system("cls");//Limpa tela.
            n1=0, soma=0, i=0;//Reiniciando as vari�veis.
        }
        else//Condi��o para que o programa n�o se repita.
        {
            system("cls");//Limpa tela
            system("color 40");//Mudan�a de colora��o do programa
            printf(".\n.\n.\n.\n.\n.\n.\n.\n.\nFECHANDO PROGRAMA!\n\n\n\n\n\n");//Aviso.
            system("pause");//Pausa no programa
        }
    }while (V == 's' || V == 'S');//Condi��o para o "Do-While" repetir todo o programa enquanto os valores forem informados.
}
