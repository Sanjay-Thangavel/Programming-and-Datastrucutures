#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10][10],n,k,j,i,count=0;
    int flag[10];
    int indeg[10];
    cout<<"entre the no.. of vertices ";
    cin>>n;

 cout<<"Entre adcency matrix "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Entre the row "<<i+1<<endl;
        for(int j=0; j<n; j++)
        {
          cin>>a[i][j];
        }
    }

for(int i=0; i<n;i++)
{
    flag[i]=0;
    indeg[i]=0;
}

for(int i=0; i<n;i++)
{
 for(int j=0; j<n;j++)
    {
      indeg[i]+=a[j][i];
    }
}
cout<<"topological order is "<<endl;

while(count < n )
{

    for(k=0; k<n;k++)
    {
        if( (indeg[k]==0) && (flag[k]==0) )
        {
            cout<<k+1<<" ";
            flag[k]=1;
        }

        for(int j=0; j<n;j++)
        {
            if(a[j][k]==1)
                indeg[k]-- ;

        }
    }
count++;
}

return 0;

}
