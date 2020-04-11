//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
#include <conio.h> //Biblioteca para utiliza��o de fun��es como: getche
int main()//In�cio da fun��o int main ().
{
    setlocale(LC_ALL, "Portuguese");
    int a=0, b=0, c=0, branco=0, nulo=0, voto, votacao;
    do
    {
        printf("\n\n1 - Candidato A");
        printf("\n2 - Candidato B");
        printf("\n3 - Candidato C");
        printf("\n4 - Branco");
        printf("\n5 - Nulo");
        printf("\n\nInforme o seu voto: ");
            scanf("%d", &voto);
        switch (voto)
        {
            case 1:
                {
                    a++;
                    break;
                }
            case 2:
                {
                    b++;
                    break;
                }
            case 3:
                {
                    c++;
                    break;
                }
            case 4:
                {
                    branco++;
                    break;
                }
            case 5:
                {
                    nulo++;
                    break;
                }
            default:
                {
                    printf("\nVoto Incorreto!");
                }

            system("cls");
        }
        printf("\n\nPara encerrar digite 0 - Para continuar digite 1 \n Informe a sua op��o: ");
            scanf("%d", &votacao);
        system("cls");
    }while (votacao != 0);
    system("cls");
    printf("\nNumero de votos dos Candidatos\n");
    printf("\nCandidato 01: %d, com %.1f%%", a, (float) (a)*100/(a+b+c+branco+nulo));
    printf("\nCandidato 02: %d, com %.1f%%", b, (float) (b)*100/(a+b+c+branco+nulo));
    printf("\nCandidato 03: %d, com %.1f%%", c, (float) (c)*100/(a+b+c+branco+nulo));
    printf("\nNumero de votos em Branco: %d, com %.1f%%", branco, (float) (branco)*100/(a+b+c+branco+nulo));
    printf("\nNumero de votos Nulos: %d, com %.1f%%", nulo, (float) (nulo)*100/(a+b+c+branco+nulo));
    printf("\nPercentual de votos brancos e nulos: %.1f%%\n\n", (float)(branco+nulo)*100/(a+b+c+branco+nulo));

}

