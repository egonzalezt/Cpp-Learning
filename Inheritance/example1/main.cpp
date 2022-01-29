#include <iostream>
using namespace std;

#include "Cuboid.hpp"


int main(){
    Rectangle *r1= new Rectangle(10,10);
    cout<<"Rectangle"<<endl<<endl;
    cout<<"Area is-> "<<r1->area()<<endl;
    cout<<"Perimeter is-> "<<r1->perimeter()<<endl;
    r1->~Rectangle();
    cout<<endl;
    Cuboid *c = new Cuboid(10,5,3);
    cout<<"Cuboid"<<endl<<endl;
    cout<<"Length-> "<<c->getLength()<<endl;
    cout<<"Cuboid Area-> "<<c->volume()<<endl;
    c->~Rectangle();
    return 0;
}