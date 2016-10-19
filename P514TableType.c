// Program P5.14
#include <stdio.h>
int main() {
   int factor;
   printf("Type of table? ");
   scanf("%d", &factor);
   for (int m = 1; m <= 12; m++)
      printf("%2d x %d = %2d\n", m, factor, m * factor);
}
