//    1
//   2 2
//  3 3 3
// 4 4 4 4
//5 5 5 5 5
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}