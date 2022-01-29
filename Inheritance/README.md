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