//Program P3.4
//request 3 integers; print their average
#include <stdio.h>
int main() {
   int a, b, c;
   double average;
   printf("Enter 3 integers: ");
   scanf("%d %d %d", &a, &b, &c);
   average = (a + b + c) / 3.0;
   printf("\nTheir average is %3.1f\n", average);
}
