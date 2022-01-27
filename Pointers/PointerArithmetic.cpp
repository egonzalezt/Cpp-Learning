#include<iostream>
using namespace std;

int main1()
{
    int A[]={2,4,6,8,10,12};
    int *p=A;
    
    // move pointer to next location to print 4
    cout<<*++p;
    
    p=p+3; // pointer will be pointing on 10
    
    cout<<p[-4];  // complete this statement to print 2 without moving pointer
    return 0;
}

int main()
{
    int A[5]={2,4,6,8,10};
    int *p=A,*q=&A[4];
    cout<<*p<<endl;
    cout<<endl;
        
    p++;
    cout<<*p<<endl;
    cout<<endl;
        
    p--;
    cout<<*p<<endl;
    cout<<endl;
    cout<<p<<endl;
    cout<<p+2<<endl;
    cout<<endl;
    cout<<*p<<endl;
    cout<<*(p+2)<<endl;
    cout<<endl;
    cout<<q-p<<endl;
    cout<<p-q<<endl;
    
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(A+i)<<endl;//require to use *(A+i) because we need made A+i but then not show the address we need the value for that reason we need *
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(p+i)<<endl;//require to use *(A+i) because we need made A+i but then not show the address we need the value for that reason we need *
    }
    cout<<endl;    for(int i=0;i<5;i++)
    {
        cout<<*p<<endl;
        p++;
    }
    cout<<endl;
    /*
        cout<<A<<endl; prints memory address
        cout<<&A<<endl; prints memory address
        cout<<*A<<endl; prints data from memory address that in this case is the first element that points the array
    */
    return 0;
        
}