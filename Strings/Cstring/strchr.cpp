#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char c1[]="Programming";

    cout<<strchr(c1,'m')<<endl;

    cout<<strrchr(c1,'m')<<endl;

    return 0;
}