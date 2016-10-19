// Program P7.5
        #include <stdio.h>
        int main() {
           int a, b;
           int hcf(int, int);
           printf("Enter two positive numbers: ");
           scanf("%d %d", &a, &b);
           while (a > 0 && b > 0) {
              printf("The HCF is %d\n", hcf(a, b));
              printf("Enter two positive numbers: ");
              scanf("%d %d", &a, &b);
           }
        }

        //returns the hcf of m and n
        int hcf(int m, int n) {
           while (n != 0) {
              int r = m % n;
              m = n;
              n = r;
           }
           return m;
        }
