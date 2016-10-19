#include <stdio.h>
#include <string.h>

struct date {
   int day;
   char month[4];
   int year;
};

int main() {
   struct date dob;
   void printDate(struct date);

   dob.day = 14 ;
   strcpy(dob.month, "Nov");
   dob.year = 2015;

   printDate(dob);
}

void printDate(struct date d) {
   printf("%s %d, %d \n", d.month, d.day, d.year);
}
