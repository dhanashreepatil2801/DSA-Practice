//Program to checkif given number is prime or not

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i;

    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not a Prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Is a Prime"<<endl;
    }

    return 0;
}