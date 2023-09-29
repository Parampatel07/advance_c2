#include<iostream>
using namespace std;
class Student
{
    private:
    int age;
    int roll_no;
    
    public:
    Student(int a = 18 , int Rno = 0)
    {
        age = a ;
        roll_no  = Rno ;
    }
    void Print_data()
    {
        cout<<"The value of age is "<<age<<endl;
        cout<<"The value of roll_no is "<<roll_no<<endl;
    }
};

int main()
{
    Student s1(20,40);
    s1.Print_data();
}
