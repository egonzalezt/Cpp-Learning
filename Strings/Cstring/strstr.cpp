#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char s1[20]="Programming";
    char s2[20]="gram";

    /**
     * take care with strstr
     * if there is no substring c++ return an error 
     * so you need to handle it
     */
    if(strstr(s1,s2)!=NULL){
        cout<<strstr(s1,s2)<<endl;
    }else{
        cout<<"Not found"<<endl;
    }
    return 0;
}