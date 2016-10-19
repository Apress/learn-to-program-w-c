//   Program P8.8
     #include <stdio.h>
     #include <string.h>
     #define MaxCandidates 7
     #define MaxNameLength 30
     FILE *in, *out;
     int main() {
        char name[MaxCandidates + 1][MaxNameLength + 1];
        int vote[MaxCandidates + 1];
        int v, validVotes = 0, spoiltVotes = 0;
        void initialize(char [][MaxNameLength + 1], int []);
        void printResults(char [][MaxNameLength + 1], int [], int, int);
        in = fopen("votes.txt", "r");
        out = fopen("results.txt", "w");
        initialize(name, vote);
        fscanf(in, "%d", &v);
        while (v != 0) {
           if (v < 1 || v > MaxCandidates) {
              fprintf(out, "Invalid vote: %d\n", v);
              ++spoiltVotes;
           }
           else {
              ++vote[v];
              ++validVotes;
           }
           fscanf(in, "%d", &v);
        } //end while

        printResults(name, vote, validVotes, spoiltVotes);
        fclose(in);
        fclose(out);
     } // end main

     void initialize(char name[][MaxNameLength + 1], int vote[]) {
        char lastName[MaxNameLength];
        for (int c = 1; c <= MaxCandidates; c++) {
           fscanf(in, "%s %s", name[c], lastName);
           strcat(name[c], " ");
           strcat(name[c], lastName);
           vote[c] = 0;
        }
     } // end initialize

     int getLargest(int num[], int lo, int hi) {
        int big = lo;
        for (int h = lo + 1; h <= hi; h++)
           if (num[h] > num[big]) big = h;
        return big;
     } //end getLargest

     void printResults(char name[][MaxNameLength + 1], int vote[],
                                           int valid, int spoilt) {
        int getLargest(int v[], int, int);
        fprintf(out, "\nNumber of voters: %d\n", valid + spoilt);
        fprintf(out, "Number of valid votes: %d\n", valid);
        fprintf(out, "Number of spoilt votes: %d\n", spoilt);
        fprintf(out, "\nCandidate       Score\n\n");

        for (int c = 1; c <= MaxCandidates; c++)
           fprintf(out, "%-15s %3d\n", name[c], vote[c]);

        fprintf(out, "\nThe winner(s)\n");
        int win = getLargest(vote, 1, MaxCandidates);
        int winningVote = vote[win];
        for (int c = 1; c <= MaxCandidates; c++)
           if (vote[c] == winningVote) fprintf(out, "%s\n", name[c]);
     } //end printResults
