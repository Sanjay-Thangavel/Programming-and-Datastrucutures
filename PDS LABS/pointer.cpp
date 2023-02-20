#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a=10;
    int arr[]={12,34,56,7};
    char *c;
    string s="Sanjay";
    int *ptr;
    ptr=&a;
    cout<<" address ptr  and   *ptr :"<<ptr<<"   "<<*ptr<<endl;
    ptr=arr;
    cout<<"address ptr  and   *ptr :"<<ptr<<"   "<<*(ptr+1)<<endl;
    //c=s[0];
    //cout<<"/n "<<c<<endl;

    return 0;
}
