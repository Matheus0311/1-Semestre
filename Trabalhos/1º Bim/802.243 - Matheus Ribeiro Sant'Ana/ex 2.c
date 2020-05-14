//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
#include <conio.h> //Biblioteca para utiliza��o de fun��es como: getche
int main()//In�cio da fun��o int main ().
{
    int idade=0, maior=0, i=1;//Declarando as vari�veis e iniciando i com 1.
    char V;//Declara��o de vari�vel do tipo caractere.
    setlocale(LC_ALL, "Portuguese");//LC_ALL Faz refer�ncia � todos os aspectos de localiza��o.
    do
    {
        system("color A");//Mudan�a de cor do programa.
        printf("___________________________________________________________________________\n");
        printf("\nPrograma que l� as idades informadas em anos e mostra a maior inserida.\n");//Informando o que o programa faz.
        printf("___________________________________________________________________________\n");
        printf("\nInforme qualquer idade e idade = 0 para encerrar.\n");
        printf("___________________________________________________________________________\n\n\n");
        system("pause");//Pausa no programa.
        system("cls");//Limpar a tela.
        do//Iniciando a fun��o Do-While.
        {
            printf("Informe a  %d� idade: ", i);//Entrada de dados
                scanf("%d", &idade);//Leitura dos dados.
            printf("-------------------------------------------------------------------------\n");
            i++;//Incrementando +1 a vari�vel i.
                if (idade > maior)//Condi��o.
                {
                    maior = idade;//igualando novamente para que o valor da maior idade se mantenha atualizado.
                }
        }while(idade != 0);//Condi��o para que a fun��o do-while exista.
        printf("\n%d � a maior idade inserida!\n\n", maior);//Sa�da de valores.
        system("pause");//Pausa no programa.
        system("cls");//Limpar a tela.
        system("color 6");//Mudan�a de cor do programa.
        printf("Deseja reiniciar a opera��o? (S/N)\n-----> ");//Obtendo confirma��o do usu�rio para repetir o programa.
            V = getche();//Leitura da confirma��o.
        if(V == 's' || V == 'S')//Condi��o para que se repita.
        {
            system("cls");//Limpar a tela.
            idade=0, maior=0, i=1;//Reiniciando as vari�veis.
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
