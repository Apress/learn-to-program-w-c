// Program P5.3
//print the sum and count of several numbers entered by a user
#include <stdio.h>
int main() {
    int num, sum = 0, n = 0;
    printf("Enter a number (0 to end): ");
    scanf("%d", &num);
    while (num != 0) {
       n = n + 1;
       sum = sum + num;
       printf("Enter a number (0 to end): ");
       scanf("%d", &num);
    }
    printf("\n%d numbers were entered\n", n);
    printf("The sum is %d\n", sum);
}
