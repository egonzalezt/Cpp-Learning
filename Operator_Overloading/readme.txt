C++ allows you to specify more than one definition for a function name or an operator in the same scope, 
which is called function overloading and operator overloading respectively.

An overloaded declaration is a declaration that is declared with the same name as a previously 
declared declaration in the same scope, except that both declarations have different arguments and obviously different
 definition (implementation).

When you call an overloaded function or operator, the compiler determines the most appropriate definition to use, 
by comparing the argument types you have used to call the function or operator with the parameter types specified in the 
definitions. The process of selecting the most appropriate overloaded function or operator is called overload resolution.


-----------------------------------

Friend function

if are using two or more objects in the parameter. Then we have to
make use of friend.
when both are of same class then we have 2 options.
1. make operator as a member of class
2. make it as friend
when 2 arguments are from different classes then there is only 1
option that is friend function 

based on the code 

if operator+ belongs to class complex

complex c1 or c2 can add on their functions but if you dont want that you need a thirdone the friend for that reason as an example

if i have money, my other frind have money and we need to count it we can call another friend to help them(friend function) to made this work

on C++ when you use friend has this structure in the class

class Complex
{
    private:
	int real;
	int img;
	        
    public:
	Complex(int r=0,int i=0)
	{
		real=r;
	    img=i;
	}
	            
	friend Complex operator+(Complex c1,Complex c2);
	
};

you can't define the logic inside the class must be outside but when you define it you dont need to use c++ scope resolution operator
write it as a normal function

Bad way

Complex::Complex operator+(Complex c1,Complex c2) returns error
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}

Correct way

Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}

the reason is because it doesn't belong to a class is a friend of a class

and finally the function is called normally

Complex c1(5,3),c2(10,5),c3;
c3=c1+c2;

another reason to use it is because you need to work with more than one operator and without using friend operator C++ dont work