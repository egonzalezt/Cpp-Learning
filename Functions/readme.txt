Function overloading 

You can create the same functions multiple times but the different is that the parameters are different\

int add(int a,int b){
    return a+b;
}

int add(int a,int b,int c){
    return a+b+c;
}

float add(float a,float b){
    return a+b;
}


int max(int,int)
float max(int,int)

is not function overloading is a name conflic because request the same data type but return different data type 

----------------------

Function template

The objective of function template is to avoid repetitive work because if we have a function and this function is repeated as
a function overloading 5 times because we need it for each datatype it is not the best way to do it and if the logic are the same
why is a good option doing function overloading instead of that we can use template that create a template to work with any 
datatype with out creating lots of functions to do the same thing

see functionTemplate.cpp


--------------------

Default arguments

the main idea of this function is to set a default value in an argument in your code if the user dont pass that paramether or dont put anyting
