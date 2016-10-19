//  Program P7.9
        #include <stdio.h>
        int main() {
           int num, sumDivisors(int);
           printf("Enter a number: ");
           scanf("%d", &num);
           while (num != 0) {
              int sum = sumDivisors(num);
              if (sum < num) printf("Deficient\n\n");
              else if (sum == num) printf("Perfect\n\n");
              else printf("Abundant\n\n");
              printf("Enter a number: ");
              scanf("%d", &num);
           }
        }

        //returns the sum of the exact divisors of n
        int sumDivisors(int n) {
           int sumDiv = 1;
           for (int h = 2; h <= n / 2; h++)
              if (n % h == 0) sumDiv += h;
           return sumDiv;
        }

