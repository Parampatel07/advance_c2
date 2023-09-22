//Write a programe to peform swap 
#include<iostream>
using namespace std;
int main()
{
    int number1 , number2 ;
    
    cout<<"Enter value of number1 ";
    cin>>number1;
    cout<<"Enter value of number 2 ";
    cin>>number2;
    
    cout<<"The value of number 1 is "<<number1<<" The value of number 2 is "<<number2;
        
    number2 = number1;
    number1 = number2;
    
    cout<<"\n\nThe value of number 1 is "<<number1<<" The value of number 2 is "<<number2;

}
