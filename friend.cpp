#include<bits/stdc++.h>

using namespace std;

class B;
class A {

private :
    int num1;
   friend int add(A,B);

public :
    A()
    {
        num1=20;
    }


};

class B {
private :
    int num2;
    friend int add (A,B);
public :
    B()
    {
        num2=12;
    }


};
int add (A obj1,B obj2)
{
    return obj1.num1+obj2.num2;

}

int main()
{
 A a;
 B b;
int n=add(a,b);
cout<<n<<endl;
}
