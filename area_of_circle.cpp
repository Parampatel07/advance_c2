// Write a programe to create a class to find area of circle with inside the class member function
#include<iostream>
using namespace std;

class Circle 
{
    private:
    int radius ;
    float pi = 3.141592;
    
    public:
    void get_area()
    {
        float answer = pi * radius * radius;
        cout<<"The value of area is "<<answer;
    }
    void get_input()
    {
        cout<<"Enter the value of radius ";
        cin>>radius;   
    }
};

int main()
{
    Circle c1;
    c1.get_input();
    c1.get_area();
}
