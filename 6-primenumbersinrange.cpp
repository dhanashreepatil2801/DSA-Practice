//Program to print all prime numbers in a given range

#include<iostream>
using namespace std;

int main(){
    int start,end;
    cin>>start>>end;

    for(start;start<=end;start++){
        int i;
        for(i=2;i<start;i++){
            if(start%i==0){
                break;
            }
        }
        if(start==i){
            cout<<start<<endl;
        }
    }

    return 0;
}