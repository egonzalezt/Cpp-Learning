#include <iostream>
using namespace std;

int main(){

    int x=10;
    int &y=x; //saves location of x so is the reference
    //int &y; imposible to do a reference must be initialized
    cout<<x<<endl;

    //&y=b; imposible to do because y already have assigned x
    //y=b you can do that the value of b is stored on y and because they use the same memory location

    y++;
    x++;
    cout<<x<<endl;
    cout<<"X address-> "<<&x<<" Y address-> "<<&y<<endl;

    return 0;
}