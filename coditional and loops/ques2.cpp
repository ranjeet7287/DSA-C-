#include<iostream>
using namespace std;
int main()
{
    int x = 15;
    if(x <= 15) 
    {
        cout << "Inside if ";
    }else if(x == 15){
        cout << "Inside else if ";
    }
    cout << x;
}

// Inside if 15
/*
<---------------Solution Description----------------------->
The condition inside if is true, hence statement "Inside if" will be printed.
After that,
we'll directly jump to statement : cout << x. So, after that 15 will be printed
*/