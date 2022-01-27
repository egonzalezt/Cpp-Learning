#include <iostream>
#include <string>
using namespace std;

template <class T>

T suma(T x, T y,T z=0){//set z as zero is a default argument
    return x+y+z;
}

int main()
{

    int max1= suma(10,5);
    float max2= suma(10.5f,6.9f);
    float max3= suma(10.5f,6.9f,10.9f);
    cout<<max1<<endl;
    cout<<max2<<endl;
    cout<<max3<<endl;
    return 0;
    
}