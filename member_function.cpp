#include<iostream>
using namespace std;

class triangle
{
  private:
  int height = 10, base =20 ;
  
  public:
  void get_input();
  void get_area();
};

void triangle :: get_input()
{
    cout<<"Enter value of height ";
    cin>>height;
    cout<<"Enter value of base ";
    cin>>base;
}

void triangle :: get_area()
{
    int answer ;
    answer = height * base / 2 ;
    cout<<"The value of answer is "<<answer;
}

int main()
{
    triangle t1 ;
    t1.get_input();
    t1.get_area();
}
