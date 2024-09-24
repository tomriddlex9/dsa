#include <iostream>
using namespace std;
int main()
{
    // main code goes here
    int i;
    char c;
    double d;
    short int si;
    long int li;
    float f;
    bool b;
    int *pi = new int(10);
    double *pd = new double(32.43);
    cout << "int: " << sizeof(i) << endl;
    cout << "short int: " << sizeof(si) << endl;
    cout << "long int: " << sizeof(li) << endl;
    cout << "char : " << sizeof(c) << endl;
    cout << "double: " << sizeof(d) << endl;
    cout << "float: " << sizeof(f) << endl;
    cout << "bool: " << sizeof(b) << endl;
    cout << "integer pointer: " << sizeof(pi) << endl;
    cout << "double pointer: " << sizeof(pd) << endl;
}