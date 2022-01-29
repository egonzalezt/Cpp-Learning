#include <iostream>
using namespace std;

#include "Rectangle.hpp"

Rectangle::Rectangle(){
    length=1;
    breadth=1;
}

Rectangle::Rectangle(int l,int b){
    length=l;
    breadth=b;
}

void Rectangle::setLength(int l){
    length=l;
}

void Rectangle::setBreadth(int b){
    breadth=b;
}

int Rectangle::area(){
    return length*breadth;
}

int Rectangle::perimeter(){
    return 2*(length+breadth);
}

bool Rectangle::isSquare(){
    return length==breadth;
}

Rectangle::~Rectangle(){
    cout<<"Rectangle Destroyed"<<endl;
}

