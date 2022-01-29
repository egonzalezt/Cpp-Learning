class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle();
        Rectangle(int l,int b);
        int getLength(){return length;};
        int getBreadth(){return breadth;};
        void setLength(int l);
        void setBreadth(int b);
        int area();
        int perimeter();
        bool isSquare();
        ~Rectangle();
};