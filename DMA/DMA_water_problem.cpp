#include <stdio.h>

#include <iostream>
using namespace std;
int main() 
{
    int height[]={1,8,6,2,5,4,8,3,7};
    int n=sizeof(height)/sizeof(height[0]);
int i = 0;
        int j = n- 1;
        int res = 0;

        while (i < j)
         {
            res = max(res, (j - i) * min(height[i], height[j]));
            if (height[i] < height[j]) i++;
            else j--;
         }
          printf("%d",res);
          return 0;
}