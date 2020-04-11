#include <stdio.h>//Biblioteca de função
#include <stdlib.h>//Biblioteca de função
#include <locale.h>//Biblioteca para adicionar acentuação da língua portuguesa
int main()
{
    float pesoa, pesob;//declaração de variáveis
    int planeta;//declaração de variáveis
    setlocale(LC_ALL, "Portuguese");//comando para adicionar acentuação da língua portuguesa
    system("color 09");//função de mudança de cor do programa

    printf("\n------------------------------------------------\n");//separação por tabela de linhas para estética do programa
    printf(" N°    |    Gravidade       |          Planeta\n       |     Relativa       |");//tabela para estética do programa
    printf("\n------------------------------------------------\n");
    printf(" 1     |       0,37         |          Mercúrio\n");
    printf(" 2     |       0,88         |          Vênus\n");
    printf(" 3     |       0,38         |          Marte\n");
    printf(" 4     |       2,64         |          Júpiter\n");
    printf(" 5     |       1,15         |          Saturno\n");
    printf(" 6     |       1,17         |          Urano\n");
    printf("------------------------------------------------\n");

    printf("\nPeso de um objeto na terra em KG: ");//Entrada de dados
        scanf("%f", &pesoa);//leitura de dados
    printf("\n------------------------------------------------\n");
    printf("\nInforme o número correspondente ao planeta: ");//Entrada de dados
        scanf("%d", &planeta);//leitura de dados
    printf("\n------------------------------------------------\n");

     switch(planeta)//comando switch
    {
        case 1://primeiro caso do comando switch
                pesob = (pesoa * 0.37);//cálculo
                printf("Peso em Mercúrio = %gKG", pesob);//saída de dados
                printf("\n------------------------------------------------\n");
                break;
        case 2://segundo caso do comando switch
                pesob = (pesoa * 0.88);//cálculo
                printf("Peso em Vênus = %gKG", pesob);//saída de dados
                printf("\n------------------------------------------------\n");
                break;
        case 3://terceiro caso do comando switch
                pesob = (pesoa * 0.38);//cálculo
                printf("Peso em Marte = %gKG", pesob);//saída de dados
                printf("\n------------------------------------------------\n");
                break;
        case 4://quarto caso do comando switch
                pesob = (pesoa * 2.64);//cálculo
                printf("Peso em Júpiter = %gKG", pesob);//saída de dados
                printf("\n------------------------------------------------\n");
                break;
        case 5://quinto caso do comando switch
                pesob = (pesoa * 1.15);//cálculo
                printf("Peso em Saturno = %gKG", pesob);//saída de dados
                printf("\n------------------------------------------------\n");
                break;
        case 6://sexto caso do comando switch
                pesob = (pesoa * 1.17);//cálculo
                printf("Peso em Urano = %gKG", pesob);//saída de dados
                printf("\n------------------------------------------------\n");
                break;
        default://caso nenhum dos casos do comando switch
                printf("Planeta inválido");//saída de dados
                printf("\n------------------------------------------------\n");
                break;
    }
}
