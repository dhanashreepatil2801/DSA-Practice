//    *****
//   *   *
//  *   *
// *   *
//*****

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int j=n;j>0;j--){
            if(i==1 || i==n || j==1 || j==n){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}