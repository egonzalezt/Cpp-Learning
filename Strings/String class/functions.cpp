#include <string>
#include <iostream>

using namespace std;

int main(){
    string str="hello";
    cout<<"Your string length-> "<<str.length()<<endl;

    cout<<"Your string size-> "<<str.size()<<endl;

    cout<<"Your string capacity-> "<<str.capacity()<<endl;

    str.resize(25);

    cout<<"Your string capacity resized-> "<<str.capacity()<<endl;

    cout<<"Maximun string size that you have in your C++ compiler-> "<<str.max_size()<<endl;

    str.clear();

    cout<<"Your string has been cleared-> "<<str.size()<<endl;

    if(str.empty()){
        cout<<"String is empty"<<endl;
    }else{
        cout<<"String is not empty"<<endl;
    }
}