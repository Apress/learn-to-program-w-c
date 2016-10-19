// Program P6.13
        #include <stdio.h>
        int main() {
           printf("Type data including a number and press \"Enter\"\n");
           char ch = getchar();
           // as long as the character is not a digit, keep reading
           while (ch < '0' || ch > '9') ch = getchar() ;
           // at this point, ch contains the first digit of the number
           int num = 0;
           while (ch >= '0' && ch <= '9') { // as long as we get a digit
              num = num * 10 + ch - '0';    // update num
              ch = getchar();
           }
           printf("Number is %d\n", num);
        }


