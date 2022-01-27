#include <iostream>

using namespace std;

class Rectangle
{
    private://by default everything is private
        int length;
        int breadth;
    public:
   
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
    Rectangle r1;
    r1.setLength(10);
    r1.setBreadth(5);
    cout<<"Area is-> "<<r1.area()<<endl;
    cout<<"Perimeter is-> "<<r1.perimeter()<<endl;

    Rectangle *p1;//every pointer takes two bytes
    p1=new Rectangle;//object saved in heap
    
    p1->setLength(10);
    p1->setBreadth(6);
    cout<<p1->area()<<endl;

    return 0;
}