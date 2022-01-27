# Input and output operator

Cout and cin to display and read data can be overloaded

Insertion operator

for example we have the class complex that we are using on friend operator or operator overloading and we want to do that:

1. int x=10;
cout<<x<<endl;

The regular way to print 10 in the screen

2. Complex c1(3,7);
cout<<c1<<endl;

C++ know how to display complex number? 

No!! he doesn't know how to do it, for that reason we made 

```C++
void display()
{
	cout<<real<<"+i"<<img;
}
```

but using overloadig we can remove that and only do cout<<c1<<endl;

we need to pass to the new function 

1. Output string object 
2. Complex number object

Also remember that funcion overloading can't receive more than 1 parameter inside the class for that 
reason you need to make them as a friend function

1. create friend function inside class

friend ostream & operator<<(ostream &out,Complex &c);

2. outside class create the overload output function

```C++
ostream & operator<<(ostream &out,Complex &c)
{
    out<<c.real<<"+i"<<c.img<<endl;
    return out;
}
```
passing value as reference to the function because those parameter doesn't belong to that function 

if you want to use all the functions included on cout like that 

cout<<c1<<endl;

you can use void because C++ doesn't understand what is <<endl; for that reason you need to use ostream

