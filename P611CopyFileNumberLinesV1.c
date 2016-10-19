// Program P6.11
        //This program prints the data from a file numbering the lines
        #include <stdio.h>
        int main() {
           char ch;
           FILE *in = fopen("input.txt", "r");
           int lineNo = 1;
           printf("%2d. ", lineNo);
           while ((ch = getc(in)) != EOF) {
              putchar(ch);
              if (ch == '\n') {
                 lineNo++;
                 printf("%2d. ", lineNo);
              }
           }
           fclose(in);
        }

