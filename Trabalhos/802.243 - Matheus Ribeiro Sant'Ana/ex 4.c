//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
#include <conio.h> //Biblioteca para utilização de funções como: getche
int main()//Início da função int main ().
{
    setlocale(LC_ALL, "Portuguese");//LC_ALL Faz referência à todos os aspectos de localização.
    int N=1, soma=0, i=1, resto=0;
    char V;//Declaração de variável do tipo caractere.
    do//Início da função Do-While para o programa repetir quantas vezes o usuário informar.
    {   system("color A");//Mudança de coloração do programa.
        printf("______________________________________________________________________________________");
        printf("\nPrograma que mostra a soma do números múltiplos de 5.");//Apresentação do programa.
        printf("\n______________________________________________________________________________________");
        printf("\nInforme números aleatórios. 0 - sair\n");
        printf("______________________________________________________________________________________\n\n");
        while (N!=0)//Enquanto o número for maior que 0.
        {
            printf("Informe o %d° número: ", i);//Entrada de dados.
                scanf("%d", &N);//Leitura de dados.
            i++;//Acréscimo de mais 1 à variável contador.
            resto=N%5;//Cálculo de resto.
            if(resto==0)//Condição.
            {
                soma = soma + N;//Cálculo.
            }
        }
        system("color D");//Mudança de cor do programa.
        printf("\nEssa é a soma dos múltiplos de 5: %d\n\n", soma);//Saída de dados.
        system("pause");//Pausa no programa.
        system("cls");//Limpar a tela.
        system("color 06");//Mudança de coloração do programa.
        printf("Deseja reiniciar a operação? (S/N)\n-----> ");//Obtendo confirmação do usuário para repetir o programa.
            V = getche();//Leitura da confirmação.
        if(V == 's' || V == 'S')//Condição para que se repita.
        {
            system("cls");//Limpa tela.
            N=1, soma=0, i=1, resto=0;//Reiniciando as variáveis.
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
