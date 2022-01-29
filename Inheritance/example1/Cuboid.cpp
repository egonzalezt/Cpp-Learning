#include "Cuboid.hpp"

Cuboid::Cuboid(int l,int b,int h){
            height=h;
            setLength(l);
            setBreadth(b);
}

int Cuboid::getHeight(){
    return height;
}

void Cuboid::setHeight(int h){
    height=h;
}

int Cuboid::volume(){
    return getLength()*getBreadth()*height;
}