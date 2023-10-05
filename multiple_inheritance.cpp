#include<iostream>
using namespace std;

class radius
{
    protected:
    int radius;
    
    public:
    void get_radius(int r)
    {
        radius = r;
    }
};

class height
{
    protected:
    int height;
    
    public:
    void get_height(int h)
    {
        height = h ;
    }
};

class cylinder:public radius , public height
{
    public:
    void get_area()
    {
        int area = (2 * 3.141592 * radius * height) + ( 2 * 3.141592 * (radius * radius));
        cout<<"The value of radius is "<<radius<<endl;
        cout<<"The value of height is "<<height<<endl;
        cout<<"The value of area is "<<area<<endl;
    }
    
};

int main()
{
    cylinder c1;
    c1.get_radius(10);
    c1.get_height(5);
    c1.get_area();
}
