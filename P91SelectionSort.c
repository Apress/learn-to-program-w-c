//   Program P9.1
        #include <stdio.h>
        int main() {
           void selectionSort(int [], int, int);
           int v, num[10];
           printf("Type up to 10 numbers followed by 0\n");
           int n = 0;
           scanf("%d", &v);
           while (v != 0) {
              num[n++] = v;
              scanf("%d", &v);
           }
           //n numbers are stored from num[0] to num[n-1]
           selectionSort(num, 0, n-1);
           printf("\nThe sorted numbers are\n");
           for (int h = 0; h < n; h++) printf("%d ", num[h]);
           printf("\n");
        }
        void selectionSort(int list[], int lo, int hi) {
        //sort list[lo] to list[hi] in ascending order
           int getSmallest(int [], int, int);
           void swap(int [], int, int);
           for (int h = lo; h < hi; h++) {
           int s = getSmallest(list, h, hi);
           swap(list, h, s);
           }
        }

        int getSmallest(int num[], int lo, int hi) {
        //find position of smallest from num[lo] to num[hi]
           int small = lo;
           for (int h = lo + 1; h <= hi; h++)
           if (num[h] < num[small]) small = h;
           return small;
        }

        void swap(int num[], int i, int j) {
        //swap elements num[i] and num[j]
           int hold = num[i];
           num[i] = num[j];
           num[j] = hold;
        }
