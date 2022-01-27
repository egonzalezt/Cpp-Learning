Object-Oriented Programming 

Principals 

1. Abstraction
2. Encapsulation
    2.1 Data hiding
3. Inheritance
4. Polymorphism

Basic structure

Class oop{
    Private:
    1. Data
    Public:
    2. Functions()
}

class of classification

for example in a class

those students belongs to computer science

those students belongs to electronics

these group are students
these group are teachers

class car 

object BMW
object AUDI


each instance is an object of the class

----------------------

Writing a Class


class rectangle{
    int length;
    int breadth;

    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle r1,r2;

    r1.length=10;
    r1.breadth=5;

    cout<<r1.area()<<endl;//prints 50
    return 0;
}

-----------------------------------------

Using Stack -> Rectangle r;

Using Heap -> Rectangle *r = new Rectangle();

in java all objets store in heap 

only c++ gives you this two options


-----------------------------------------

Contructors

1. Default Constructor = buildin constructor, compiler provided constructor
2. Non-Parameterized Constructor.
3. Parameterized Constructor.
4. Copy Constructor.

Copy Constructor (Danger)


If you wanna create a copy constructor take care because it is very dangerous 

for example

class Test{
    int a;
    int *p;

    Test(int x){
        a=x
        p=new int [a];
    }

    Test(Test &t){
        a=t*a;
        p=t*p;
    }
}

there is a huge problem here, if you initialize a copy constructor the problem
is that in this case your new object now points array p from your original object that it does not have sense 
new object must create a new array not use the others array so for that reason you need to take care of that

class Test{
    int a;
    int *p;

    Test(int x){
        a=x;
        p=new int [a];
    }

    Test(Test &t){
        a=t*a;
        p=new int[a];//now it's sparated
    }
}

-------------------------
Scope Resolution Operator

lets see an example

class Rectangle
{
    private://by default everything is private
        int length;
        int breadth;
    public:
        /**
         * C++ accepts overload constructors
         */

        //Non-Parameterized Constructor.
        Rectangle(){
            length=0;
            breadth=0;
        }
        //Parameterized Constructor.
        Rectangle(int l=0,int b=0){
            setLength(l);
            setBreadth(b);
        }

        //Copy Constructor.
        Rectangle(Rectangle &r){//where it points to get data
            length=r.length;
            breadth=r.breadth;
        }

        void setLength(int l){
            if(l>0){
                length=l;
            }else{
                length=0;
            }
        }

        void setBreadth(int b){
            if(b>=0){
                breadth=b;
            }else{
                breadth=0;
            }
        }

        int getLength(){
            return length;
        }

        int getBreadth(){
            return breadth;
        }

        int area(){
            return length*breadth;
        }

        //Function prototype
        int perimeter();
};

//Scope Resolution
int Rectangle::perimeter(){
    return 2*(length+breadth);
}

int main(){

    Rectangle r1(10,5);
    cout<<"Area is-> "<<r1.area()<<endl;
    cout<<"Perimeter is-> "<<r1.perimeter()<<endl;

    Rectangle *p1;//every pointer takes two bytes
    p1=new Rectangle(r1);//object saved in heap using copy constructor
    
    cout<<p1->area()<<endl;

    return 0;
}

Scope Resolution Operator is when you define the logic of your function outside of your class but when you made it inside is not that

what is the problem 

1. if you dont use Scope Resolution Operator when you call a method on your class that code will be copy on the place where is called
but when you use Scope Resolution Operator it create the necesary machine code to call it outside the place where is needed that is much better

if the function is inside the class are called as inline function dont use it if you have a complex logic 


-------------------------

This pointer

we have this constructor

Rectangle(int length,int breadth)
{
	length=length;
	breadth=breadth;
}

which one belongs to the Paramethers and which one belongs to Rectangle 

to solve that and make it more clear we need to use this->

Rectangle(int length,int breadth)
{
	this->length=length;
	this->breadth=breadth;
}

this->length 
this->breadth

those refers to the private or public variables defined in the class

length;
breadth;

those are the paramethers from the constructor

Note see thisPointer.cpp

--------------------------------

Structure vs Class

they are very similar 

in c you only have data members not Functions

struct Demo
{
    //data is public by default 
    // instead of a class that is private by default
    int x;
    int y;
    
    //only on c++ not works in c
    void display(
        cout<<x<<" "<<y<<endl;
    )
}