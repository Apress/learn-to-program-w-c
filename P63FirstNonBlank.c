// Program P6.3
        //read and print the first non-blank character in the data
        #include <stdio.h>
        int main() {
           printf("Type some data and press 'Enter' \n");
           char ch = getchar();     // get the first character
           while (ch == ' ')        // as long as ch is a blank
              ch = getchar();       //  get another character

           printf("The first non-blank is %c \n", ch);
        }
