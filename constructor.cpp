#include<iostream>
using namespace std;

class Rectangle
{
    private:
    
    int height ;
    int base ;
    
    public:
    Rectangle()
    {
        height = 50  ;
        base = 35 ;
        cout<<"Constructor called"<<endl;
    }
    void get_area()
    {
        int area = height * base;
        cout<<"The value of area of Rectangle is "<<area;
    }
};

int main()
{
    Rectangle r1;
    r1.get_area();
}
