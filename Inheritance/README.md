# Inheritance

## What is?

The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important feature of Object Oriented Programming. 

- Sub Class: The class that inherits properties from another class is called Sub class or Derived Class. 
- Super Class: The class whose properties are inherited by sub class is called Base Class or Super class. 

[Visit geeksforgeeks for more information](https://www.geeksforgeeks.org/inheritance-in-c/)

Example 

you create the design of a car then base on that design you can create a lot of differents models base on the same design

## How it works?

Using inheritance you need first to create a class then create the derivated class 

```C++
class Base
{
    public:
        int x;

        void show(){
            cout<<x<<endl;
        }
};

//Creating derivated class using inheritance

class Derived:public Base{
    public:
        int y;
        void display(){
            cout<<y<<endl;
        }
}
```

Now let's create two objects and see what happens


```C++
int main(){
    
    Base b;
    b.x=25;
    b.show();//prints 25

    Derived d;
    d.x=10;
    d.y=15;
    d.show();//prints 10
    d.display();//prints 15 

    return 0;
}
```

Now why Derived d can do d.x=10; the main reason is because thanks to inheritance the class Derived took the atributes from his father or main class call Base so it tooks the x and the show() then on the derived class you can add more atributes like in this case y and display()


# Modes of Inheritance

1. Public mode: If we derive a sub class from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in derived class.
2. Protected mode: If we derive a sub class from a Protected base class. Then both public member and protected members of the base class will become protected in derived class.
3. Private mode: If we derive a sub class from a Private base class. Then both public member and protected members of the base class will become Private in derived class. 

[Visit geeksforgeeks for more information](https://www.geeksforgeeks.org/inheritance-in-c/)

**Go to See example1 folder and explore the code**

Using Inheritance we get those results

Rectangle

Area is-> 100
Perimeter is-> 40
Rectangle Destroyed

Cuboid 

Length-> 10
Cuboid Area-> 150
Rectangle Destroyed

Now why on cuboid it says Rectangle Destroyed, the main reason is because Cuboid take the structure of Rectangle all their functions and attributes and base on that derives new functions that it is only needed on cuboid 

like this Rectangle has different derivations but share some propierties for example Cuboid is a rectangle but with height so why we need to create the same code that we create on Rectangle instead of inherit that and add the code that makes different Cuboid 

for that reason prints Rectangle deleted inside cuboid because Cuboid is part of Rectangle and share attributes.

## Constructor

When you use constructors using inheritance it is important first define default constructor from the Base class and its derived classes because you will get an error like "No default constructor exists for class x" because when we use inheritance c++ first create the Base class but we need a default constructor to create it then the derived class is created

### Example
```C++
class Base{
    public:
    Base(){
        cout<<"Default constructor of Base"<<endl;
    }
    Base(int x){
        cout<<"Default constructor of Base with params"<<endl;
    }
};

class Derived:public Base{
    public:
    Derived(){
        cout<<"Default constructor of Derived"<<endl;
    }
    Derived(int x){
        cout<<"Default constructor of Derived with params"<<endl;
    }
};

int main(){

    Derived d;

    Derived d1(10);
    return 0;
}
```

when we initialize Derived d; we call default constructor but which is called first Derived class or Base

First is called Base class and prints "Default constructor of Base" and then is Derived class is called and prints "Default constructor of Derived"

Then with Derived d1(10);

printing order
1. Default constructor of Base
2. Default constructor of Derived with params

## Calling Paremetrized constructor from Derived class

To do that we need to create a new constructor from our derived class

```C++
Derived(int x, int y):Base(x){
    cout<<"Default constructor of Derived with params"<<endl;
}
```
and in the main we only need to call the new constructor

```C++
    Derived d2(10,12);
```

Doing that C++ calls do this work, first x=10 and y=12, so C++ sends the value of x to the Parametrized Base constructor and the sends the value of y to the Derived constructor that we build, and thanks to that now it prints


1. "Default constructor of Base with params"
2. "Default constructor of Derived with params"

## isA vs hasA

- HAS-A relationship refers to a class X which has a class Y as a component, probably expressed by placing an instance of class Y as an attribute in every object of class X.

- IS-A relationship refers to a class W which is a class Z, probably because class W is a subclass of class Z, or has class Z somewhere in its inheritance graph. Code which knows how to deal with instances of class Z should be able to handle instances of class W with no code changes required.

1. A car is-a vehicle
2. A car has-a steering wheel

class SteeringWheel
{};

class Vehicle
{
    void doStuff();
};

class Car: public Vehicle
{
    SteeringWheel  sWheel;
    virtual void doStuff();
};

## Access Specifiers 

Access modifiers are used to implement an important aspect of Object-Oriented Programming known as Data Hiding.


C++ has 3 types of acess specifiers

1. Public 

All the class members declared under the public specifier will be available to everyone. The data members and member functions declared as public can be accessed by other classes and functions too. **The public members of a class can be accessed from anywhere**.

2. Private

The class members declared as private **can be accessed only by the member functions inside the class. They are not allowed to be accessed directly by any object or function outside the class.** Only the member functions or the friend functions are allowed to access the private data members of a class. 

3. Protected

Protected access modifier is similar to private access modifier in the sense that it can’t be accessed outside of it’s class unless with the help of friend class, the difference is that the class members declared as **Protected can be accessed by any subclass(derived class) of that class as well.** 

[Visit geeksforgeeks for more information](https://www.geeksforgeeks.org/access-modifiers-in-c/)

let's explore them on a class.

```C++
class Base{
    private:
        int a;
    protected:
        int b;
    public:
        int c;

        void funBase(){
            a=10;
            b=20;
            c=30;
        }
};

class Derived:public Base{
    public:
        funDerived(){
            a=1;//cannot access private
            b=2;//can access protected
            c=3;//can access public
        }
};

int main(){
    Base x;

    x.a=15;//cannot access private
    x.b=30;//cannot access protected
    x.c=90;//access public

    return 0;
}
```

Using the code in the main function we only have access in public variables but the others no because it not part of the object but when we do inheritance we can access to the public and protected but private only can access it on Base class object.

### Why it is important?

Is important to do Access Specifiers because it is important to protect the data because some of that data cannot be modified by the user some information is public for access the information and other is private or protected to avoid problems with permissions like a database some users can modify data but others only has access to read only.

for that reason on Object Oriented exists getters and setters.

## Types of Inheritance

Let's explore the different types of inheritance

![Inheritance types](https://user-images.githubusercontent.com/53051438/151681318-5b56e075-a9ed-4277-99a0-aa65407ba519.png)

1. Single the derived class(b) took the structure from the base class(a)
2. Hierarchical is the same as the single but in this case multiple classes use the base class(a) but the base class(A) is a generalized class.
3. MultiLevel one class is derived from original class but that class is derived from another class. a point can be derived to a circle and a circle can be derived to a Cylinder.
4. Multiple is a Derived class that can take the atributes from multiples classes like Smartphone can inherit Camera, Radio, Calculator,etc.

Also C++ can mix multiple types of inheritance

## Multipart Inheritance

D can use functions from B and C but also can use from A


But here we get an ambiguity that function fun() should be called on B,C or what ever to remove it we have Virtual based classes

### Virtual base class

Virtual base classes are used in virtual inheritance in a way of preventing multiple “instances” of a given class appearing in an inheritance hierarchy when using multiple inheritances.

```C++

class A{

};

class B: virtual public A{

};

class C: public virtual A{

};

class D: public B, public C{

};
```

Thanks to Virtual Base classes class D that is inherit from B and C but they are virtual the problem with fun() function appering on B and C is removed and the ambiguity is fixed