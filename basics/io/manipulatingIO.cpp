#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // using various io manipulation functions like
    //  setprecision(n), showpoint, showpos, uppercase , nouppercase

    // sets the current precision from default 6, to the supplied value
    cout << std::setprecision(4);
    double x{15.5683}, y{34424.5};
    cout << "x= " << x << "y= " << y << "\n";
    double z = 12.34340000;
    // changing the precision to 12
    cout << setprecision(12);
    // here even after setting the precision high, it wont show the trailing zeroes
    cout << z << endl;
    // here we use showpoint, it will show trailing zeroes until the precision digits
    //  which here are now set to 12 instead of the default 6
    cout << showpoint << z << endl;
    // removes the case of showing trailing zeroes after the point or the decimal

    cout << noshowpoint << z << endl;
    // now,using showpos will show a positive sign if the number stored is positive else negative
    cout << showpos << z << endl;
    cout << -1 * z << endl;
    // here instead of using the normal "e", it will use the uppercase "E" to show exponent
    cout << uppercase << z << endl;
    cout << nouppercase << z << endl;
}