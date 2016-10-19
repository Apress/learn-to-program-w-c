//Program P5.17
        #include <stdio.h>
        int main() {
           int m, n, r;

           do {
              printf("Enter two positive integers: ");
              scanf("%d %d", &m, &n);
           } while (m <= 0 || n <= 0);

           // At this point, both m and n are positive
           printf("\nThe HCF of %d and %d is ", m, n);

           do {
              r = m % n;
              m = n;
              n = r;
           } while (n > 0);

           printf("%d\n", m);
        }
