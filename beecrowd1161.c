#include <stdio.h>

long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        long long recursao = n * factorial(n-1);
        return recursao;
    }
}

int main() {
    int M, N;
    
    scanf("%d %d", &M, &N);
    
    // Verificação e releitura se os valores forem inválidos
    while (M < 0 || M > 20 || N < 0 || N > 20) {
        printf("Informe um valor válido\n");
        scanf("%d %d", &M, &N);
    }
    
    // Calcular os fatoriais e somá-los
    long long soma = factorial(M) + factorial(N);
    printf("%lld\n", soma);
 
    return 0;
}
