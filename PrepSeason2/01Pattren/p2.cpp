//  N = 5
//     1
//    23
//   345
//  4567
// 56789
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i+1;k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<i+j+1;
        }
        cout<<endl;
    }
}