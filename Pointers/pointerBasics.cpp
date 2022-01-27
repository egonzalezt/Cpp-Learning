#include <iostream>

using namespace std;

int main(){

    int x=10;

    int *p;

    p = &x;

    cout<<"X value "<<x<<endl;
    cout<<"X address "<<&x<<endl;
    cout<<"X address stored in p "<<p<<endl;
    cout<<"P address "<<&p<<endl;
    cout<<"X value accessed by p "<<*p<<endl;
    delete p;//deallocate pointer
    p=nullptr;

    return 0;
}