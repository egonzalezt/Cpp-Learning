# Base Class Pointer Derived Class Object

To understand that let's see an example

```C++
class Base(){
    public:
        void fun1();
        void fun2();
        void fun3();
};

class Derived():public Base{
    public:
        void fun4();
        void fun5();
};
```

if we initialize an object we can do that

```C++
Derived b;

b.fun1();
b.fun2();
b.fun3();
b.fun4();
b.fun5();

```
perfect it's exactly what inheritance it is, but what happen if we do this?

```C++
Base *ptr;//pointer can use on objects
p = new Derived();
```

It is possible that base class pointer points to derived class object?

Yes you can do that. but what happen here, whats the different or the deal with that?

```C++
Base *ptr;
p = new Derived();
p->fun1();
p->fun2();
p->fun3();
/*
 *you cannot call functions different from Base class so you can't call Derived functions.
*/
p->fun4();
```

when you use Base class pointer Derived class object you have a base pointer pointing to derived class the thing is you points to derived class but you only know the base class attributes so there is an example

You have an basic and advanced car 

you can do this 

```C++
BasicCar *p;
p=AdvancedCar;
```

I have an advanced car but I said that is a basic car(thats correct because is derived from basic car inheritance) but I don't know about the advanced functions I only know about basic functions.

you can have base class pointer into an object from derived class attached and only call those functions that are present in the base class.