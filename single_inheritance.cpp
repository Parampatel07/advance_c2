// Example of Single Level Inheritance 
#include<iostream>
using namespace std;
class person
{
    public:
    float weight;
    int age;
    
    void get_data()
    {
        cout<<"Enter value of age ";
        cin>>age;
        cout<<"Enter value of weight ";
        cin>>weight;
    }
    
    void display()
    {
        cout<<"The value of age is "<<age<<endl;
        cout<<"The value of weight is "<<weight<<endl;
    }
};

class student : public person
{
    public:
    int marks,roll_no;
    
    void get_student_data()
    {
        cout<<"Enter the value of marks ";
        cin>>marks;
        cout<<"Enter value of roll no";
        cin>>roll_no;
    }
    
    void display_student_data()
    {
        cout<<"The value of marks is "<<marks<<endl;
        cout<<"The value of roll no is "<<roll_no<<endl;
    }
};

int main()
{
    student s1 ;
    s1.get_data();
    s1.get_student_data();
    s1.display();
    s1.display_student_data();
}
