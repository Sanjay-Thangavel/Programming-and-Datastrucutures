#include<stdio.h>
int main () {
    int arr[20][20];
    int c,r,i,j;
    printf("rows :");
    scanf("%d",&r);
    printf("\n coloumns : ");
    scanf("%d",&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
                printf("entre the element [%d][%d]:  ",i,j);
            scanf("%d ", &arr[i][j]);

        }
    }
    //fsdfv
    for(i=0;i<4;i++){
        printf("%d ",arr[0][i]);
    }
    for(i=1;i<4;i++){
        printf("%d ",arr[i][c-1]);
    }

}
