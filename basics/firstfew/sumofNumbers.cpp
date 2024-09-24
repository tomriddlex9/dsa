// program to find the sum of natural numbers upto 'n'

#include <iostream>
using namespace std;

// sum of n natural number using a basic loop
//  time complexity = O(n) , space complexity = O(1)
int sumBasic(int n)
{
    long long sum{0};
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

// this is a slightly better method that uses the mathematical formula
// to calculate the sum, but it can cause overflow errors or random errors
// when used without bigger storage buffer, because of n*(n+1)

// time complexity = O(1) , space complexity = O(1)
long long sumFormula(int n)
{
    long long sum = 1LL * (n * (n + 1)) / 2;
    return sum;
}

// this method is the best since it dodges the possibility of overflow
// by first performing the division operation and then doing the product
// also uses 1LL (value 1 of type long long) for type inference to long long

// time complexity = O(1) , space complexity = O(1)
long long sumBest(int n)
{
    long long sum{0};
    // if n is even,then divide n else divide n+1
    if (n % 2 == 0)
    {
        sum = (n / 2) * 1LL * (n + 1);
    }
    else
    {
        sum = ((n + 1) / 2) * 1LL * (n);
    }
    return sum;
}

int main()
{
    // main code goes here
    int n;
    cin >> n;
    cout << sumBasic(n) << " \n";
    cout << sumFormula(n) << "\n";
    cout << sumBest(n) << "\n";
}