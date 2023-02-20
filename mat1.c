#include<stdio.h>
int main (){
int arr[2][5]={
{1 ,2 ,3,12,45},
{6 ,7 ,8,43,89},

 };


 print(arr,2,5);


}
void print(int arr[][5],int m,int n){
    int i,j,flag,dum;
    for(i=0;i<m;i++){
        flag=1;
        for(j=0;j<=i;j++){
            if (flag==1){
                dum=i;
                flag=0;
            }
            printf("%d ",arr[dum][j]);

            dum--;
        }
        printf("\n");
    }

    for(i=0;i<m;i++){
        dum=m-1;
        for(j=i+1;j<n;j++){
            printf("%d " ,arr[dum][j]);
            dum--;
        }
        printf("\n");
    }




}
