// Program P5.1
//print the sum of several numbers entered by a user
#include <stdio.h>
int main() {
   int num, sum = 0;
   printf("Enter a number (0 to end): ");
   scanf("%d", &num);
   while (num != 0) {
      sum = sum + num;
      printf("Enter a number (0 to end): ");
      scanf("%d", &num);
   }
   printf("\nThe sum is %d\n", sum);
}
