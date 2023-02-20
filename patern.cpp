#include<iostream>
using namespace std;

int main(){
int i,j;
for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++){
            cout<<"*"<<"\t";
        }
        cout<<"\n";

    }

    for(i=4;i>=0;i--){
    for(j=0;j<=i;j++){
        cout<<"&"<<"\t";
    }
    cout<<"\n";
}

}



