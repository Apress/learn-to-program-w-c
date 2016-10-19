//   Program P8.x - insertionsort2
        #include <stdio.h>
        int main() {
           void insertionSort2(int [], int, int);
           int v, num[10];
           printf("Type up to 10 numbers followed by 0\n");
           int n = 0;
           scanf("%d", &v);
           while (v != 0) {
              num[n++] = v;
              scanf("%d", &v);
           }
           //n numbers are stored from num[0] to num[n-1]
           insertionSort2(num, 0, n-1);
           printf("\nThe sorted numbers are\n");
           for (int h = 0; h < n; h++) printf("%d ", num[h]);
           printf("\n");
        } //end main

        void insertionSort2(int list[], int lo, int hi) {
        //sort list[lo] to list[hi] in ascending order
           void insertInPlace(int, int [], int, int);
           for (int h = lo + 1; h <= hi; h++)
              insertInPlace(list[h], list, lo, h - 1);
        } //end insertionSort2

        void insertInPlace(int newItem, int list[], int m, int n) {
        //list[m] to list[n] are sorted
        //insert newItem so that list[m] to list[n+1] are sorted
           int k = n;
           while (k >= m && newItem < list[k]) {
              list[k + 1] = list[k];
              --k;
           }
           list[k + 1] = newItem;
        } //end insertInPlace
