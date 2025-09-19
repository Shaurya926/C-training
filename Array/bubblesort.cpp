#include<stdio.h>
int main(){
    int arr[5]={1,4,5,65,3};
    for (int i=0;i<4;i++){
    for (int j=0;j<4;j++){
        if(arr[j]<arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }

}
printf("Descending order\n");
for (int i=0;i<5;i++){
    printf("%d ",arr[i]);
}
for (int i=0;i<4;i++){
    for (int j=0;j<4;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }

}
printf("\nAscending order\n");

for (int i=0;i<5;i++){
    printf("%d ",arr[i]);
}
return 0;
}