#include <stdio.h>
 
int main() {
    int value;
    double n100, n50, n20, n10, n5, n2, n1;
    
    scanf("%d", &value);
    while (value < 0 || value > 1000000) {
        printf("valor invalido\n");
        scanf("%d", &value);
    }
    printf("%d\n", value);
    
    n100 = value/100; 
    n50 = (value%100)/50;
    n20 = ((value%100)%50)/20;
    n10 = (((value%100)%50)%20)/10;
    n5 = ((((value%100)%50)%20)%10)/5;
    n2 = (((((value%100)%50)%20)%10)%5)/2;
    n1 = ((((((value%100)%50)%20)%10)%5)%2)/1;
    
    printf("%.0lf nota(s) de R$ 100,00\n", n100);
    printf("%.0lf nota(s) de R$ 50,00\n", n50);
    printf("%.0lf nota(s) de R$ 20,00\n", n20);
    printf("%.0lf nota(s) de R$ 10,00\n", n10);
    printf("%.0lf nota(s) de R$ 5,00\n", n5);
    printf("%.0lf nota(s) de R$ 2,00\n", n2);
    printf("%.0lf nota(s) de R$ 1,00\n", n1);
 
    return 0;
}
