#include <iostream>
#include <string>
using namespace std;

int x =10;

int main()
{
    int x=20;
    {
        int x=30;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    cout<<::x<<endl;// using :: indicates that we need the global variable
    return 0;
    
}