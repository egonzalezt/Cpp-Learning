//https://www.delftstack.com/howto/cpp/return-a-pointer-in-cpp/

#include <iostream>
#include <string>
using namespace std;

int * fun(){
    int *p= new int[5];
    for(int i=0;i<5;i++){
        p[i]=5+i;
    }

    cout<<p<<endl;

    return p;
}

int main()
{
    int *q= fun();

    cout<<q<<endl;

    for(int i=0;i<5;i++){
        cout<<q[i]<<endl;
    }
    return 0;
}

//p and q have the same memory address