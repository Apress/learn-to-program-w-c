#include <stdio.h>

struct date {
   int day;
   int month;
   int year;
};

int main() {
   struct date dob;
   void printDate(struct date);

   dob.day = 14 ;
   dob.month = 11;
   dob.year = 2015;

   printDate(dob);
}

void printDate(struct date d) {
printf("%d/%d/%d \n", d.day, d.month, d.year);
}
