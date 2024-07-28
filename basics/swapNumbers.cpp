#include <iostream>
using namespace std;

// swapping using a temporary variable
void swapbasic(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// swapping using simple addition of the two variables and programming mathematics
void swapAddition(int *x, int *y)
{
    *x += *y;
    *y = *x - *y;
    *x = *x - *y;
}
int main()
{
    // main code goes here
    int a = 43;
    int b = 76;
    cout << "a = " << a << " b = " << b << endl;
    swapbasic(&a, &b);
    cout << "a = " << a << " b = " << b << endl;
    swapAddition(&a, &b);
    cout << "a = " << a << " b = " << b << endl;
}