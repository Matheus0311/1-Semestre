#include <stdio.h>//Biblioteca de fun��o
#include <stdlib.h>//Biblioteca de fun��o
#include <locale.h>//Biblioteca para adicionar acentua��o da l�ngua portuguesa
int main()
{
    float pesoa, pesob;//declara��o de vari�veis
    int planeta;//declara��o de vari�veis
    setlocale(LC_ALL, "Portuguese");//comando para adicionar acentua��o da l�ngua portuguesa
    system("color 09");//fun��o de mudan�a de cor do programa

    printf("\n------------------------------------------------\n");//separa��o por tabela de linhas para est�tica do programa
    printf(" N�    |    Gravidade       |          Planeta\n       |     Relativa       |");//tabela para est�tica do programa
    printf("\n------------------------------------------------\n");
    printf(" 1     |       0,37         |          Merc�rio\n");
    printf(" 2     |       0,88         |          V�nus\n");
    printf(" 3     |       0,38         |          Marte\n");
    printf(" 4     |       2,64         |          J�piter\n");
    printf(" 5     |       1,15         |          Saturno\n");
    printf(" 6     |       1,17         |          Urano\n");
    printf("------------------------------------------------\n");

    printf("\nPeso de um objeto na terra em KG: ");//Entrada de dados
        scanf("%f", &pesoa);//leitura de dados
    printf("\n------------------------------------------------\n");
    printf("\nInforme o n�mero correspondente ao planeta: ");//Entrada de dados
        scanf("%d", &planeta);//leitura de dados
    printf("\n------------------------------------------------\n");

     switch(planeta)//comando switch
    {
        case 1://primeiro caso do comando switch
                pesob = (pesoa * 0.37);//c�lculo
                printf("Peso em Merc�rio = %gKG", pesob);//sa�da de dados
                printf("\n------------------------------------------------\n");
                break;
        case 2://segundo caso do comando switch
                pesob = (pesoa * 0.88);//c�lculo
                printf("Peso em V�nus = %gKG", pesob);//sa�da de dados
                printf("\n------------------------------------------------\n");
                break;
        case 3://terceiro caso do comando switch
                pesob = (pesoa * 0.38);//c�lculo
                printf("Peso em Marte = %gKG", pesob);//sa�da de dados
                printf("\n------------------------------------------------\n");
                break;
        case 4://quarto caso do comando switch
                pesob = (pesoa * 2.64);//c�lculo
                printf("Peso em J�piter = %gKG", pesob);//sa�da de dados
                printf("\n------------------------------------------------\n");
                break;
        case 5://quinto caso do comando switch
                pesob = (pesoa * 1.15);//c�lculo
                printf("Peso em Saturno = %gKG", pesob);//sa�da de dados
                printf("\n------------------------------------------------\n");
                break;
        case 6://sexto caso do comando switch
                pesob = (pesoa * 1.17);//c�lculo
                printf("Peso em Urano = %gKG", pesob);//sa�da de dados
                printf("\n------------------------------------------------\n");
                break;
        default://caso nenhum dos casos do comando switch
                printf("Planeta inv�lido");//sa�da de dados
                printf("\n------------------------------------------------\n");
                break;
    }
}
