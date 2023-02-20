#include<stdio.h>
void rotate(int arr[],int n){
    int last=arr[0];
       for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
       }
      arr[n-1]=last;
   //return arr;
}


int main (){
//int count=1;
int arr[]={1,2,3,4};
int prod=1;
int n=sizeof(arr)/sizeof(arr[0]);
printf("orginal Array :-\n ");
for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
          }
for(int i=0;i<n;i++){
       prod*=arr[i];
          }

printf("After product\n ");
for(int i=0;i<n;i++){
       arr[i]=prod/arr[i];
          }
for(int i=0;i<n;i++){

       printf("%d ",arr[i]);
          }


}
