#include <iostream>

using namespace std;

int main()
{
    int A[2][3]={{2,5,9},{7,3,6}};
    int B[2][3]={{6,3,4},{9,5,2}};
    int result[2][3];
    int rows =  sizeof A / sizeof A[0]; // 2 rows  
    int cols = sizeof A[0] / sizeof(int); // 5 cols
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            result[i][j]=A[i][j]-B[i][j];
        } 
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<result[i][j]<<"\t";
        } 
        cout<<endl;
    }

    return 0;
}