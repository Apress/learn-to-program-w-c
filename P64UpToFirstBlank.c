// Program P6.4
        //print all characters before the first blank in the data
        #include <stdio.h>
        int main() {
           printf("Type some data and press 'Enter' \n");
           char ch = getchar();     // get the first character
           while (ch != ' ') {      // as long as ch is NOT a blank
              printf("%c \n", ch);  // print it
              ch = getchar();       //  and get another character
           }
        }
