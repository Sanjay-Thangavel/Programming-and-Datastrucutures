#include <stdio.h>
int i,gcd=0,lcm=0;
fn (int x,int y ) {


    for (i = 1; i <= x && i <= y; ++i) {
        if (x % i == 0 && y % i == 0)
            gcd = i;
    }
    lcm = (x * y) / gcd;
    printf("The LCM of two numbers %d and %d is %d.and GCD is %d", x, y, lcm,gcd);
    return 0;}

int main() {
    int n1, n2 ;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    fn(n1,n2);


}
