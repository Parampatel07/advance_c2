#include<iostream>
#include<string.h>
using namespace std;

class String1 
{
    private:
    char str[50];  
    int lenght ;
    
    public:
    void read()
    {
        cout<<"Enter your String ";
        cin>>str;
    }
    void print()
    {
        cout<<"The value of String is "<<str<<endl;
        lenght = strlen(str);
    }
    
    void operator+(String1 s)
    {
        String1 j;
        strcpy(j.str,str);
    }
   
    void compare(String1 s1,String1 s2)
    {
        int lenght_s1 = strlen(s1.str);
        int lenght_s2 = strlen(s2.str);
        if(lenght_s1 > lenght_s2)
        {
            cout<<"String 1 is Greater ";
        }
        else if(lenght_s1 < lenght_s2)
        {
            cout<<"String 2 is Greater ";
        }
        else
        {
            cout<<"String 1 and String 2 Both are Same ";
        }
    }
};
int main()
{
  String1 s1,s2;
  s1.read();
  s2.read();
  s1.print();
  s2.print();
  s1.compare(s1,s2);
}
