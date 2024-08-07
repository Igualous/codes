#include <stdio.h>
#include <string.h>

#define MAX 1000

void desloca_min (char string[]);
void inverte(char string[]);
void desloca_metade(char string[]);

int main() {

    int n;
    scanf("%d", &n);
    char t[n][MAX];
    //leitura das diferentes strings em um array t[n]
    for (int i = 0; i < n; i++)
    {
        scanf(" %[^\n]", t[i]);
    }
   //passagens de cada item de t[n] nas funcoes individualmente
   for (int i = 0; i < n; i++) 
   {
    desloca_min(t[i]);
    inverte(t[i]);
    desloca_metade(t[i]);
   }
   //retorna os valores transformados
   for (int i = 0; i < n; i++) 
   {
    printf("%s\n", t[i]);
   } 
   return 0;
}

void desloca_min(char string[]) {
    for (int i = 0; string[i] != '\0'; i++) 
    {
        if (string[i] >= 'A' && string[i] <= 'z') 
        {
            string[i] = string[i] + 3;
        }
    }
}
void inverte(char string[]) 
{
    char aux;
    int n = strlen(string);
    for (int i = n/2; string[i] != '\0'; i++) 
    {
        aux = string[i];
        string[i] = string[n - 1 - i];
        string[n - 1 - i] = aux;
    }
}
void desloca_metade(char string[])
{
    int n = strlen(string);
    for (int i = n/2; string[i] != '\0'; i++) 
    {
        string[i] = string[i] - 1;
    }
}
