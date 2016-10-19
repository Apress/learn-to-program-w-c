//   Program P8.6
        #include <stdio.h>
        #include <string.h>
        int main() {
           void nameOfDay(int, char[]);
           int n;
           char dayName[12];
           printf("Enter a day from 1 to 7: ");
           scanf("%d", &n);
           nameOfDay(n, dayName);
           printf("%s\n", dayName);
        }

        void nameOfDay(int n, char name[]) {
           char day[8][10] = {"", "Sunday", "Monday", "Tuesday", "Wednesday",
                                  "Thursday", "Friday", "Saturday"};
           if (n < 1 || n > 7) strcpy(name, "Invalid day");
           else strcpy(name, day[n]);
        }
