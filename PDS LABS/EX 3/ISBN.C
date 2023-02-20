#include<stdio.h>
#include<string.h>
int main(){
    int i,j=0,rem=0,sum=0;
    char c[13],cn[10];
    printf("entre the ISBN CODE : ");
    scanf("%s",c);//printf("%s",c);
   for (i=0;i<13;i++){
        if (c[i]!='-'){
            cn[j++]=c[i];
           // printf("%c",cn[j-1]);
        }
   }

   for (i=0;i<9;i++){
       // printf("%c\t \n",cn[i]);
        sum+=(i+1)*(cn[i]-'0');

    }
rem=sum%11;


 printf("%d \n",rem);
 if (cn[9]-'0'==rem)
    printf(" YES, valid ISBN ");
 else
    printf("invalid ISBN  ");


}
