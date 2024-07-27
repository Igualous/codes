#include <stdio.h>
int calcular_MDC(int a, int b) {
   int j, i, tamanho_pilha;
   if (a > b) {
      for (j = b; j > 1; j--) { //tentando todos valores menores que o menor valor
         if (a%j == 0 && b%j == 0) { //se a divisao dos dois por j der inteiro
            tamanho_pilha = j;
            break;
         }
      }
   } else { // b > a ou b = a
      for (j = a; j > 1; j--) {
         if (a%j == 0 && b%j == 0) {
            tamanho_pilha = j;
            break;
         }
      }
   }
   return tamanho_pilha;
}
int main() {
   int N, F1, F2, i;
   scanf("%d", &N); //numero de casos de teste

    while (N < 1 || N > 3000) {
      printf("valor invalido\n");
      scanf("%d", &N);
   }
   int res[N];
   for (i = 0; i < N; i++) {
      scanf("%d %d", &F1, &F2); //quantidade de figurinhas pra trocar
      while (F1 < 1 || F1 > 1000 || F2 < 1 || F2 > 1000) {
         printf("valor invalido\n");
         scanf("%d %d", &F1, &F2);
         } 
      res[i] = calcular_MDC(F1, F2);
   }
   for (i = 0; i < N; i++) {
      printf("%d\n", res[i]);
   }
   return 0;
}
