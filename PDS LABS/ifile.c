#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BLOCKSIZE 50
int b[BLOCKSIZE+1], ib[BLOCKSIZE+1];
int number,length;
int i,c;
void indexed_allocation()
{
    printf("Entre the block size NO. to allocate :");
    scanf("%d",&number);

    if(number > BLOCKSIZE )
    {
        printf("GIVEN NUMBER IS OUT OF RANGE OF BLOCKSIZE FROM 1 TO 50 \n");
    }

    else
    {
          printf("with in range");

           if(b[number]==0)
           {
               printf("file can be allocated ");
               printf("Entre the Number of Files : ");
               scanf("%d",&length);

               printf("Entre the Indexes : ");

               for(i=0; i<length; i++)
               {
                    printf("FILE #%d ",i+1);
                    scanf("%d",&ib[i]);
               }
               c=0;
               for (i=0;i<length;i++)
               {
                   if( b[ib[i]] > BLOCKSIZE )
                   {
                       printf("INdesxes are Out of Range ...\n ");
                       break;
                   }
                   else if (b[ib[i]]==0)
                    {
                     c++;
                    }
               }
            if(c==length)
            {
                for(i=0; i < length ;i++)
                {
                  b[ib[i]]=1;
                  printf("Index block is allocated  at index %d ",i+1);
                }
            }
            else
            {
                printf("file not allocated since some files are out of range...\n ");

           }
        }
           else
           {
            printf("FILE IS ALREADY ALLOCATED \n");
           }
       }

    }





void disp()
{

    for (i=0; i< BLOCKSIZE ; i++ )
    {
        printf("%d ",b[i]);
        if(i%8==0)
            printf(" \n ");
    }
}

int main ()
{
    char ch;

    printf("-----INDEX FILE ALLOCATION------- \n");
    //char ch[150];
    printf("initilally block is displayed \n ");
    disp();

    while(5)
    {
        printf("BEFORE allocation file are......");
        disp();
        indexed_allocation();
        printf("after allocation ...\n");
        disp();

   printf(" Do you want to continue ......... \n press Y/ N   ");
   scanf("%c",&ch);

   if( (ch=='y') || (ch=='Y') )
   {
      continue;
   }
   else
     exit(0);

    }
}
