
/* Programa que conta segmentos de numeros iguais */

#include <stdio.h>

int main() {
  int n,  i, n2, ant,  cont;//Declarando variáveis
  printf("Digite o numero de elementos da sequencia: ");//Entrada de valores
  scanf("%d",&n);
  if (n!=0)
  {
        printf("Digite uma sequencia com %d numeros inteiros: ", n);//Entrada de valores
        scanf("%d", &ant);//anterior comeca com o primeiro da sequencia
        cont = 1;//inicialmente temos um segmento

        for (i = 2; i <= n; i++)
        {
            scanf("%d", &n2);    //proximo da sequencia                        */
            if (n2 != ant)
            {
                cont = cont + 1;      // comecou um novo segmento de numeros iguais  */
                ant = n2;
            }
    }
 printf("Quantidade de segmentos de numeros iguais da sequencia = %d\n", cont);//saída de valores
  return 0;
}
  }

