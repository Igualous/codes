#include <stdio.h>
#include <string.h>
#include <cs50.h>
#define MAX 9

//candidates have name and vote count
typedef struct {
    string name;
    int votes;
}candidate;

//array of candidates
candidate candidates[MAX];

int candidate_count;

bool vote(string name);
void print_winner(void);

int main (int argc, string argv[]) {

//check for invalid usage
if (argc < 2) {
    printf("invalid number of candidates\n");
    return 1;
}


//populate array of candidates
candidate_count = argc - 1;
if (candidate_count > MAX) {
    printf("Maximum number of candidates is %i\n", MAX);
    return 2;
}
for (int i = 0; i < candidate_count; i++) {
    candidates[i].name = argv[i + 1];
    candidates[i].votes = 0;
}

int voter_count = get_int("Number of voters: ");

//loop over all voters
for (int i = 0; i < voter_count; i++) {
    string name = get_string("Vote: ");

    //check for invalide vote w/ the function bool vote
    if (!vote(name)) {
        printf("Invalid vote!\n");
    }
}

//display winner
print_winner();
}
//update vote totals given a new vote
bool vote(string name) {
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(name, candidates[i].name)) {
            candidates[i].votes++;
            return true;
        }
    }
    return false;
}
//print the winner
void print_winner(void) {
    int maxvotes = 0;

    // Encontrar o número máximo de votos
    for (int i = 0; i < candidate_count; i++) {
        if (candidates[i].votes > maxvotes) {
            maxvotes = candidates[i].votes;
        }
    }
    // Imprimir todos os candidatos com o máximo número de votos
    for (int i = 0; i < candidate_count; i++) {
        if (candidates[i].votes == maxvotes) {
            printf("%s\n", candidates[i].name);
        }
    }
}

