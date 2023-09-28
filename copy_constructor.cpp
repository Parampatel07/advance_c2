#include<iostream>
using namespace std;
class Rectangle 
{
    public:
    int length;
    int width ;
    
    Rectangle(Rectangle &o)
    {
        length = o.length;
        width = o.width;
    }
    void get_area()
    {
        int area = length * width;
        cout<<"The value of area is "<<area;
    }
};

int main()
{
    Rectangle r1(r1) ;
    r1.length = 10;
    r1.width = 10;
    Rectangle r2(r1);
    r2.get_area();
}
