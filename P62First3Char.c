// Program P6.2
        //read and print the first 3 characters in the data
        #include <stdio.h>
        int main() {
           printf("Type some data and press 'Enter' \n");
           for (int h = 1; h <= 3; h++) {
              char ch = getchar();
              printf("Character %d is %c \n", h, ch);
           }
        }
