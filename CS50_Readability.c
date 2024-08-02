#include <stdio.h>
#include <string.h>

int main () {

    char input[100];
    printf("Text: ");
    fgets(input, sizeof(input), stdin);  // Read a line of text
    input[strcspn(input, "\n")] = '\0';  // Remove newline character

    int espacos = 0, pontuacao = 0, caracteres = strlen(input);
    for (int i = 0; i < caracteres; i++) {
        if (input[i] == ' ') {
            espacos++;
        }
        if (input[i] == '.' || input[i] == '!' || input[i] == '?' || input[i] == ',' || input[i] == ';' || input[i] == ':') {
            pontuacao++;
        }
    }
    int palavras = espacos + 1;
    int frases = pontuacao;
    int letras = caracteres - espacos - pontuacao;
    double L = (double) letras*100/palavras;
    double S = (double) frases*100/palavras;

    double index = 0.0588 * L - 0.296 * S - 15.8;


    if (index > 16) {
        printf("Grade 16+\n");
    } else if (index < 1) {
        printf("Before Grade 1\n");
    } else{
        printf("Grade %d\n", (int) index);
    }
    
    
    return 0;
}

