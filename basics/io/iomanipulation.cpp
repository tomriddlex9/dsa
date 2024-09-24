#include <iostream>
using namespace std;

/// Default Printing format
/*
 - No trailing zeroes are printed for a double or floating point value
 - Precision means total digits(exclusing the digits used after e)
 - Default precision value is 6

 - When value before decimal point does not fit in 6 digits, power format is used.
  For example 1234568.3 is printed as 123457e+06
*/

int main()
{
    double x{1.2300};
    // here the trailing zeroes will be omitted an output is 1.23
    cout << x << "\n";
    double y{1567.56732};
    // here only 6 digits are printed and the remaining values are rounded up
    cout << y << "\n";
    double z{1244567.45};
    // here since the number before the value is greater than the precision value 6
    // here in the output, power notation will be used
    cout << z << endl;
    double w = 124456.67;
    // here since the digits before decimal are exactly 6, so the output will omit any
    //  values after the decimal point and round off the last digits
    //  OP = 124457
    double w2 = 124456.23;
    // OP should be 124456
    cout << "w= " << w << " and w2= " << w2 << endl;
    double u = 123e+3;
    cout << u << endl;
}