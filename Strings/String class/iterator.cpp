#include <string>
#include <iostream>

using namespace std;

int main(){
    string s="welcome";

    string::iterator it;

    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }

    for(it=s.begin();it!=s.end();it++){
        *it=*it-32;//convert the letter to upper case
    }
    cout<<s<<endl;


    string s2="welcome";

    string::reverse_iterator it2;

    for(it2=s2.rbegin();it2!=s2.rend();it2++){
        cout<<*it2<<endl;
    }

    string s3="programming";
    
    for(int i=0;s3[i]!='\0';i++){
        cout<<s3[i]<<endl;
    }


    char str[] = "Pointers are fun and hard";
    char *p;
    int i;

    p = str;

    /* loop until null is found */
    for(i = 0; p[ i ]!= '\0'; i++)
        printf("%c", p[ i ]);


    cout<<endl;
    cout<<endl;

    //get string length

    string s4="welcome";

    string::iterator it4;
    int count=0;
    for(it4=s4.begin();it4!=s4.end();it4++){
        count++;
    }
    cout<<count<<endl;

    cout<<endl;

    char s5[] = "testesth";

    char * t; // first copy the pointer to not change the original
    int size = 0;

    for (t = s5; *t != '\0'; t++) {
        size++;
    }

    cout<<size<<endl;

    string s6 = "WELCOME";

    int count2=0;

    for(int i=0;s6[i]!='\0';i++){
        count2++;
    }
    cout<<count2<<endl;

    return 0;
}