#include <iostream>

using namespace std;

int main(){

    char S[10]="Hello";
    char S2[]={'H','e','l','l','o','\0'};
    char S3[]={65,66,67,68,'\0'};
    //char *S4="Hello"; //launchs error
    string S5="Hello";
    cout<<S3<<endl;

    char s[20];
    cout<<"Enter your name"<<endl;
    cin>>s;

    char s2[50];
    cout<<"Enter your name"<<endl;
    
    /*
    * using cin.get or cin.getline both are the same but whats the difference with regular cin>>s
    * using cin.get or cin.getline we define the maximun of characters to store so if we code
    * cin.get(s2,50); we only save 50 characters.
    * 
    * using getline helps us if we are going to request more than one time information because getline reads the enter key 
    * so if we press enter the first time using get then the next get doesnt read it.
    * 
    * one solution to solve the problem of:
    * cout<<"Enter your name"<<endl;
    * cin.get(s2,50);
    * cout<<"Enter your last name"<<endl;
    * cin.get(s2,50);
    * 
    * the last name dont request it because we are using get to solve that we can use
    * cout<<"Enter your name"<<endl;
    * cin.get(s2,50);
    * cin.ignore();
    * cout<<"Enter your last name"<<endl;
    * cin.get(s2,50);
    * 
    */
    cin.get(s2,50);
    cin.getline(s2,50);

    return 0;
}