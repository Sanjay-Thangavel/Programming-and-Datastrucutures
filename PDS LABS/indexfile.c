#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define BLOCKSIZE 50
int b[BLOCKSIZE+1], ib[BLOCKSIZE+1];
int number,length;
void indexed_allocation()
{
 printf("Enter the index block number: ");
 scanf("%d",&number);
// check for invalid number
 if(number>BLOCKSIZE)
 {
 printf("Invalid index Block Number.\nPlease Enter the index block number in the range between 1 to 50\n");
 }
 else
 {
// check the slot is free or not
 if(b[number]==0)
 {
 printf("Enter the number of files for the block %d: ", number);
 scanf("%d",&length);
 printf("Enter the blocks:\n");
 for(int i=0;i<length;i++)
 {
 printf("Files #%d: ",(i+1));
 scanf("%d", &ib[i]);
 }
//IT7411 – OS LABORATORY (4/8 B.TECH – IT) 149|Page
 int c=0;
// increment the counter for the blocks which are given by the user
 for(int i=0;i<length;i++)
 {
 if(b[ib[i]]>BLOCKSIZE)
 {
 printf("Index Block is Out of Range.\nPlease enter the blocks in the range between 1-50\n");
 break;
 }
 else if(b[ib[i]]==0)
 {
 c++;
 }
 }
 // if counter equals to exact length, then slot should be free
 if(c==length)
 {
 // allocate file / block for the user request
 for(int i=0;i<length;i++)
 {
 b[ib[i]]=1;
 printf("Index block %d is allocated ...\n",ib[i]);
 }
 printf("File is allocated successfully for the block %d\n",number);
 }
// if the submitted index block is greater than MAXIMUM give message
 else
 {
 printf("File lengths are not free for the given block\n");
 }
//IT7411 – OS LABORATORY (4/8 B.TECH – IT) 150|Page
 }
 else
 {
 printf("File / Block is already Allocated\nPlease try some block");
 }
 }
}
// print the contents of table
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
//IT7411 – OS LABORATORY (4/8 B.TECH – IT) 151|Page
 printf("\tIndexed File Allocation\n");
 printf("---------------------------------------\n");
 printf("Before File Allocation, Table Contents:\n");
 disp();
 indexed_allocation();
 printf("After File Allocation, Table Contents:\n");
 disp();
 printf("Do you want to continue: Press Yes / No : ");
 scanf("%s",ch);
 if(strcmp(ch, "yes")==0||strcmp(ch, "Yes")==0||strcmp(ch, "YES")==0)
 continue;
 else
 exit(1);
 }
}

