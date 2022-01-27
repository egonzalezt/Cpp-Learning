#include <iostream>

using namespace std;

int main()
{
    int A[5]={1,2,3,4,5};//set default values
    for (int i=0;i<5;i++){
        cout<<A[i]<<endl;
    }

    float Decimals[5]={1.1,1.2,1.3,1.4,1.5};
    for(float x:Decimals){
        cout<<x<<endl;

    }

    float X[]={2.5f,4.5,5.6f,7};
    /*
    * The easiest way to loop and array if you don't know with data type the array is you can 
    * make c++ detect the type like int, float, string,etc.. using auto
    */
    float X[]={2.5f,4.5,5.6f,7};
    for(auto x:Decimals){
        cout<<x<<endl;

    }

    char Y[] ={'A',66,'C',68};
    for(int x:Y){
        cout<<x<<endl;//prints the ascii code for the character (example 'A' = 65 ASCII code)
    }

   return 0;
}