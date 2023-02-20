#include <iostream>

using namespace std;

class A;

class B{
private :
    int number1;

   friend int add(A,B);
public :
    B()
    {
        number1=12;
    }

};

class A{

private :
    int number2;

    friend int add(A,B);

public :
    A()
    {
        number2=34;
    }



};
int add(A a,B b)
{
    return a.number2+b.number1;
}

int main()
{
    A obj1;
    B obj2;
    cout<<add(obj1,obj2);

return 0;
}
