// Program P5.12
#include <stdio.h>
int main() {
   int n;
   printf("How many lines to print? ");
   scanf("%d", &n);
   printf("\n"); //print a blank line
   for (int h = 1; h <= n; h++)
      printf("%d. I must not sleep in class\n", h);
}
