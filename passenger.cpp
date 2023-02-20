#include<bits/stdc++.h>
using namespace std ;

class Passenger {
private :
    int ticket;
    string name;
    string date;


public :
    void getdata ()
    {

        cout<<"entre your name :"<<endl;
        cin>>name;
        cout<<"date "<<endl;
        cin>>date;
        cout<<"No .of Tickets :"<<endl;
        cin>>ticket;

       try
       {
           if(ticket>10)
           {
              throw ticket;
           }

         else if (ticket <1)
         {
             throw name;
         }

       }

       catch (int ticket)
        {
       cout<<"NOT possible , since MAX Accomodation is 10 tickets "<<endl;
        }

        catch (string s)
        {

            cout<<"Dear "<<s<<" You have booked less no. of tickets "<<endl;
        }
    }

    void operator + (int)
    {
    try
    {
     if(ticket >=9 )
     {
         throw ticket;
     }
    ticket+=1;

    }

    catch (int ticket)
        {
       cout<<"NOT possible , since MAX Accomodation is 10 tickets "<<endl;
        }


    }

    void operator -(int)
    {

        ticket-=1;

    }


void displ ()
{
    cout<<"------------------------------"<<endl;
    cout<<"name :"<<name<<endl;
    cout<<"date :"<<date<<endl;
    cout<<"tickets :"<<ticket<<endl;
}


};

int main()
{
    int t;
    char c;
    Passenger obj1,obj2;
    obj1.getdata();
    obj1.displ();
    cout<<"if u want to add your ticket \n Press y/n...?"<<endl;
    cin>>c;
    if(c=='y')
        obj1+t;
    obj1.displ();
     cout<<"if u want to delete  your ticket \n Press y/n...?"<<endl;
    cin>>c;
    if(c=='y')
        obj1-t;

        //obj2;
    obj1.displ();
}


