#include <iostream>
#include <string>
using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x=10,y=20;

    swap(x,y);

    cout<<"X: "<<x<<" Y: "<<y<<endl;
}