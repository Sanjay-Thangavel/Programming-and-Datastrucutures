#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define BLOCKSIZE 50
int b[BLOCKSIZE+1];
int number,length;

void seq_fileallocation()
{
 printf("Enter the block number: ");
 scanf("%d",&number);
// check for invalid number
 if(number>BLOCKSIZE)
 {
 printf("Invalid Block Number.\nPlease Enter the block number in the  range between 1 to 50\n");
 }
 else
 {
// check the slot is free or not
 if(b[number]==0)
 {
 printf("Enter the number of lengths for the block %d: ", number);
 scanf("%d",&length);
 int c=0;
// increment the counter for the blocks which are given by the user
 for(int i=number;i<number+length;i++)
 {
 if(b[i]==0)
 {
 c++;
 }
 }
 // if counter equals to exact length, then slot should be free
 if(c==length)
 {
 // allocate file / block for the user request
 for(int i=number;i<number+length;i++)
 {
 b[i]=1;
 printf("block %d is allocated ...\n",i);
 }
 printf("File is allocated successfully for the block %d\n",number);
 }
 else if((number+length)>BLOCKSIZE)
 {
 printf("File lengths are too out of range than MAX Capacity of Block %d...\n",BLOCKSIZE);
 }
 else
 {
 printf("File lengths are not free for the given block\n");
 }
 }
 else
 {
 printf("File / Block is already Allocated\nPlease try some block %d\n",number);
 }
 }
}
// print the contents of table
//IT7411 – OS LABORATORY (4/8 B.TECH – IT) 142|Page
void disp()
{
 for(int i=1;i<BLOCKSIZE+1;i++)
 {
 printf(" %d",b[i]);
 if(i%8==0)
 printf("\n");
 }
 printf("\n");
}
int main()
{
// allot the inputs for the blocks
 for(int i=1;i<BLOCKSIZE+1;i++)
 {
 b[i]=0;
 }
 printf("Initial Block Table\n");
 disp();
 char ch[150];
 while(5)
 {
 printf("---------------------------------------\n");
 printf("\tSequential File Allocation\n");
 printf("---------------------------------------\n");
 printf("Before File Allocation, Table Contents:\n");
 disp();
 seq_fileallocation();
 printf("After File Allocation, Table Contents:\n");
 disp();
 printf("Do you want to continue: Press Yes / No : ");
//IT7411 – OS LABORATORY (4/8 B.TECH – IT) 143|Page
 scanf("%s",ch);
 if(strcmp(ch, "yes")==0||strcmp(ch, "Yes")==0||strcmp(ch, "YES")==0)
 continue;
 else
 exit(1);
 }
}

