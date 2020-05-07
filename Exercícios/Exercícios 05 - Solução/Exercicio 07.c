/*José tem 1,50 m e cresce 2 centímetros por ano. Pedro tem 1,10 m e cresce 3 centímetros por ano.
Construa um programa que calcule em quantos anos Pedro será maior que José.*/

#include <stdio.h>//Inclusão de biblioteca

void main (void) //Função Principal
{
    float AJ, AP; //Declaração das variaveis para a altura de José e Pedro
    int ano = 0; //Declaração da variavel para a qtde de anos

    AJ = 1.50; //Inicializando a altura de José
    AP = 1.1; //Inicializando a altura de Pedro

    while(AJ >= AP) //Executa o laço enquanto José for mais alto que Pedro
    {
        AJ = AJ + 0.02; //Incrementa a altura de José em 2 centimetros
        AP = AP + 0.03; //Incrementa a altura de Pedro em 3 centimetros
        ano++;//Incrementa a variavel ano
    }

    printf("\nNumero de Anos para que Pedro seja mais alto que Jose: %d\n\n", ano); //Mostra na tela o numero de anos
}
