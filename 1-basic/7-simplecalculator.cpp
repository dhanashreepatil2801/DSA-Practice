//program to write a simple calculator

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b;
    char operand;

    cin>>a>>b>>operand;

    switch (operand)
    {
    case '+':
        cout<<a+b<<endl;
        break;
     case '-':
        cout<<a-b<<endl;
        break;
     case '*':
        cout<<a*b<<endl;
        break;
     case '/':
        cout<<a/b<<endl;
        break;
     case '^':
        cout<<pow(a,b)<<endl;
        break;
    default:
        cout<<"Invalid Operator"<<endl;
        break;
    }
    

    return 0;
}