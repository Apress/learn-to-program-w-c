//   Program P8.7
        #include <stdio.h>
        #include <string.h>
        #include <ctype.h>
        #include <stdlib.h>
        #define MaxLength 50
        int main() {
           void getString(FILE *, char[]);
           void askOneQuestion(char[], char[], char[]);
           char EndOfData[] = "*", country[MaxLength+1] ;
           char capital[MaxLength+1], CAPITAL[MaxLength+1];
           FILE * in = fopen("quizdata.txt", "r");
           if (in == NULL){
              printf("Cannot find file\n");
             exit(1);
           }
           getString(in, country);
           while (strcmp(country, EndOfData) != 0) {
              getString(in, capital);
              getString(in, CAPITAL);
              askOneQuestion(country, capital, CAPITAL);
              getString(in, country);
           }
        } // end main


        void askOneQuestion(char country[], char capital[], char CAPITAL[]) {
           void lettersOnlyUpper(char [], char[]);
           char answer[MaxLength+1], ANSWER[MaxLength+1];

           printf("\nWhat is the capital of %s?", country);
           gets(answer);
           lettersOnlyUpper(answer, ANSWER);
           if (strcmp(ANSWER, CAPITAL) == 0) printf("Correct!\n");
           else {
              printf("Wrong. Try again\n");
              printf("\nWhat is the capital of %s?", country);
             gets(answer);
             lettersOnlyUpper(answer, ANSWER);
             if (strcmp(ANSWER, CAPITAL) == 0) printf("Correct!\n");
              else printf("Wrong. Answer is %s\n", capital);
           }
        } // end askOneQuestion

        void lettersOnlyUpper(char word[], char WORD[]) {
           // stores the letters in word (converted to uppercase) in WORD
           int j = 0, n = 0;
           char c;
           while ((c = word[j++]) != '\0')
              if (isalpha(c)) WORD[n++] = toupper(c);
           WORD[n] = '\0';
        } // end lettersOnlyUpper

        void getString(FILE * in, char str[]) {
        //stores, in str, the next string within delimiters
        // the first non-whitespace character is the delimiter
        // the string is read from the file 'in'
           char ch, delim;
           int n = 0;
           str[0] = '\0';
           // read over white space
           while (isspace(ch = getc(in))) ; //empty while body
           if (ch == EOF) return;
           delim = ch;
           while (((ch = getc(in)) != delim) && (ch != EOF))
              str[n++] = ch;
           str[n] = '\0';
        } // end getString
