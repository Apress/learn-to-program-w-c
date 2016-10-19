//  Program P7.7
        #include <stdio.h>
        int main() {
           int factorial(int);
           printf(" n    n!\n\n");
           for (int n = 0; n <= 7; n++)
              printf("%2d %5d\n", n, factorial(n));
        }

        int factorial(int n) {
           int nfac = 1;
           for (int h = 2; h <= n; h++)
              nfac = nfac * h;
           return nfac;
        }
