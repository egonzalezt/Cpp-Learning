#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char s1[]="235";
    char s2[]="54.78";

    long int x =strtol(s1,NULL,10);//number 10 is the base of the number in this case decimal numbers
    float y = strtof(s2,NULL);

    /**
     * always remember check or handle the error because the number could not be a number 
     * instead of that are characters or text
     */
    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
}