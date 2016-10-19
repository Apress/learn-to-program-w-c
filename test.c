#include <stdio.h>
int main() {
   int a, s;
   double x, y;
   printf("Enter length of side: ");
   scanf("%lf %d", &x, &a);   //store length in s
   y = x + 2.5;   //calculate area; store in a
   printf("\nArea of square is %3.2f %d\n", y, a );
}
