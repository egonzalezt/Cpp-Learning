#include <iostream>

using namespace std;

typedef int marks;
int main()
{

    marks m1,m2;

    int A[2][3]={{2,5,9},{7,3,6}};
    /*
        it is important to use a reference because j needs that pointer to access to the cols and i is the rows

        for modifying array reference should be used. for(int &x:A)

    */
    for(auto& i:A){
        for(auto& j:i){
            cout<<j<<"\t";
        }  
        cout<<endl;
    }

    return 0;
}