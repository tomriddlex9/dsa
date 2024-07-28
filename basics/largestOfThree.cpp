#include <iostream>
using namespace std;
int largestOfThree(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main()
{
    // main code goes here
    int a{34}, b{54}, c{65};
    cout << largestOfThree(a, b, c) << endl;
}
