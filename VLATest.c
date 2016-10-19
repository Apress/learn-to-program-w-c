#include <stdio.h>
int main() {
   void VLAargTest(int, int[]);
   int n;
   scanf("%d", &n);
   int A[n];  //TinyC is ok with this
   for (int h = 0; h < n; h++)
      scanf("%d", &A[h]);

   VLAargTest(n, A);
}

void VLAargTest(int m, int B[m]) { //TinyC complains that m is undeclared; ok with B[]
//Code::Blocks runs fine with this
   for (int h = 0; h < m; h++)
      printf("%d\n", B[h]);

}
