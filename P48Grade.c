// Program P4.8
//request a score; print letter grade
#include <stdio.h>
int main() {
   int score;
   printf("Enter a score: ");
   scanf("%d", &score);
   printf("\nGrade ");
   if (score < 50) printf("F\n");
   else if (score < 75) printf("B\n");
   else printf("A\n");
}
