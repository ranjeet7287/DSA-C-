#include <iostream>
using namespace std;
int main()
 {
    int a = 10, b = 20, c = 30;
    if(a <= b && !b) {
        cout << "hello";
    }
    else if(c >= a && c >= b) {
        cout << "hi";
    }
    else {
        cout << "hey";
    }
}
// hi
/*
Solution Description
a <= b evaluates to true, but !b evaluatesto false 
(! operator negates the value, b is non-zero and hence !b becomes 0 which is false). 
For AND operator ("&&"), all the condition must be true. 
So we'll move to else if condition which evaluates to be true as both 
conditions (c >= a and c >= b) are true.
Hence, "hi" will be printed.
*/