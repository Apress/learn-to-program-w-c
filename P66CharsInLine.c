// Program P6.6
     //count the number of characters in the input line
     #include <stdio.h>
     int main() {
        char ch;
        int numChars = 0;
        printf("Type some data and press 'Enter' \n");
        while ((ch = getchar()) != '\n') 	// repeat as long as ch is not \n
           numChars++;		       // add 1 to numChars
        printf("The number of characters is %d \n", numChars);
     }
