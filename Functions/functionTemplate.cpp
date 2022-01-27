#include <iostream>
#include <string>
using namespace std;

template <class T>

T maximum(T x, T y){
    return x>y?x:y;
}

int main()
{

    int max1= maximum(10,5);
    float max2= maximum(10.5f,6.9f);
    cout<<max1<<endl;
    cout<<max2<<endl;
    return 0;
    
}