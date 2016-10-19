//Program P3.5
//request a whole number; print its square
#include <stdio.h>
int main() {
   int num, numSq;
   printf("Enter a whole number: ");
   scanf("%d", &num);
   numSq = num * num;
   printf("\nSquare of %d is %d\n", num, numSq);
}
