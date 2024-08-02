#include <stdio.h>
#include <ctype.h>


int pontuation[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};


int calculate_score(char p[]);


int main() {
   char p1[50], p2[50];
   int p1Score, p2Score;

   printf("Player 1: ");
   scanf("%49s", p1);
   printf("Player 2: ");
   scanf("%49s", p2);
   p1Score = calculate_score(p1);
   p2Score = calculate_score(p2); 
   if (p1Score > p2Score) {
       printf("Player 1 wins!\n");
   } else if (p1Score < p2Score) {
       printf("Player 2 wins!\n");
   } else {
       printf("Tie!\n");
   }
   return 0;
}
int calculate_score(char p[]) {
   int score = 0;
   for (int i = 0; p[i] != '\0'; i++) {
       int index = toupper(p[i]) - 'A';
       if (index >= 0 && index < 26) {
           score += pontuation[index];
       }
   }
   return score;
}
