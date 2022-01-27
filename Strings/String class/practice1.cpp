#include <string>
#include <iostream>

using namespace std;

int main(){
    string str="WeLCOmE";

    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }

    cout<<str<<endl;

    string str2="welcome7";

    for(int i=0;str2[i]!='\0';i++){
        if(str2[i]>=97&&str2[i]<=122)
        {
            str2[i]-=32;
        }
    }

    cout<<str2<<endl;
}