//  Program P7.8
        #include <stdio.h>
        int main() {
           int n, r, nCr, factorial(int), combinations(int, int);
           printf("Enter values for n and r: ");
           scanf("%d %d", &n, &r);
           while (n != 0) {
              nCr = combinations(n, r);
              if (nCr == 1)
              	printf("There is 1 combination of %d objects taken "
                                        "%d at a time\n\n", n, r);
              else
              	printf("There are %d combinations of %d objects taken "
              				"%d at a time\n\n", nCr, n, r);
              printf("Enter values for n and r: ");
              scanf("%d %d", &n, &r);
           }
        }

        int factorial(int n) {
           int nfac = 1;
           for (int h = 2; h <= n; h++)
              nfac = nfac * h;
           return nfac;
        }

        int combinations(int n, int r) {
           int factorial(int);
           return factorial(n) / (factorial(n-r) * factorial(r));
        }
