#include <iostream> 
using namespace std;
#include <typeinfo>


typedef int LENGTH;
LENGTH length, width, height;

// Driver Code
int main()
{
    cout<<typeid(length).name()<< " ";
    return 0;
}