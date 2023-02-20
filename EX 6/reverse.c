#include<stdio.h >
int main ()
{
  FILE *fp,*cp;
  int n;
  char ch;
  printf("enter n numbers to rev  charac \t");
  scanf("%d",&n);
  fp=fopen("s1.txt","rb");
  cp=fopen ("rev.txt","w");
fseek(fp,n,SEEK_SET);
while (n>=0){
    ch=fgetc(fp);
    fputc((char)ch,cp);
    fseek(fp,-2,SEEK_CUR);
    n--;
}
fclose(fp);
fclose(cp);


}

