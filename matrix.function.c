#include<stdio.h>
void spiral(int m,int n,int arr[m][n]){
    printf("function called :\n1");

    int i,k=0,l=0;
    while(k<m && l<n){
          //printf("function called ");


        for(i=l;i<n;i++){
            printf("%d ",arr[k][i]);
        }
        k++;
        for(i=k;i<m;i++){
            printf("%d ",arr[i][n-1]);
        }
        n--;

        if(k<m){
                  for(i=n-1;i>=l;i--){
                    printf("%d ",arr[m-1][i]);
                  }
                   m--;
                }

        if(l<n){
              for(i=m-1;i>=k;i--){
               printf("%d ",arr[i][l]);
                     }
                  l++;

            }



    }



}





int main ()
{
int i,j;
int arr1[3][6]={

    {1,2,3,4,5,6},
    {7,8,9,10,11,12},
    {13,14,15,16,17,18}


};
for(i=0;i<3;i++){
    for(j=0;j<6;j++){
        printf("%d \t",arr1[i][j]);
    }
    printf("\n");
   }
spiral(3,6,arr1);
//spiralPrint(3,6,arr1);
}
