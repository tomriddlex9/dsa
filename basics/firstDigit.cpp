#include <iostream>
using namespace std;

inline int firstDigit(int n)
{
    while (n >= 10)
    {
        n /= 10;
    }
    return n;
}
int main()
{
    // main code goes here
    int n;
    cin >> n;
    cout << firstDigit(n) << endl;
    return 0;
}