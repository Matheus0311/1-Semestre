#include <stdio.h>
#include <math.h>
int main()
{
/*Leia um vetor de 20 posições e em seguida um valor X qualquer. Seu programa devera
fazer uma busca do valor de X no vetor lido e informar a posição em que foi encontrado ou se não
foi encontrado.*/

int main(){
	int vet[20];
	int x, achei=0, posicao;
	//A variavel 'achei' vai verifocar se achei o numero digitado.

	scanf("%d", &x);

	for (int i=0;i<20;i++){//vamos fazer a iteração 20 vezes.
		if (vet[i] == x){
			achei = 1;
			posicao = i;
		}
	}
	//Lembre-se que o laço 'for' serve pra acessar as posições do vetor através da variavel 'i'.
	//*as posições dos vetores sempre começam pelo '0' (zero)
	//se eu quero vascular o vetor a partir da primeira posicao, tenho que fazer um 'for' partindo de '0' zero.


	if (achei == 0){
		printf("Numero nao encontrado");
	}
	else{
		printf("Numero encontrado na posicao ", posicao);
	}
}
}
