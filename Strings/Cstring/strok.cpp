//string tokenizer

#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char s1[]="x=10;y=20;z=35";

    //cout<<strtok(s1,"=;")<<endl;//only prints x but i need all the tokens
    //i need to made this repeatedly

    char *token=strtok(s1,"=;");

    while(token!=NULL){
        cout<<token<<endl;
        token=strtok(NULL,"=;");
    }
    /**
     * returns these values
     *
     * x
     * 10
     * y
     * 20
     * z
     * 35
     */
    return 0;
}