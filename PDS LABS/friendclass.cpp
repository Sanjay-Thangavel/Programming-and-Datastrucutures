#include <iostream>
using namespace std;

class A;

class B{

private :
    int num1;
friend class A;
public :
    B()
    {
        num1=23;
    }
};

class A{
private :
    int num2;
public :
    A()
    {
        num2=45;
    }


int add()
{
    B obj;
    return obj.num1+num2;
}


};

int main()

{
    A ob;
    cout<<ob.add();


   return 0;
}
