#include<stdio.h>
char* encryption(char* str);
int main()
{
char str[]="zebra tiger";
printf("%s",encryption(str));
return 0;
}
char* encryption(char* str)
{
//your CODE
int len,index,value;
for(len=0;str[len]!='\0';len++)
{
if(str[index]='\0')
{
value=0;
continue;
}
if(str[index]+value<=122)
str[index]=str[index]+value++;
else
str[index]=str[index]+value++ -26;
}
return str;
}
