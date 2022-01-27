#include <iostream>

using namespace std;

class Test{
    int a;
    int *p;

    Test(int x){
        a=x;
        p=new int [a];
    }

    Test(Test &t){
        a=t.a;
        p=new int[a];//now it's sparated
        //p=t.p points to original object array
    }
};