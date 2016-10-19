//  Program P8.4
        #include <stdio.h>
        #include <string.h>
        int main() {
           char aWord[100];
           int palindrome(char str[]);
           printf("Type a word. (To stop, press 'Enter' only): ");
           gets(aWord);
           while (strcmp(aWord, "") != 0) {
              if (palindrome(aWord)) printf("is a palindrome\n");
              else printf("is not a palindrome\n");
              printf("Type a word. (To stop, press 'Enter' only): ");
              gets(aWord);
           }
        }

        int palindrome(char word[]) {
           int lo = 0;
           int hi = strlen(word) - 1;
           while (lo < hi)
              if (word[lo++] != word[hi--]) return 0;
           return 1;
        }
