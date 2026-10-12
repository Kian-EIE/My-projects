#include <stdio.h>
#include <math.h>

int main() {
   int maxNum = 13; //对照ASCII表
   
   for (int i = -(maxNum - 1); i <= (maxNum - 1); ++i) {
      int k = abs(i);
      
      for (int j = 0; j < k; ++j)
         putchar(' ');
      
      for (int j = -(maxNum - k - 1); j <= (maxNum - k - 1); ++j)
         putchar('1' + abs(j));
      
      putchar('\n');
   }
   
   return 0;
}
