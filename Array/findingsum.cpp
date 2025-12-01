//Finding sum of two elements in an array
#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int k=5;
    {
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(arr [i] + arr[j]==k)
                {
                printf("%d %d\n",arr[i],arr[j],i,j);
            break;
        }
            }
        }
    }
}