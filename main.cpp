#include <iostream>
#include <Windows.h>

void setcolor(int color){
    HANDLE hcon=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon, color);
}

using namespace std;
int a,b,c;

int main()
{
    cout << "Hello world!" << endl;
    cout<<"enter";setcolor(10);cout<<" two numbers";
    cin>>a;
    cin>>b;
    cout<<"\n";
    int sum=a+b;
    c=sum/2;
    cout<<"sum of the two numbers is"<<sum<<"\n";
    cout<<"average: "<<c<<"\n";
    return 0;
}
