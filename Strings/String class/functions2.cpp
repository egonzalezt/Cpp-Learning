#include <string>
#include <iostream>

using namespace std;

int main(){
    string str="hello";
    cout<<str<<endl;
    str.append(" world");
    cout<<str<<endl;
    str.insert(3,"test");
    cout<<str<<endl;
    cout<<endl;
    string s="programming";
    cout<<s<<endl;
    s.replace(3,4,"aa");
    cout<<s<<endl;

    string s1="programming";
    string s2="languaje";

    s1.swap(s2);

    cout<<s1<<endl;
    cout<<s2<<endl;

}