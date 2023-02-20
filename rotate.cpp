#include <iostream>

using namespace std;
void prin(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int T,i,N,c;

    cin>>T;

    for(i=0;i<T;i++)
    {
        cin>>N>>c;
        int a[N];
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
       // cout<<"end";
  //c++;
    while(c--)

    {
         //cout<<c;
        int last =a[0];
    for(int i=0;i<N-1;i++){
        a[i]=a[i+1];
        }
        a[N-1]=last;

    }

    prin(a,N);
      cout<<"\the end";

    }



   cout<<"Hello World"<<i;

    return 0;
}
