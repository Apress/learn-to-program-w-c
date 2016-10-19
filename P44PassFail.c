// Program P4.4
//request 3 marks; print their average and Pass/Fail
#include <stdio.h>
int main() {
   int mark1, mark2, mark3;
   double average ;
   printf("Enter 3 marks: ");
   scanf("%d %d %d", &mark1, &mark2, &mark3);
   average = (mark1 + mark2 + mark3) / 3.0;
   printf("\nAverage is %3.1f", average);
   if (average >= 50) printf(" Pass\n");
   else printf(" Fail\n");
}
