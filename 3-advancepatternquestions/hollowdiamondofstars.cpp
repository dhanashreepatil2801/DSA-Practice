//    *
//   * *
//  *   *
// *     *
//*       *
//*       *
// *     *
//  *   *
//   * *
//    *

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        cout<<"*";
        for(int j=(2*i)-3;j>0;j--){
            cout<<" ";
        }
        if(i>=2){cout<<"*"<<endl;}
    }

    
    for(int i=n;i>0;i--){
            for(int j=n-i;j>0;j--){
                cout<<" ";
            }
            cout<<"*";
            for(int j=(2*i)-3;j>0;j--){
                cout<<" ";
            }
            if(i>=2){cout<<"*"<<endl;}
        }
    return 0;
}
