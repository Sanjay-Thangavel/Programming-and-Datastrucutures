#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;

    char data[1000];

    fptr = fopen("bankmanage.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
  /*  fscanf(fptr,"%[^\n]",data); //read every character that is not „\n‟
 fprintf(stdout,"Data from file:\n%s",data);
 fclose(fptr);

   */
   int count=0;
   //printf("\nEven statements\n");
   char c = fgetc(fptr);
    while (c != EOF)
    {
        if(c=='\n')
        {
            count++;
        }
            if(count%2!=0)
        {printf ("%c", c);}
        c = fgetc(fptr);
    }
    fclose(fptr);
printf("\n\n");
        FILE *fpt;
fpt=fopen("bankmanage.txt","r");
int coun=0;

   char ch = fgetc(fpt);

    while (ch!= EOF)
    {
        if(ch=='\n')
        {
            coun++;
        }
            if(coun%2==0)
        {printf ("%c", ch);}
        ch = fgetc(fpt);
    }
    fclose(fpt);
    return 0;
}
