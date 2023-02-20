#include<stdio.h>
int main (){
int i,j,m,n,a[10][10];
int sum=0,prod=1;
printf("enter row column :");
scanf("%d %d",&m,&n);
for (i=0;i<m;i++){
    for (j=0;j<n;j++){
     scanf("%d",&a[i][j]);
    }
}


for (i=0;i<m;i++){
    for (j=0;j<n-i-1;j++){
        sum+=a[i][j];
    }
    if(i>=n/2) {
    for (j=n-1;j>=n-i;j--){
        prod*=a[i][j];
    }}
}

printf("sum %d \n product %d ",sum,prod);
}
