//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
#include <conio.h> //Biblioteca para utilização de funções como: getche
int main()//Início da função int main ().
{
    int idade=0, maior=0, i=1;//Declarando as variáveis e iniciando i com 1.
    char V;//Declaração de variável do tipo caractere.
    setlocale(LC_ALL, "Portuguese");//LC_ALL Faz referência à todos os aspectos de localização.
    do
    {
        system("color A");//Mudança de cor do programa.
        printf("___________________________________________________________________________\n");
        printf("\nPrograma que lê as idades informadas em anos e mostra a maior inserida.\n");//Informando o que o programa faz.
        printf("___________________________________________________________________________\n");
        printf("\nInforme qualquer idade e idade = 0 para encerrar.\n");
        printf("___________________________________________________________________________\n\n\n");
        system("pause");//Pausa no programa.
        system("cls");//Limpar a tela.
        do//Iniciando a função Do-While.
        {
            printf("Informe a  %d° idade: ", i);//Entrada de dados
                scanf("%d", &idade);//Leitura dos dados.
            printf("-------------------------------------------------------------------------\n");
            i++;//Incrementando +1 a variável i.
                if (idade > maior)//Condição.
                {
                    maior = idade;//igualando novamente para que o valor da maior idade se mantenha atualizado.
                }
        }while(idade != 0);//Condição para que a função do-while exista.
        printf("\n%d é a maior idade inserida!\n\n", maior);//Saída de valores.
        system("pause");//Pausa no programa.
        system("cls");//Limpar a tela.
        system("color 6");//Mudança de cor do programa.
        printf("Deseja reiniciar a operação? (S/N)\n-----> ");//Obtendo confirmação do usuário para repetir o programa.
            V = getche();//Leitura da confirmação.
        if(V == 's' || V == 'S')//Condição para que se repita.
        {
            system("cls");//Limpar a tela.
            idade=0, maior=0, i=1;//Reiniciando as variáveis.
        }
        else//Condição para que o programa não se repita.
        {
            system("cls");//Limpa tela
            system("color 40");//Mudança de coloração do programa
            printf(".\n.\n.\n.\n.\n.\n.\n.\n.\nFECHANDO PROGRAMA!\n\n\n\n\n\n");//Aviso.
            system("pause");//Pausa no programa
        }
    }while(V == 's' || V == 'S');//Condição para o "Do-While" repetir todo o programa enquanto os valores forem informados.
}//Fim da função principal.
