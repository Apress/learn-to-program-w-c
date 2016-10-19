 // Program P4.9
//request 3 sides; determine type of triangle
#include <stdio.h>
int main() {
   int a, b, c;
   printf("Enter 3 sides of a triangle: ");
   scanf("%d %d %d", &a, &b, &c);
   if (a <= 0 || b <= 0 || c <= 0) printf("\nNot a triangle\n");
   else if (a >= b + c || b >= c + a || c >= a + b)
      printf("\nNot a triangle\n");
   else if (a == b && b == c) printf("\nEquilateral\n");
   else if (a == b || b == c || c == a) printf("\nIsosceles\n");
   else printf("\nScalene\n");
}
