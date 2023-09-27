#include<iostream>
using namespace std;

class abc
{
    public:
    int number1 = 500;  
};

class xyz
{
    public:
    int number2 = 500;
    friend void get_max(abc A , xyz X)
    {
      if(A.number1 > X.number2)
      {
          cout<<"The value of number 1 is greater ";
      }
      else if(A.number1 < X.number2)
      {
            cout<<"The value of number 2 is greater ";
      }
      else
      { 
          cout<<"Both are same ";
      }
    }

};


int main()
{
    abc A ;
    xyz X ;
    
    get_max(A,X);
}
