#include <stdio.h>


int getSum(int n)
{
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
int revr(int n)
{
    int rev=0,r=0;
    while (n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}

int main()
{ int n; printf("entre a number :");
  scanf("%d",&n);
    printf("Entered NUMBER %d \n ",n);
    printf("  SUM OF DIGITS %d \n REVERSAL %d", getSum(n),revr(n));
    return 0;
}
