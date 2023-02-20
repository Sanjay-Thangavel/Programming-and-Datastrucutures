#include <stdio.h>
#include<string.h>
int compare(char[],char[]);
int main()
{
  char str[1000], rev[1000];
  char str1[20];
  char str2[20];
  int i, j,d=0, count = 0;
  scanf("%s", str);
  printf("\nString Before Reverse: %s", str);

  while (str[count] != '\0')
  {
    count++;
  }
  j = count - 1;


  for (i = 0; i < count; i++)
  {
    rev[i] = str[j];
    j--;
  }

  printf("\nString After Reverse: %s  \n INBUILT : %s\n", rev,strrev(str));


 printf("STRING COMPARE: \n");

   printf("Enter the first string : ");
   scanf("%s",str1);
   printf("Enter the second string : ");
   scanf("%s",str2);
   int c= compare(str1,str2);

   if(c==0)
   printf("strings are same");
   else
   printf("strings are not same\n");
   printf("\n-->using INBUIT FUNCTIONS\n");
    d=strcmp(str1,str2);
   if (d==0)
     printf(" strings are same");
   else
   printf("strings are not same");
   printf("\n\n STRING COPY :");

   char s1[] = "information", s2[100];


    printf("string s1 : %s\n", s1);


    for (i = 0; s1[i] != '\0'; ++i) {

        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2 : %s", s2);
    printf("\n -->inbuilt ");
    strcpy(s2,s1);
    printf(" CMP() printing -->%s ==%s",s2,s1);
    printf("\n \t STRING LENGsTH :");
    char x[100];


printf("\n Enter a string: ");
scanf("%s", x);

for(i = 0; x[i] != '\0'; ++i);

printf("\n Length of string: %d\n", i);
printf("using --> INBULD functions :");
printf("\t %d",strlen(x));





    return 0;
}


int compare(char a[],char b[])
{
    int flag=0,i=0;
    while(a[i]!='\0' &&b[i]!='\0')
    {
       if(a[i]!=b[i])
       {
           flag=1;
           break;
       }
       i++;
    }
    if(flag==0)
    return 0;
    else
    return 1;
}
