#include <iostream>

using namespace std;

int main()
{

    int A[7]={4,8,6,9,5,2,7};
    int sum =0;
    int len = sizeof(A)/sizeof(A[0]);//get size of array

    for(int i=0;i<len;i++)
    {
        int sumtemp=sum;
        sum +=A[i];
        cout<<sumtemp<<"+"<<A[i]<<"="<<sum<<endl;
    }
    return 0;
}