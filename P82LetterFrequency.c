//  Program P8.2
        #include <stdio.h>
        #include <ctype.h>
        int main() {
           char ch;
           int n, letterCount[27], position(char);
           FILE * in = fopen("passage.txt", "r");
           FILE * out = fopen("output.txt", "w");

           for (n = 1; n <= 26; n++) letterCount[n] = 0;  //set counts to 0

           while ((ch = getc(in)) != EOF) {
              n = position(ch);
              if (n > 0) ++letterCount[n];
           }

           //print the results
           fprintf(out, "Letter  Frequency\n\n");
           for (n = 1; n <= 26; n++)
              fprintf(out, "%4c %8d\n", 'a' + n - 1, letterCount[n]);
           fclose(in);
           fclose(out);
        }

        int position(char ch) {
           if (isupper(ch)) return ch - 'A' + 1;
           if (islower(ch)) return ch - 'a' + 1;
           return 0;
        }
