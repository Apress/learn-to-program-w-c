// Program P5.5
//find the smallest of a set of numbers entered
#include <stdio.h>
int main() {
   int num;
   printf("Enter a number (0 to end): ");
   scanf("%d", &num);
   if (num == 0) return;
   int smallNum = num;
   while (num != 0) {
      if (num < smallNum) smallNum = num;
      printf("Enter a number (0 to end): ");
      scanf("%d", &num);
   }
   printf("\nThe smallest is %d\n", smallNum);
}
