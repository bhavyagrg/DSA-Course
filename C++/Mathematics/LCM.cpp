// NAive solution

/*
#include <iostream>
using namespace std;

int Lcm(int a, int b)
{
    int res = max(a, b);
    while (true) // infinite loop
    {
        if (res % a == 0 && res % b == 0)
            return res;

        res++;
    }
    return res;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "The LCM of " << a << " and " << b << " is : " << Lcm(a, b) << endl;
    return 0;
}

*/

// Efficient method
/*

a*b = gcd(a, b)*Lcm(a, b)

*/

#include <iostream>
using namespace std;

int Gcd(int a, int b)
{
    if (b == 0)
        return a;

    return Gcd(b, a % b);
}

int Lcm(int a, int b)
{
    return (a * b) / (Gcd(a, b));
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "The LCM of " << a << " and " << b << " is : " << Lcm(a, b) << endl;
    return 0;
}