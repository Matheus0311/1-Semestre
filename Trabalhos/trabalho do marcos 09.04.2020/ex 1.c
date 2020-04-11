//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
#include <conio.h> //Biblioteca para utilização de funções como: getche
int main()//Início da função int main ().
{
    setlocale(LC_ALL, "Portuguese");//LC_ALL Faz referência à todos os aspectos de localização.
    float altura=0;//Declaração de variáveis do tipo real.
    int i=1, aux = 0;//Declaração de variáveis do tipo inteira, usadas como contadores.
    char V;//Declaração de variável do tipo caractere.
    do//Início da função Do-While para o programa repetir quantas vezes o usuário informar.
    {
        setlocale(LC_ALL, "Portuguese");//LC_ALL Faz referência à todos os aspectos de localização.
        system("color 9");//Mudança de cor do programa.
        printf("__________________________________________________________________________________________\n");
        printf("\nPrograma que lê, calcula e mostra quantas pessoas entre 10 possuem mais que 1,80m.");//Informando o que o programa faz.
        printf("\n__________________________________________________________________________________________\n\n\n");
        system("pause");//Pausa no programa.
        system("cls");//Limpar a tela.
        for (i=1; i<=10; i++)//Função for (para).
        {
            system("color 6");//<Mudança de cor do programa.
            printf("Informe a %d° altura: ", i);//Entrada de dados
                scanf("%f", &altura);//Leitura dos dados
            printf("__________________________________________________________________________________________\n");
            if (altura > 1.80)//Condição
                aux++;//Variável Contador

        }
        system("color D");//Mudança de cor do programa.
        printf("\n\n%d pessoas medem mais que 1,80m\n\n", aux);//Saída de resultados.
        printf("__________________________________________________________________________________________\n\n");
        system("pause");//Pausa no programa.
        system("cls");//Limpar a tela.
        system("color 6");//Mudança de cor do programa.
        printf("Deseja reiniciar a operação? (S/N)\n-----> ");//Obtendo confirmação do usuário para repetir o programa.
            V = getche();//Leitura da confirmação.
        if(V == 's' || V == 'S')//Condição para que se repita.
        {
            system("cls");//Limpar a tela.
            altura=0, i=1, aux=0;//Reiniciando as variáveis.
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
