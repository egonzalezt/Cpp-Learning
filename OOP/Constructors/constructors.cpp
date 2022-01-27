#include <iostream>

using namespace std;

class Rectangle
{
    private://by default everything is private
        int length;
        int breadth;
    public:
        /**
         * C++ accepts overload constructors
         */

        //Non-Parameterized Constructor.
        Rectangle(){
            length=0;
            breadth=0;
        }
        //Parameterized Constructor.
        Rectangle(int l=0,int b=0){
            setLength(l);
            setBreadth(b);
        }

        //Copy Constructor.
        Rectangle(Rectangle &r){//where it points to get data
            length=r.length;
            breadth=r.breadth;
        }

        void setLength(int l){
            if(l>0){
                length=l;
            }else{
                length=0;
            }
        }

        void setBreadth(int b){
            if(b>=0){
                breadth=b;
            }else{
                breadth=0;
            }
        }

        int getLength(){
            return length;
        }

        int getBreadth(){
            return breadth;
        }

        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
};

int main(){
    Rectangle r1(10,5);
    cout<<"Area is-> "<<r1.area()<<endl;
    cout<<"Perimeter is-> "<<r1.perimeter()<<endl;

    Rectangle *p1;//every pointer takes two bytes
    p1=new Rectangle(r1);//object saved in heap using copy constructor
    
    cout<<p1->area()<<endl;

    return 0;
}