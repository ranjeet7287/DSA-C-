// Power
// Send Feedback
// Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.
// Do this recursively.
// Input format :
// Two integers x and n (separated by space)
// Output Format :
// x^n (i.e. x raise to the power n)
// Constraints :
// 0 <= x <= 30
// 0 <= n <= 30
// Sample Input 1 :
//  3 4
// Sample Output 1 :
// 81
// Sample Input 2 :
//  2 5
// Sample Output 2 :
// 32

#include<iostream>
using namespace std;
int Power(int x,int n)
{
    // Base Case
    if(n==0){
        return 1;
    }
    // Recursive Call 
    int small=Power(x,n-1);
    return x*small;
}
int main()
{
    int x,n;
    cin>>x>>n;
    int ans=Power(x,n);
    cout<<ans;
    return 0;
}