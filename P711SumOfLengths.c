//  Program P7.11
        //find the sum of two lengths given in metres and cm
        #include <stdio.h>
        #include <ctype.h>
        int main() {
           int m1, cm1, m2, cm2, mSum, cmSum, getInt();
           printf("Enter first length: ");
           m1 = getInt();
           cm1 = getInt();
           printf("Enter second length: ");
           m2 = getInt();
           cm2 = getInt();

           mSum = m1 + m2;  //add the metres
           cmSum = cm1 + cm2;  //add the centimetres
           if (cmSum >= 100) {
              cmSum = cmSum - 100;
              mSum = mSum + 1;
           }
           printf("\nSum is %dm %dcm\n", mSum, cmSum);
        }

        int getInt() {
           char ch = getchar();
           // as long as the character is not a digit, keep reading
           while (!isdigit(ch)) ch = getchar() ;
           // at this point, ch contains the first digit of the number
           int num = 0;
           while (isdigit(ch)) { // as long as we get a digit
              num = num * 10 + ch - '0';  // update num
              ch = getchar();
           }
           return num;
        }
