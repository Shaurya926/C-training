#include <stdlib.h>
#include <stdio.h>


int main() {
    int n;
    printf("Enetr size");
    scanf("%d",&n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter %d Elements \n",n);
    for (int i =0 ; i< n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int idx =0;
    int *array = (int *)malloc(n * sizeof(int));
    
    for (int i =0 ; i< n; i++)
    {
        if(arr[i]==0){
        array[idx]=arr[i];
        idx++;
            
        }
    }
    for (int i =0 ; i< n; i++)
    {
        if(arr[i]<0)
        {
        array[idx]=arr[i];
        idx++;
            
        }
    }
    for (int i =0 ; i< n; i++)
    {
        if(arr[i]>0)
        {
        array[idx]=arr[i];
        idx++;
            
        }
    }
    for (int i =0 ; i< n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}