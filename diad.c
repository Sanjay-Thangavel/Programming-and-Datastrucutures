#include<stdio.h>
int main (){
    int ar[20][20];
    int i,j,r,c;
    printf("Enter number of rows : ");
    scanf("%d", &r);
    printf("Enter number of columns : ");
    scanf("%d", &c);

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
                printf("entre the element %d %d :",i,j);
            scanf("%d",&ar[i][j]);
        }
    }

 for(i=0;i<r;i++){
        for(j=0;j<c;j++){

            printf("%d \t ",ar[i][j]);
        }
        printf("\n");
 }
 printf("Diagoal :\n ");
 for(i=0;i<r;i++){
        for(j=0;j<c;j++){

           if (i==j)  printf("%d \t ",ar[i][j]);
        }
        printf("\n");
 }
 printf("opposite  :\n ");
 for(i=0;i<r;i++){
        for(j=0;j<c;j++){

           if (i+j==c-1) printf("%d \t ",ar[i][j]);
        }
        printf("\n");
 }

}
