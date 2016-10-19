#include <stdio.h>

typedef struct {
   int num;
   int den;
} Fraction;

int main() {
   void printFraction(Fraction);
   Fraction f;

   f.num = 5;
   f.den = 9;
   printFraction(f);
}

void  printFraction(Fraction f ) {
   printf("%d/%d", f.num, f.den);
}
