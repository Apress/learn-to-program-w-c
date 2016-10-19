//Program P6.1
        //read the first character in the data, print it,
        //its code and the value of EOF
        #include <stdio.h>
        int main() {
           printf("Type some data and press 'Enter' \n");
           char ch = getchar();
           printf("\nThe first character is %c \n", ch);
           printf("Its code is %d \n", ch);
           printf("Value of EOF is %d \n", EOF);
        }
