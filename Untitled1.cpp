#include<iostream>
using namespace std;
int main()
{
    while(true)
    {
        int num1,num2;
        char opr;
        cout<<"Enter The First Number"<<endl;
        cin>>num1;
        cout<<"Enter The Second Number"<<endl;
        cin>>num2;
        cout<<"press +  for Addition"<<endl;
        cout<<"press - for Subtraction"<<endl;
        cout<<"press * for Multiplication"<<endl;
        cout<<"press / for Division"<<endl;
        cout<<"press % for Reminder"<<endl;
        cin>>opr;
        if(opr=='+')
            cout<<"The Sum of Number is  = "<<num1+num2<<endl;
        else if(opr=='-')
            cout<<"The Subtraction of Number is = "<<num1-num2<<endl;
        else if(opr=='*')
            cout<<"The Multiplication of Number is  = "<<num1*num2<<endl;
        else if(opr=='/')
            cout<<"The Division of Number is  = " <<num1/num2<<endl;
        else if(opr=='%')
            cout<<"The Quotient of Number is = " <<num1%num2<<endl;
        else
            cout<<"Wrong operation"<<endl;
    }



}
