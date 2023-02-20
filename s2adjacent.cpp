#include<bits/stdc++.h>
using namespace std;
void checktrue(){
    string s;

    cin>>s;
    char c;
    cin >>c;

              int h=s.find(c);
              int f=h+1;
               if(h <0) cout<<"NO";

            else if(h%2==0)
              cout<<"YES";
             else
             {
                  h=s.find(c,f);
                 if(h%2==0)
                   cout<<"YES";
                 else
                    cout<<"NO";

             }



}
int main ()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
            checktrue();

    }



}
