#include<iostream>
using namespace std;

class student 
{
    private:
    int roll_no;
    
    public:
    void get_rollno()
    {
        cout<<"Enter value of Roll no";
        cin>>roll_no;
    }
    void display_rollno()
    {
        cout<<"The value of roll no is "<<roll_no<<endl;
    }
};

class subject1 : public student
{
    public:
    int sub1;
    void get_sub1()
    {
        cout<<"Enter the value of subject1 ";
        cin>>sub1;
    }
    void display_sub1()
    {
        cout<<"the value of subject 1 is "<<sub1<<endl;
    }
};

class subject2 : public student
{
    public:
    int sub2;
    void get_sub2()
    {
        cout<<"Enter value of subject 2 ";
        cin>>sub2;
    }
    void display_sub2()
    {
        cout<<"The value of subject 2 "<<sub2<<endl;
    }
};

class result:public subject1 , public subject2
{
    private:
    int result;
    
    public:
    void get_result()
    {
        result = sub1 + sub2 * 2 / 100;
        cout<<"The value of result is "<<result;
    }
};

int main()
{
    result r1;
    r1.get_sub1();
    r1.get_sub2();
    r1.display_sub1();
    r1.display_sub2();
    r1.get_result();
}
