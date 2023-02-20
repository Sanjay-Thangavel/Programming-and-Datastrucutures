#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Complex{

private :
    int real,img;

public :
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }

    Complex operator + (Complex const &obj)
    {
        Complex res;
        res.real=real+obj.real;
        res.img=img+obj.img;
        return res;
    }
    void print()
    {
        cout<<real<<" +i"<<img<<endl;
    }


};

int main()
{
    Complex c1(12,34), c2(34,67);
    Complex c3=c1+c2;
    c3.print();

    return 0;
}
