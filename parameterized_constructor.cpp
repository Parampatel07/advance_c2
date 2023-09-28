#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int lenght ;
    int width ;
    
    public:
    Rectangle(int l , int w)
    {
        lenght = l ;
        width = w ;
    }
    void get_area()
    {
        int area = 0;
        area = lenght * width ;
        cout<<"\nThe value of area is "<<area;
    }
};

int main()
{
    int user_lenght = 0 , user_width = 0;
    
    cout<<"Enter value of lenght ";
    cin>>user_lenght;
    cout<<"Enter value of width ";
    cin>>user_width;
    Rectangle r1 = Rectangle(user_lenght,user_width);
    r1.get_area();
    Rectangle r2(30,10);
    r2.get_area();
}
