//   Program P9.2
        #include <stdio.h>
        int main() {
           void insertionSort(int [], int);
           int v, num[10];
           printf("Type up to 10 numbers followed by 0\n");
           int n = 0;
           scanf("%d", &v);
           while (v != 0) {
              num[n++] = v;
              scanf("%d", &v);
           }
           //n numbers are stored from num[0] to num[n-1]
           insertionSort(num, n);
           printf("\nThe sorted numbers are\n");
           for (int h = 0; h < n; h++) printf("%d ", num[h]);
           printf("\n");
        } //end main

        void insertionSort(int list[], int n) {
        //sort list[0] to list[n-1] in ascending order
           for (int h = 1; h < n; h++) {
              int key = list[h];
              int k = h - 1; //start comparing with previous item
              while (k >= 0 && key < list[k]) {
              list[k + 1] = list[k];
              --k;
              }
              list[k + 1] = key;
           } //end for
        } //end insertionSort

