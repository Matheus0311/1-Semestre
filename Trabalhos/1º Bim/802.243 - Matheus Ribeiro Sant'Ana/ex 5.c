//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
#include <conio.h> //Biblioteca para utilização de funções como: getche
int main()//Início da função int main ().
{
    system("color A");//Coloração do programa.
    setlocale(LC_ALL, "Portuguese");//LC_ALL Faz referência à todos os aspectos de localização.
    float Fa=0, Fb=0, Fc=0, Fd=0, Fe=0, Ff=0, num=0;//Declaração de variáveis do tipo real.
    int cont=1;//Declaração da variável contador.
    float Pa=0, Pb=0, Pc=0, Pd=0, Pe=0, Pf=0;//Declaração de variáveis do tipo real para fazer cálculo de porcentagem.
    char V;//Declaração de variável do tipo caractere.
    do//Início da função Do-While para o programa repetir quantas vezes o usuário informar.
    {
        system("color A");//Coloração do programa.
        printf("_______________________________________________________________________________________\n");
        printf("\nPrograma para calcular o número de vezes que as faces de um dado caem.");//Apresentação do programa.
        printf("\n_______________________________________________________________________________________\n");
        printf("\nInforme o resultado das 15 faces, caso informe errado pressione Ctrl+C para encerrar.");
        printf("\n_______________________________________________________________________________________\n\n\n");
        system("pause");//Pausa no programa.
        system("cls");//Limpar tela.
        system("color 3");//Mudança na coloração do programa.
        for (cont = 1 ; cont <= 15; cont++)//Condições para o laço de reptiçãp "for" ocorrer.
        {
            printf("Informe a %d° face entre 1 e 6: ", cont);//Entrada de dados.
                scanf("%f", &num);//Leitura dos dados.
            printf("-------------------------------------------------------------------------------\n");
            while (num <1 || num > 6)//Enquanto o número inserido for menor que 1 e maior que 6 essa mensagem será mostrada.
            {
                system("color 4");//Mudança na coloração do programa para indicar o erro.
                printf("Número de face inválida!");//Mensagem de erro.
                printf("\nInforme a %d° face entre 1 e 6: ", cont);//Pedindo nova entrada de dados.
                    scanf("%f", &num);//Fazendo uma nova leitura dos dados.
                printf("-------------------------------------------------------------------------------\n");
            }
            system("color 3");//Mudança de cor do programa.
            if (num==1)//Condição.
            {
                Fa++;//Acréscimo de mais 1 à variável de Fa.
            }
            else//Caso não aconteça o primeiro if.
            {
                if (num == 2)//Condição.
                {
                    Fb++;//Acréscimo de mais 1 à variável de Fb.
                }
                else//Caso não aconteça o segundo if.
                {
                    if (num == 3)//Condição.
                    {
                    Fc++;//Acréscimo de mais 1 à variável de Fc.
                    }
                    else//Caso não aconteça o terceiro if.
                    {
                        if (num == 4)//Condição.
                        {
                            Fd++;//Acréscimo de mais 1 à variável de Fd.
                        }
                        else//Caso não aconteça o quarto if.
                        {
                            if (num == 5)//Condição.
                            {
                                Fe++;//Acréscimo de mais 1 à variável de Fe.
                            }
                            else//Caso não aconteça o quinto if.
                            {
                                if (num == 6)//Condição.
                                {
                                    Ff++;//Acréscimo de mais 1 à variável de Ff.
                                }
                            }
                        }
                    }
                }
            }
        }
        Pa = (Fa*100)/15;//Cálculo de porcentagem.
        Pb = (Fb*100)/15;//Cálculo de porcentagem.
        Pc = (Fc*100)/15;//Cálculo de porcentagem.
        Pd = (Fd*100)/15;//Cálculo de porcentagem.
        Pe = (Fe*100)/15;//Cálculo de porcentagem.
        Pf = (Ff*100)/15;//Cálculo de porcentagem.
        system("cls");//Limpae Tela.
        system("color 2");//Mudar a coloração do programa.
        printf("\nO número total de vezes que cada face caiu é:");
        printf("\n-------------------------------------------------------------------------------");
        printf("\nFace 1: %g vez(es) com %.2f%% de frenquência.", Fa, Pa);//Saída de dados do resultado da primeira face
        printf("\n-------------------------------------------------------------------------------");
        printf("\nFace 2: %g vez(es) com %.2f%% de frenquência.", Fb, Pb);//Saída de dados do resultado da segunda face
        printf("\n-------------------------------------------------------------------------------");
        printf("\nFace 3: %g vez(es) com %.2f%% de frenquência.", Fc, Pc);//Saída de dados do resultado da terceira face
        printf("\n-------------------------------------------------------------------------------");
        printf("\nFace 4: %g vez(es) com %.2f%% de frenquência.", Fd, Pd);//Saída de dados do resultado da quarta face
        printf("\n-------------------------------------------------------------------------------");
        printf("\nFace 5: %g vez(es) com %.2f%% de frenquência.", Fe, Pe);//Saída de dados do resultado da quinta face
        printf("\n-------------------------------------------------------------------------------");
        printf("\nFace 6: %g vez(es) com %.2f%% de frenquência.", Ff, Pf);//Saída de dados do resultado da sexta face
        printf("\n-------------------------------------------------------------------------------\n\n\n\n");
        system("pause");//Pausa no programa.
        system("cls");//Limpar a tela.
        system("color 06");//Mudança de coloração do programa.
        printf("Deseja reiniciar a operação? (S/N)\n-----> ");//Obtendo confirmação do usuário para repetir o programa.
            V = getche();//Leitura da confirmação.
        if(V == 's' || V == 'S')//Condição para que se repita.
        {
            system("cls");//Limpa tela.
            Fa=0, Fb=0, Fc=0, Fd=0, Fe=0, Ff=0, num=0, cont=1, Pa=0, Pb=0, Pc=0, Pd=0, Pe=0, Pf=0;//Reiniciando as variáveis.
        }
        else//Condição para que o programa não se repita.
        {
            system("cls");//Limpa tela
            system("color 40");//Mudança de coloração do programa
            printf(".\n.\n.\n.\n.\n.\n.\n.\n.\nFECHANDO PROGRAMA!\n\n\n\n\n\n");//Aviso.
            system("pause");//Pausa no programa
        }
    }while (V == 's' || V == 'S');//Condição para o "Do-While" repetir todo o programa enquanto os valores forem informados.
}//Fim da função principal.












