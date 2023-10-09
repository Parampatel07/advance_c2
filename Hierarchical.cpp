#include<iostream>
using namespace std;

class person
{
    private:
    char name[20];
    public:
    void get_name()
    {
        cout<<"Enter value of name";
        cin>>name;
    }
    void display_name()
    {
        cout<<"The value of name is "<<name<<endl;
    }
};

class student : public person
{
    private :
    int marks;
    public :
    void get_marks()
    {
        cout<<"Enter value of marks ";
        cin>>marks;
    }
    void display_marks()
    {
        cout<<"The value of marks is "<<marks<<endl;
    }
};

class teacher : public person
{
    private:
    int result;
    public:
    void get_result()
    {
        cout<<"Enter the value of result ";
        cin>>result;
    }
    void display_result()
    {
        cout<<"The value of result is "<<result;
    }
};

int main()
{
    student s1;
    s1.get_name();
    s1.get_marks();
    s1.display_name();
    s1.display_marks();
    
    teacher t1;
    t1.get_name();
    t1.get_result();
    t1.display_name();
    t1.display_result();
}
