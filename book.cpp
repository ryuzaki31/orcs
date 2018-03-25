#include <iostream>
#include <Windows.h>
using namespace std;

void setcolor(unsigned short color){
    HANDLE hcon=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon, color);
}

int main(){
	int x=0;
	do{
		x++;
		setcolor(x);
		cout<<x<<" ";

	}while(x!=1000);
	system("pause");
}