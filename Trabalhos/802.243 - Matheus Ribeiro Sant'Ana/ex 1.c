//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
#include <conio.h> //Biblioteca para utiliza��o de fun��es como: getche
int main()//In�cio da fun��o int main ().
{
    setlocale(LC_ALL, "Portuguese");//LC_ALL Faz refer�ncia � todos os aspectos de localiza��o.
    float altura=0;//Declara��o de vari�veis do tipo real.
    int i=1, aux = 0;//Declara��o de vari�veis do tipo inteira, usadas como contadores.
    char V;//Declara��o de vari�vel do tipo caractere.
    do//In�cio da fun��o Do-While para o programa repetir quantas vezes o usu�rio informar.
    {
        setlocale(LC_ALL, "Portuguese");//LC_ALL Faz refer�ncia � todos os aspectos de localiza��o.
        system("color 9");//Mudan�a de cor do programa.
        printf("__________________________________________________________________________________________\n");
        printf("\nPrograma que l�, calcula e mostra quantas pessoas entre 10 possuem mais que 1,80m.");//Informando o que o programa faz.
        printf("\n__________________________________________________________________________________________\n\n\n");
        system("pause");//Pausa no programa.
        system("cls");//Limpar a tela.
        for (i=1; i<=10; i++)//Fun��o for (para).
        {
            system("color 6");//<Mudan�a de cor do programa.
            printf("Informe a %d� altura: ", i);//Entrada de dados
                scanf("%f", &altura);//Leitura dos dados
            printf("__________________________________________________________________________________________\n");
            if (altura > 1.80)//Condi��o
                aux++;//Vari�vel Contador

        }
        system("color D");//Mudan�a de cor do programa.
        printf("\n\n%d pessoas medem mais que 1,80m\n\n", aux);//Sa�da de resultados.
        printf("__________________________________________________________________________________________\n\n");
        system("pause");//Pausa no programa.
        system("cls");//Limpar a tela.
        system("color 6");//Mudan�a de cor do programa.
        printf("Deseja reiniciar a opera��o? (S/N)\n-----> ");//Obtendo confirma��o do usu�rio para repetir o programa.
            V = getche();//Leitura da confirma��o.
        if(V == 's' || V == 'S')//Condi��o para que se repita.
        {
            system("cls");//Limpar a tela.
            altura=0, i=1, aux=0;//Reiniciando as vari�veis.
        }
        else//Condi��o para que o programa n�o se repita.
        {
            system("cls");//Limpa tela
            system("color 40");//Mudan�a de colora��o do programa
            printf(".\n.\n.\n.\n.\n.\n.\n.\n.\nFECHANDO PROGRAMA!\n\n\n\n\n\n");//Aviso.
            system("pause");//Pausa no programa
        }
    }while(V == 's' || V == 'S');//Condi��o para o "Do-While" repetir todo o programa enquanto os valores forem informados.

}//Fim da fun��o principal.
