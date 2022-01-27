#include <iostream>

using namespace std;

int main()
{

    /*
    * for each declaration do 
    * 1. declare a new variable for example x
    * 2. point from which array we are goint to work for example array Y
    * 3. work with x to get the data from Y
    * the possitive think about for each loop is that you dont need to specify the lenght of the array Y it is autonomous.
    * 
    */

    float Y[] ={12,66,1.5,68};
    for(float &x:Y){
        cout<<x<<endl;//prints the ascii code for the character (example 'A' = 65 ASCII code)
    }

    for(float x:Y){
        cout<<x<<endl;//prints the ascii code for the character (example 'A' = 65 ASCII code)
    }
    /*
    * X takes the memory position of current element of the array which means that you can access directly on the array info
    * and modify it that is an advantage because x is not a copy is the direct access to the data 
    * 
    * also you can use x as a reference who gives us the memory location
    */

   return 0;
}