# Pointers

Pointer is a variable which **is used to store address of data**.

1. Data variable -> int x=10;   ->  2 bytes of memory located in stack position 0x3e935ff9b4 (example memory address)

2. Address variable -> int *p; (with the * prefix **indicates that store the address**)

p = &x; (this means that on p it store the address of x that is 0x3e935ff9b4) points to x

**View pointerBasics.cpp**

X value 10
X address **0x40a77ff7cc**
X address stored in p **0x40a77ff7cc**
P address ***0x40a77ff7c0***
X value accessed by p 10


in summary how it works

1. declare a ponter -> int *p;
2. set value to pointer -> p = &x (note use '&' to **give to the pointer the memory address**)
3. get address of the pointer not the variable that we are making reference &p
4. get data value from the pointer -> cout<<*p<<endl; (prints 10 because is the value that we set on x)

Declaration: int *p;

Initialization p=&x;

dereferencing cout<<*p;

## Why pointers 

- The main reason of pointers is to **accessing heap memory because programs can access heap only using pointers**

- To access to IO devices we need pointers because is the only way to access to that data

- Another reason to use pointers is because programming languajes works with Stacks which means that information can be accessed one time after that information will be cleared, because it works as stack Arithmetic so if you need that information for example the information on a single array if you don't wanna lost it, you need to use pointers because pointers store information on the heap and the positive thing with **heap is that your information keeps as long as your code is running** and stack this thing doesn't works like that.

**Stack -> int A[5]={1,2,3,4,5};**

**Heap -> int *p;**

p= new int[5];

or

int *p=new int[5];

BUT if you don't want it all the program that information on the HEAP is **fundamental to deallocate it.**

to deallocate that you need to do this:

```C++
delete []p;

*p = null; //(this does not work)
p = null; //(this does it work)
```
if you dont deallocate memory when you dont need it more you will have **Memory leak problem**

Example 

you use a pointer on a funcion but this information is needed only when the funcion is used when you dont need more the function, that pointer must be delete it because if you stop using that funcion you will have a memory leak because that information on the heap any pointer is not referencing that so that information is loss and consuming space (no pointer means no memory use )

## Pointer Arithmetic

The pointers in c++ also have Arithmetic operations but take care with them because is not the same as regular pointer operations

like p+=1.

In c++ pointers have only 5 operations.

int A[5]={1,2,3,4,5};
int *p = A; 

int *q = &A[3];

1. P++; if our pointer is pointing to one memory location in this case A and A location is 0xbf339ff6a8 P++ not means 0xbf339ff6a9.

this is bad P++ makes that the pointer **save the next memory location available in this case the next memory location that stores the next element in the array**.

2. P--; The same as P++;

3. P=P+2; Moves the pointer forwards by 2 elements is like we do the same as P++; but two times

4. P=P-2; Moves the pointer backwards by 2 elements

5. D = Q-P; this operation takes the address of each pointer for example 

Q = 206 address
P = 200 address

206 - 200 = 6/2 it devided by 2 because they are integers and the size of the integer are 2 

finally 206-200 = 6/2 = 3 that means p and q are 3 elements away each other(distance or number of elements between two pointers)

if the result of the operation is negative like P-Q = -3 means that P is the near pointer and Q is the fartest pointer

Multiplication, division or whatever it does not makes sense, but for example P++ it makes sense because we need to go to the next operator

## problems with pointers

There are 3 problems that may occur during runtime or testing that you should avoid if you are using pointers.

1. Uninitialized pointer.

```C++
int *p; 
p=10; 

```
it does not work because we are assign a value to p that is a **pointer that is poiting to nothing**.

if we dont initialize a pointer we should have an error and for that reason there are some ways to avoid that problem

Possible ways to solve it

1. 
```C++

int *p; 

int x=10;

p=&x;
```
2. 
```C++
p= int*0x5438; 
```
gives directly a memory location to point

3. 
```C++
p= new int[5]
```
you can dynamically deallocate using the heap memory so you can create an array to initialize

## Reference

A reference **is a nickname or alias of a variable**.

```C++

int x=10;

int &y = x; 
```

the same memory is shared by x and y because they are pointing to the same address

cout<<x; prints 10
cout<<y; prints 10

reference doesn't consume any memory extra my parents house belongs to my mother and my father

**you can't overname or change nickname to be part of another variable**

### notes

size of a pointer is independent of its data type. int *p1; or float *p2; or char *p3; all takes 8 bytes in latest compilers.

If the size of int is 4 bytes and p is a pointer to an integer then ++p will move p by ____________ bytes   

pointer increment will move the pointer depending on the data type of pointer. int is 4 bytes so pointer will move by 4 bytes. if pointer is char type then it will move by 1 byte

```C++

int x=10;   

int *y=&x;   

int * &z=y;   
```
x is a variable. y is a pointer variable(nickname or reference), pointing to x.
z is a reference to a pointer variable. int *&z=y; means z is another name of y. 
now y and z are 2 names of same pointer.
