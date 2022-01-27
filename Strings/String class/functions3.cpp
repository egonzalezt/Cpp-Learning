#include <string>
#include <iostream>

using namespace std;

int main(){
    string s="Welcome";

    char str[10];
    s.copy(str,s.length());//copies all string to the array
    cout<<str<<endl;
    
    s.copy(str,3);//copies a portion of the string to the array
    s[3]='\0'; //you need to add the end of the string to avoid strange characters
    cout<<str<<endl;

    string s1 = "Hello world maincra";

    cout<<s1.find_first_of('d')<<endl;
    cout<<s1.find_first_of('m',5)<<endl; //finding starting on the position 5 of the string
    cout<<s1.find_first_of("le")<<endl; // finds the first occurence so finds if l or e appears first 
    cout<<s1.find_last_of("le")<<endl; // finds the last occurence so finds if l or e appears first 

}