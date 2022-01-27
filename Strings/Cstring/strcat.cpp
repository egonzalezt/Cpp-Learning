#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char *s1 = new char[30];
    char *s2 = new char[30];
    cout<<"Enter string one(without spaces): ";
    cin>>s1;
    cout<<"Enter string two(without spaces): ";
    cin>>s2;
    cout<<strcat(s1, s2);
}