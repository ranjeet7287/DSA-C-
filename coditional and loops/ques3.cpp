#include <iostream>
using namespace std; 
int main()
{
        int var1 = 5; 
        int var2 = 6;
        if ((var2 = 1) == var1)
           cout << var2;
        else 
            cout  << (var2 + 1); 
}
// output will be 2 
/*  
            <-----Solution Description------->
Inside if condition, we are doing if((var2 = 1) == var1),
So first 1 will be assigned to var2 and then it'll be compared with var1. 
Before comparison, var2 = 1 and var1 = 5, which are not equal.
So, we'll move to else part and there the value of (var2 + 1) i.e. 2 will be printed.
*/