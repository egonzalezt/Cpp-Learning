# Constructor structure

The good practices to made a good oop is to create classes with this format

```C++
class Rectangle{
    private:
        int length;
        int breadth;
    pubblic:
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