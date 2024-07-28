#include <iostream>
using namespace std;
static int a = 543;
int ranFunction(int x)
{
    return x + 3;
}
int main(int argc, char const *argv[])
{
    cout << a << endl;
    static int a = 342;
    cout << (ranFunction(a)) << endl;
    return 0;
}
