//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
#include <conio.h> //Biblioteca para utiliza��o de fun��es como: getche
int main()//In�cio da fun��o int main ().
{
    system("color A");//Colora��o do programa.
    setlocale(LC_ALL, "Portuguese");//LC_ALL Faz refer�ncia � todos os aspectos de localiza��o.
    float Fa=0, Fb=0, Fc=0, Fd=0, Fe=0, Ff=0, num=0;//Declara��o de vari�veis do tipo real.
    int cont=1;//Declara��o da vari�vel contador.
    float Pa=0, Pb=0, Pc=0, Pd=0, Pe=0, Pf=0;//Declara��o de vari�veis do tipo real para fazer c�lculo de porcentagem.
    char V;//Declara��o de vari�vel do tipo caractere.
    do//In�cio da fun��o Do-While para o programa repetir quantas vezes o usu�rio informar.
    {
        system("color A");//Colora��o do programa.
        printf("_______________________________________________________________________________________\n");
        printf("\nPrograma para calcular o n�mero de vezes que as faces de um dado caem.");//Apresenta��o do programa.
        printf("\n_______________________________________________________________________________________\n");
        printf("\nInforme o resultado das 15 faces, caso informe errado pressione Ctrl+C para encerrar.");
        printf("\n_______________________________________________________________________________________\n\n\n");
        system("pause");//Pausa no programa.
        system("cls");//Limpar tela.
        system("color 3");//Mudan�a na colora��o do programa.
        for (cont = 1 ; cont <= 15; cont++)//Condi��es para o la�o de repti��p "for" ocorrer.
        {
            printf("Informe a %d� face entre 1 e 6: ", cont);//Entrada de dados.
                scanf("%f", &num);//Leitura dos dados.
            printf("-------------------------------------------------------------------------------\n");
            while (num <1 || num > 6)//Enquanto o n�mero inserido for menor que 1 e maior que 6 essa mensagem ser� mostrada.
            {
                system("color 4");//Mudan�a na colora��o do programa para indicar o erro.
                printf("N�mero de face inv�lida!");//Mensagem de erro.
                printf("\nInforme a %d� face entre 1 e 6: ", cont);//Pedindo nova entrada de dados.
                    scanf("%f", &num);//Fazendo uma nova leitura dos dados.
                printf("-------------------------------------------------------------------------------\n");
            }
            system("color 3");//Mudan�a de cor do programa.
            if (num==1)//Condi��o.
            {
                Fa++;//Acr�scimo de mais 1 � vari�vel de Fa.
            }
            else//Caso n�o aconte�a o primeiro if.
            {
                if (num == 2)//Condi��o.
                {
                    Fb++;//Acr�scimo de mais 1 � vari�vel de Fb.
                }
                else//Caso n�o aconte�a o segundo if.
                {
                    if (num == 3)//Condi��o.
                    {
                    Fc++;//Acr�scimo de mais 1 � vari�vel de Fc.
                    }
                    else//Caso n�o aconte�a o terceiro if.
                    {
                        if (num == 4)//Condi��o.
                        {
                            Fd++;//Acr�scimo de mais 1 � vari�vel de Fd.
                        }
                        else//Caso n�o aconte�a o quarto if.
                        {
                            if (num == 5)//Condi��o.
                            {
                                Fe++;//Acr�scimo de mais 1 � vari�vel de Fe.
                            }
                            else//Caso n�o aconte�a o quinto if.
                            {
                                if (num == 6)//Condi��o.
                                {
                                    Ff++;//Acr�scimo de mais 1 � vari�vel de Ff.
                                }
                            }
                        }
                    }
                }
            }
        }
        Pa = (Fa*100)/15;//C�lculo de porcentagem.
        Pb = (Fb*100)/15;//C�lculo de porcentagem.
        Pc = (Fc*100)/15;//C�lculo de porcentagem.
        Pd = (Fd*100)/15;//C�lculo de porcentagem.
        Pe = (Fe*100)/15;//C�lculo de porcentagem.
        Pf = (Ff*100)/15;//C�lculo de porcentagem.
        system("cls");//Limpae Tela.
        system("color 2");//Mudar a colora��o do programa.
        printf("\nO n�mero total de vezes que cada face caiu �:");
        printf("\n-------------------------------------------------------------------------------");
        printf("\nFace 1: %g vez(es) com %.2f%% de frenqu�ncia.", Fa, Pa);//Sa�da de dados do resultado da primeira face
        printf("\n-------------------------------------------------------------------------------");
        printf("\nFace 2: %g vez(es) com %.2f%% de frenqu�ncia.", Fb, Pb);//Sa�da de dados do resultado da segunda face
        printf("\n-------------------------------------------------------------------------------");
        printf("\nFace 3: %g vez(es) com %.2f%% de frenqu�ncia.", Fc, Pc);//Sa�da de dados do resultado da terceira face
        printf("\n-------------------------------------------------------------------------------");
        printf("\nFace 4: %g vez(es) com %.2f%% de frenqu�ncia.", Fd, Pd);//Sa�da de dados do resultado da quarta face
        printf("\n-------------------------------------------------------------------------------");
        printf("\nFace 5: %g vez(es) com %.2f%% de frenqu�ncia.", Fe, Pe);//Sa�da de dados do resultado da quinta face
        printf("\n-------------------------------------------------------------------------------");
        printf("\nFace 6: %g vez(es) com %.2f%% de frenqu�ncia.", Ff, Pf);//Sa�da de dados do resultado da sexta face
        printf("\n-------------------------------------------------------------------------------\n\n\n\n");
        system("pause");//Pausa no programa.
        system("cls");//Limpar a tela.
        system("color 06");//Mudan�a de colora��o do programa.
        printf("Deseja reiniciar a opera��o? (S/N)\n-----> ");//Obtendo confirma��o do usu�rio para repetir o programa.
            V = getche();//Leitura da confirma��o.
        if(V == 's' || V == 'S')//Condi��o para que se repita.
        {
            system("cls");//Limpa tela.
            Fa=0, Fb=0, Fc=0, Fd=0, Fe=0, Ff=0, num=0, cont=1, Pa=0, Pb=0, Pc=0, Pd=0, Pe=0, Pf=0;//Reiniciando as vari�veis.
        }
        else//Condi��o para que o programa n�o se repita.
        {
            system("cls");//Limpa tela
            system("color 40");//Mudan�a de colora��o do programa
            printf(".\n.\n.\n.\n.\n.\n.\n.\n.\nFECHANDO PROGRAMA!\n\n\n\n\n\n");//Aviso.
            system("pause");//Pausa no programa
        }
    }while (V == 's' || V == 'S');//Condi��o para o "Do-While" repetir todo o programa enquanto os valores forem informados.
}//Fim da fun��o principal.












