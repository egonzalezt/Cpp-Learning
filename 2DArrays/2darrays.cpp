#include <iostream>

using namespace std;

int main()
{
    int arr2d[2][2];//2x2 matrix

    //access or setting value

    arr2d[1][2]=2;

    int arr2d2[2][3]={{2,5,9},{6,9,15}};
    //is the same as
    int arr2d2v2[2][3]={2,5,9,6,9,15};
    int arr2d2v3[2][3]={2,5};//the other values set automatically as 0

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr2d2[i][j]<<"\t";
        } 
        cout<<endl;
    }

    return 0;
}