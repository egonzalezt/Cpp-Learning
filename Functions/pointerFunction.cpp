#include<iostream>
using namespace std;
    
void display()
{
    cout<<"Hello"<<endl;
}

int maxF(int x, int y){
    return x>y?x:y;
}

int minF(int x, int y){
    return x<y?x:y;
}
    
int main()
{
	void (*fp)();//declaration
    fp = display;//initialization
    (*fp)();//call
	
    int (*MaxP)(int,int);
    MaxP=maxF;
    (*MaxP)(10,5);
    MaxP=minF;
    (*MaxP)(10,5);

    /**
     * both of them are called maxF and minF are called is like polymorphism
     * a function pointer can points to any functio who has same signature
     */

}