#include <iostream>
#include <bits/stdc++.h>

using namespace std;
template <class T,class U,class V>

class temp
{
    T a1;
    U b1;
    V c1;

public :
     temp(T aa,U bb,V cc)
     {
         a1=aa; b1=bb; c1=cc;
     }

    void displ()
    {
        cout<<a1<<endl;
        cout<<b1<<endl;
        cout<<c1<<endl;
    }



};

int main()
{
    temp<int,float,char> obj1(12,34.5,'t');
    temp<double,char,bool> obj2(34.564,'y',true);

    obj1.displ();
    obj2.displ();

    return 0;


}

