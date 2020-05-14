//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
#include <conio.h> //Biblioteca para utiliza��o de fun��es como: getche
int main()//In�cio da fun��o int main ().
{
    setlocale(LC_ALL, "Portuguese");//LC_ALL Faz refer�ncia � todos os aspectos de localiza��o.
    int N=1, soma=0, i=1, resto=0;
    char V;//Declara��o de vari�vel do tipo caractere.
    do//In�cio da fun��o Do-While para o programa repetir quantas vezes o usu�rio informar.
    {   system("color A");//Mudan�a de colora��o do programa.
        printf("______________________________________________________________________________________");
        printf("\nPrograma que mostra a soma do n�meros m�ltiplos de 5.");//Apresenta��o do programa.
        printf("\n______________________________________________________________________________________");
        printf("\nInforme n�meros aleat�rios. 0 - sair\n");
        printf("______________________________________________________________________________________\n\n");
        while (N!=0)//Enquanto o n�mero for maior que 0.
        {
            printf("Informe o %d� n�mero: ", i);//Entrada de dados.
                scanf("%d", &N);//Leitura de dados.
            i++;//Acr�scimo de mais 1 � vari�vel contador.
            resto=N%5;//C�lculo de resto.
            if(resto==0)//Condi��o.
            {
                soma = soma + N;//C�lculo.
            }
        }
        system("color D");//Mudan�a de cor do programa.
        printf("\nEssa � a soma dos m�ltiplos de 5: %d\n\n", soma);//Sa�da de dados.
        system("pause");//Pausa no programa.
        system("cls");//Limpar a tela.
        system("color 06");//Mudan�a de colora��o do programa.
        printf("Deseja reiniciar a opera��o? (S/N)\n-----> ");//Obtendo confirma��o do usu�rio para repetir o programa.
            V = getche();//Leitura da confirma��o.
        if(V == 's' || V == 'S')//Condi��o para que se repita.
        {
            system("cls");//Limpa tela.
            N=1, soma=0, i=1, resto=0;//Reiniciando as vari�veis.
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
