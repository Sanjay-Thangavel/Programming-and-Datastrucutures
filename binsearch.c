#include<iostream.h>
using namespace std;

void binsearch(int arr[],int key)
{
    int n=arr.size();
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    for(int i=0;i<n;i++)
    {


    if(mid==key)
    {
     cout<<"found";
    }
    else if(mid<key)
    {
        low=mid++;
    }
    else if(mid > key)
    {
        high=mid--;
    }
    else cout<<"not found"<<endl;
  }
}

int main(){
int arr[]={1,2,3,4,5,6};
binsearch(arr,3);

}
