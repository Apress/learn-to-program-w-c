//   Program P8.5
        #include <stdio.h>
        #include <string.h>
        #include <ctype.h>
        int main() {
           char aPhrase[100], aWord[100];
           void lettersOnlyLower(char p[], char w[]);
           int palindrome(char str[]);
           printf("Type a phrase. (To stop, press 'Enter' only): ");
           gets(aPhrase);


           while (strcmp(aPhrase, "") != 0) {
              lettersOnlyLower(aPhrase, aWord);
              printf("Converted to: %s\n", aWord);
              if (palindrome(aWord)) printf("is a palindrome\n");
              else printf("is not a palindrome\n");
              printf("Type a word. (To stop, press 'Enter' only): ");
              gets(aPhrase);
           } //end while
        } //end main

        void lettersOnlyLower(char phrase[], char word[]) {
           int j = 0, n = 0;
           char c;
           while ((c = phrase[j++]) != '\0')
              if (isalpha(c))  word[n++] = tolower(c);
           word[n] = '\0';
        } //end lettersOnlyLower

        int palindrome(char word[]) {
           int lo = 0;
           int hi = strlen(word) - 1;
           while (lo < hi)
              if (word[lo++] != word[hi--]) return 0;
           return 1;
        } //end palindrome
