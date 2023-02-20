#include<iostream>
using namespace std;
#define n 6
void binsearch(int arr[],int key)
{

    int low=0;
    int high=n-1;

    while(low<high)
    {
    int mid=low+(high-low)/2;

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
