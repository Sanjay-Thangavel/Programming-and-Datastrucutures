#include <bits/stdc++.h>
using namespace std;
template <class T,class U,class V>
class Base {

public :
    T a;
    U b;
    V c;

    Base (T a1,U b1, V c1)
    {
        a=a1;
        b=b1;
        c=c1;
    }

    void disp()
    {
        cout<<"value for a :b  : c  "<<a<<b<<c<<endl;
    }

};

int main()
{
    Base<int,char,double> obj(12,'r',45.6);
    obj.disp();

    return 0;
}
