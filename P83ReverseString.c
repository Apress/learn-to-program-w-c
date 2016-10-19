//  Program P8.3
        #include <stdio.h>
        #include <string.h>
        int main() {
           char sample[100];
           void reverse(char s[]);
           printf("Type some data and I will reverse it\n");
           gets(sample);
           reverse(sample);
           printf("%s\n", sample);
        }

        void reverse(char str[]) {
           void swap(char [], int, int);
           int lo, hi;
           for (lo = 0, hi = strlen(str) - 1; lo < hi; lo++, hi--)
              swap(str, lo, hi);
        }

        void swap(char str[], int i, int j) {
           char c = str[i];
           str[i] = str[j];
           str[j] = c;
        }
