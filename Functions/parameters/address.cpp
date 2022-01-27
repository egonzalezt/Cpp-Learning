#include <iostream>
#include <string>
using namespace std;

void swap(int *a,int *b){
    cout<<a<<endl;//memory address
    cout<<b<<endl;//memory address

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x=10,y=20;

    swap(&x,&y);//send the reference or the address to work on swap and pointers do the rest of the work

    cout<<"X: "<<x<<" Y: "<<y<<endl;
}