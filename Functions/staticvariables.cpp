/**
 * global variable has 2 propierties
 * 1. remains in the memory during runtime execution
 * 2. can be accessed by all the functions 
 * 
 * but if i need static variables, what is static variable.
 * 
 * 1. remains in the memory during runtime execution
 * 2. can't be accessed by all the functions only in the function where is created
 * 
 * the variable is initializated only one time so if you have static int i = 0; that piece of code occurs only one time
 * 
 * remember global variable not storage in stack or heap it stores in code
 */

#include<iostream>
using namespace std;
    
void fun()
{
	static int s=10;
	s++;
	    
	cout<<s<<endl;
}
    
int main()
{
	fun();
	fun();
	    
}
    