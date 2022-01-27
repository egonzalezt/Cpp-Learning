#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char s1[20]="good";
    char s2[20]="morning";

    strcpy(s2,s1);
    cout<<s2<<endl;
    return 0;

    /**
     * prints good because the content of s1 are copy to s2 removing the information that contains s2
     * 
     */
}