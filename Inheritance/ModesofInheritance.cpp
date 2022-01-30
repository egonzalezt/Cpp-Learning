#include<iostream>
using namespace std;

class Parent
{
    private: int a;
    protected: int b;    
    public: int c;

    void funParent()
    {
        a=10;
        b=5;
        c=15;
    }
    
};
    
class Child: private Parent
{
    private:
    protected:
    public:

    void funChild()
    {
        //a=10; //Not accesible from Parent
        b=5;
        c=15;
    } 
	     
};
    
class GrandChild : public Child
{
    public:
    void funGrandChild()
    {
        //A,B,C not accesible because Child is private we cannot took private data
        //a=10;
        //b=5;
        //c=20;
    }
    
};
    
int main()
{
    /*
    * Imposible to do because is inaccessible because is private which means that parent is private so a,b and c 
    * cannot be accessed.
    */
   
    //Child c;
    //c.a=10;
    //c.b=5;
    //c.c=20;
        
}
    