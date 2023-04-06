// naive method ->> fails when either of a and b is zero
/*
#include <iostream>
using namespace std;

int Gcd(int a, int b)
{
    int res = min(a, b);
    while (a != b)
    {
        if (a % res == 0 && b % res == 0)
            break;
        else
            res--;
    }
    return res;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "The GCD of " << a << " and " << b << " is : " << Gcd(a, b) << endl;
    return 0;
}

*/

// Euclid algorithm
/*

#include <iostream>
using namespace std;

int Gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "The GCD of " << a << " and " << b << " is : " << Gcd(a, b) << endl;
    return 0;
}

*/

// More optimized approach

#include <iostream>
using namespace std;

int Gcd(int a, int b)
{
    if (b == 0)
        return a;

    return Gcd(b, a % b);
    // if a<b then at first step a and b will be swaped
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "The GCD of " << a << " and " << b << " is : " << Gcd(a, b) << endl;
    return 0;
}