// Program P5.4
//find the largest of a set of numbers entered
#include <stdio.h>
int main() {
   int num, bigNum = 0;
   printf("Enter a number (0 to end): ");
   scanf("%d", &num);
   while (num != 0) {
      if (num > bigNum) bigNum = num; //is this number bigger?
      printf("Enter a number (0 to end): ");
      scanf("%d", &num);
   }
   printf("\nThe largest is %d\n", bigNum);
}
