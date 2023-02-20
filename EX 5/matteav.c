#include<stdio.h>
int main(){
    int i,j;
    int mat[5][5];
 for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Entre\t [%d][%d] :",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
        }
        for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        if (i+j==i) printf("%d",mat[i][j]);
    }
}
}


