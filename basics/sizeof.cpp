#include <iostream>
using namespace std;
int calcArrayElements(int *a);
int main(int argc, char const *argv[])
{
    cout << "No.of Bytes taken by char: " << sizeof(char) << "\n";
    cout << "No.of Bytes taken by int: " << sizeof(int) << "\n";
    cout << "No.of Bytes taken by short int: " << sizeof(short int) << "\n";
    cout << "No.of Bytes taken by long int: " << sizeof(long int) << "\n";
    cout << "No.of Bytes taken by float: " << sizeof(float) << "\n";
    cout << "No.of Bytes taken by double: " << sizeof(double) << "\n";
    int a[] = {0, 4234, 45, 43, 534, 534};
    cout << sizeof(a) / sizeof(a[0]) << endl;
    calcArrayElements(a);
    return 0;
}

int calcArrayElements(int *a)
{
    cout << sizeof(a) << endl;
    int arraySize = sizeof(a) / sizeof(a[0]);
    cout << "The number of elements in the array are: " << arraySize << " \n";
    return arraySize;
}