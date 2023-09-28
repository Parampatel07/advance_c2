#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int lenght ;
    int width ;
    
    Rectangle()
    {
        lenght = 10;
        width = 20;
        cout<<"\nTHe value of lenght is 10 and width is 20..normal constructor";
    }
    Rectangle(int l, int w)
    {
        lenght = l;
        width = w ;
        cout<<"\nThe value of lenght is "<<lenght<<" and width is "<<width<<"..parameterized constructor";
    }
    Rectangle(Rectangle &o)
    {
        lenght = o.lenght;
        width = o.width;
        cout<<"\nThe value of lenght is "<<lenght<<" and width is "<<width<<"..copy constructor";
    }
};

int main()
{
    Rectangle r1 ;
    Rectangle r2(30,10);
    Rectangle r3(r1);
}
