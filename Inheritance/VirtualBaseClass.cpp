#include <iostream>
using namespace std;
  
class A {
public:
    void fun()
    {
        cout << "Fun Function from A"<<endl;
    }
};
  
class B : public virtual A {
};
  
class C : public virtual A {
};
  
class D : public B, public C {
};
  
int main()
{
    D object;
    object.fun();
}