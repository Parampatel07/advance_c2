#include<iostream>
using namespace std;

class person
{
    protected:
    int age ;
    public : 
    void get_age()
    {
        cout<<"Enter value of age ";
        cin>>age;
    }
    void display_age()
    {
        cout<<"Your age is "<<age<<endl;
    }
};

class teacher : public person
{
    protected :
    int marks;
    public :
    void get_marks()
    {
        cout<<"enter value of marks ";
        cin>>marks;
    }
    void display_marks()
    {
        cout<<"your marks are "<<marks<<endl;
    }
};

class student : public teacher
{
    protected:
    int report;
    public:
    void get_report()
    {
        get_age();
        get_marks();
        display_age();
        display_marks();
    }
};

int main()
{
    student s1 ;
    s1.get_report();
}
