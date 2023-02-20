#include <iostream>
#include <bits/stdc++.h>

using namespace std;
template <class T>
class Calculate
{
private :
    T num1,num2;

public :

Calculate (T n1, T n2)
{
    num1=n1;
    num2=n2;
}


    T add ()
    {
    cout<<num1+num2<<endl;
     return num1+num2;
    }

    T sub()
{
    cout<<num1-num2<<endl;
    return num1-num2;
}

};

int main ()
{
    Calculate<int> obj1(12,56);
    Calculate<double> obj2(12.34,45.67);
    cout<<obj1.add();
    cout<<obj2.sub();

    return 0;
}



