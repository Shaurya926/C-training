#include<stdio.h>
int  main()
{
    int a[5]={1,-2,3,-4,6};
    int sum_a=a[0];
    int suma[4];
    for(int i=1;i<5;i++){
       
                sum_a=sum_a+a[i];
               suma[i-1]=sum_a;
               printf("%d\n",sum_a);
    }

   
    int great=suma[0];
     for(int i=1 ; i<4;i++){
        if(great <suma[i])
        great=suma[i];
     }
     printf("%d",great);
    return 0;
}