#include <iostream>

using namespace std;

class Rectangle
{
    public:
        int length;
        int breadth;
        
        int area(){
            return length*breadth;
        } 
        int perimeter(){
            return 2*(length+breadth);
        }
};

int main(){
    Rectangle r;
    Rectangle *p;

    p=&r;

    r.length=10;
    p->length=10;
    p->breadth=5;
    cout<<p->area()<<endl;

    //creating rectangle inside heap

    Rectangle *p1;//every pointer takes two bytes
    p1=new Rectangle;//object saved in heap

    Rectangle *q = new Rectangle();
    
    p1->length=10;
    p1->breadth=6;
    cout<<p1->area()<<endl;

    return 0;
}