// Program P6.12
        //This program prints the data from a file numbering the lines
        #include <stdio.h>
        int main() {
           char ch;
           FILE *in = fopen("input.txt", "r");
           int lineNo = 0, writeLineNo = 1;
           while ((ch = getc(in)) != EOF) {
              if (writeLineNo) {
                 printf("%2d. ", ++lineNo);
                 writeLineNo = 0;
              }
              putchar(ch);
              if (ch == '\n') writeLineNo = 1;
           }
           fclose(in);
        }

