//  Program P8.1
        //find average and difference from average
        #include <stdio.h>
        #define MaxNum 100
        int main() {
           int a, num[MaxNum];
           int n = 0;
           double sum = 0;
           printf("Enter up to %d numbers (end with 0)\n", MaxNum);
           scanf("%d", &a);


           while (a != 0) {
              sum += a;
              num[n++] = a;  //store in location n, then add 1 to n
              scanf("%d", &a);
           }

           if (n == 0) printf("No numbers entered\n");
           else {
              printf("\nNumbers entered: %d\n", n);
              printf("Sum of numbers: %1.0f\n\n", sum);
              double average = sum / n;
              printf("The average is %3.2f\n", average);
              printf("\nNumbers and differences from average\n");
              for (int h = 0; h < n; h++)
                printf("%4d %6.2f\n", num[h], num[h] - average);
           }
        }

