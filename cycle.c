#include <stdio.h>

int main()
{
    //int arr[10];
    int i,num,j;
    int last;
    int arr[]={12,45,76,43,70,23};
    int n=sizeof(arr)/sizeof(arr[0]);

    scanf("%d",&num);
    for(j=0;j<num-1;j++){
            last=arr[n-1];
        for (i=n-1;i>0;i--){

         arr[i]=arr[i-1];

    }
    arr[0]=last;
    }

    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
