#include <stdio.h>
 
int main() {
    int N;
    int seg, horas, min, aux;
    scanf("%d", &N);
    
    aux = N/60;
    seg = N%60;
    if (aux < 60) {
        min = aux;
        horas = 0;
    } else {
        min = aux%60;
        horas = aux/60;
    }
    printf("%d:%d:%d\n", horas, min, seg);
    return 0;
}
