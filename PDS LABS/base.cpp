#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <windows.h>


using namespace std;

string setcolor(unsigned short color){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon, color);
    return "";
}

int main( )
{
    setcolor(13);
    cout << "Hello ";
    setcolor(11);
    cout << "World!" << endl;
    setcolor(7);
    system("PAUSE");
    return 0;
}
