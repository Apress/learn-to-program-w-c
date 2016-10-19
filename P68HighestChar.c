// Program P6.8
        //read a line of data and find the 'largest' character
        #include <stdio.h>
        int main() {
           char ch, bigChar = '\0';
           printf("Type some data and press 'Enter' \n");
           while ((ch = getchar()) != '\n')
              if (ch > bigChar) bigChar = ch; //is this character bigger?

           printf("\nThe largest character is %c \n", bigChar);
        }
