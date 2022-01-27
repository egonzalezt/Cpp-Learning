#include<iostream>
using namespace std;


void demo1(){
    int *p= new int[15];
    p[0]=12;
    p[1]=13;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    
    cout<<endl;

    cout<<p[1]<<endl;

    delete []p;
    p=nullptr;//on modern c++ dont works with NULL to delete a pointer you need nullptr
}

int main()
{
    demo1();
	int size;
	cout<<"Enter Number of Elements";
	cin>>size;
    int *p= new int[size];
	delete []p;// we are going to create an array with a larger size if we dont do that we have memory leak
    p = new int[40];
    return 0;
    	
}