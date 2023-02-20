#include <bits/stdc++.h>
using namespace std;

class complexn
{
 float real,img;

 public :
     complexn(int r=0, int i=0)
     {
         real=r;
         img =i;
     }
     complexn operator + (complexn const & obj)
     {
         complexn res;

         res.real = real + obj.img ;
         res.img =img + obj.img;
         return res;
     }
void displ()
{
    cout<<real<<"+ i"<<img<<endl;
}

};
int main ()
{
    complexn c1(23,56),c2(67,12),c3;
    c3=c1+c2;
    c3.displ();

}
