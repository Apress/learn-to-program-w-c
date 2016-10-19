// Program P6.9
        #include <stdio.h>
        int main() {
           char ch;
           FILE *in = fopen("input.txt", "r");
           while ((ch = getc(in)) != '\n')
              putchar(ch);
           putchar('\n');
           fclose(in);
        }


