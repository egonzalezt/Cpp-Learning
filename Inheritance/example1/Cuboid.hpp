#include "Rectangle.hpp"
//https://stackoverflow.com/questions/21006979/no-default-constructor-exists-for-class-x-inheritance-c
class Cuboid:public Rectangle{
    private:
        int height;
    public:
        Cuboid(int l=0,int b=0,int h=0);
        int getHeight();
        void setHeight(int h);
        int volume();
};