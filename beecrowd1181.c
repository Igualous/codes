#include <stdio.h>
#define rows 12
#define colums 12

float soma = 0, media = 0;

void calculo_valores (int matriz[][colums]) {
    int i, j;
    for (j=0; j<rows; j++) {
        for (i=0; i<colums; i++) {
            matriz[i][j] = i * j;
        }
    }
    
}

//faz a soma dos numeros da linha escolhida
void fsoma(int matriz[][colums], int L) {
    int i;
    soma = 0; // Resetar soma para evitar acumulação incorreta
    for (i=0; i<colums; i++) {
        soma += matriz[L][i];
    }
}

//faz a media dos numeros da linha desejada
void fmedia(int matriz[][colums], int L) {
    media = soma / colums;
}

int main() {
    int i, L;
    char T;
    int matriz[rows][colums];
    
    calculo_valores(matriz);
    
    scanf("%d", &L);
    scanf(" %c", &T);  // Note o espaço antes de %c para ignorar espaços em branco anteriores
    
    fsoma(matriz, L);
    
    if (T == 'S') {
        printf("%.1f\n", soma);
    } else if (T == 'M') {
        fmedia(matriz, L);
        printf("%.1f\n", media);
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}
