// Program P7.1
        #include <stdio.h>
        int main() {
           void skipLines(int);
           printf("Sing a song of sixpence\n");
           skipLines(2);
           printf("A pocket full of rye\n");
        }

        void skipLines(int n) {
           for (int h = 1; h <= n; h++)
              printf("\n");
        }
