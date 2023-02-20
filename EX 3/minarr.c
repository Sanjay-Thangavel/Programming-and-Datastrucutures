#include<stdio.h>
int main (){

    int n,min,i;
    int arr[10];
    printf("entre N ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    min=arr[1];
    for (i=1;i<n;i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }

   printf(" minimun is %d",min);

}
