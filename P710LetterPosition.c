//  Program P7.10
        #include <stdio.h>
        int main() {
          char c;
          int position(char);
          printf("Type some letters and non-letters and press 'Enter'\n");
          while ((c = getchar()) != '\n')
             printf("%c    %2d\n", c, position(c));
        }

        int isUpperCase(char ch) {
          return ch >= 'A' && ch <= 'Z';
        }

        int isLowerCase(char ch) {
          return ch >= 'a' && ch <= 'z';
        }

        int position(char ch) {
          int isUpperCase(char), isLowerCase(char);
          if (isUpperCase(ch)) return ch - 'A' + 1;
          if (isLowerCase(ch)) return ch - 'a' + 1;
          return 0;
        }
