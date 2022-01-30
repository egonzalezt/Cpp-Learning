# Constructor structure

The good practices to made a good oop is to create classes with this format

```C++
class Rectangle{
    private:
        int length;
        int breadth;
    public:
        //Constructor
        Rectangle();
        Rectangle(int l,int b);
        Rectangle(Rectangle &r);

        //Mutator
        void setLength(int l);
        void setBreadth(int b);

        //Accesor
        int getLength();
        int getBreadh();

        //Facilitators
        int area();
        int perimeter();

        //enquiry
        int isSquare();

        //Destructor
        ~Rectangle();
};
```

## Singleton patter on C++

### Definition

***"Singleton is a creational design pattern, which ensures that only one object of its kind exists and provides a single point of access to it for any other code."*** [Taken from refactoring.guru](https://refactoring.guru/design-patterns/singleton/cpp/example)

[Visit tutorialspoint for more information](https://sourcemaking.com/uml/modeling-it-systems/structural-view/generalization-specialization-and-inheritance)
