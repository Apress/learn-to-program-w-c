//  Program P7.6
        #include <stdio.h>
           int main() {
           int nfac = 1, n;
           printf("Enter a positive whole number: ");
           scanf("%d", &n);
           for (int h = 2; h <= n; h++)
              nfac = nfac * h;
           printf("%d! = %d\n", n, nfac);
        }
