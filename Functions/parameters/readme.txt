Passing by value

using by value you made a copy of the values and modify that copy but when you see the original one the values are not changed

because you modify the copy not the original one

------------------------

Passing by address

to work with address we need pointers

The word address is the key here because if we call a function and we send it the address of our variables in this case 
we dont create a copy of our variables in this case we work with our original variables and for that reason we use pointers 
points to original variable address so when that variable is modified the original also changed

------------------------

Passing by reference

Inner line functions

take care with this kind of way

by reference is powerfull because as we remember using reference is like a nick name for the variable so in this example

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x=10,y=20;
    swap(x,y);
    cout<<"X: "<<x<<" Y: "<<y<<endl;
}

a is the nick name of x and b is the nick name of y the thing is C++ when you use references on functions it copy the funcion and made part of the funtion 

so lets see base on the example

int main()
{
    int x=10,y=20;
    void swap(int &a,int &b){
        int temp = a;
        a = b;
        b = temp;
    }   
    cout<<"X: "<<x<<" Y: "<<y<<endl;
}

so in the code if replace the call of the function and made a copy of swap function so c++ not need to add a and b in the stack as part of swap 
because now swap is part of the main function so x can be called a and the same for y.