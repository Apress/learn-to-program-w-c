// Program P6.7
     //count the number of characters and blanks in the input line
     #include <stdio.h>
     int main() {
        char ch;
        int numChars = 0;
        int numBlanks = 0;
        printf("Type some data and press 'Enter' \n");
        while ((ch = getchar()) != '\n') { // repeat as long as ch is not \n
           numChars++;                     // add 1 to numChars
           if (ch == ' ') numBlanks++;     // add 1 if ch is blank
        }
        printf("\nThe number of characters is %d \n", numChars);
        printf("The number of blanks is %d \n", numBlanks);
     }
