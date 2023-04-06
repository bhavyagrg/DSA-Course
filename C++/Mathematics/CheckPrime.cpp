// Naive method

/*
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{

    int n;
    cout << "Enter the number ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is Prime " << endl;

    else
        cout << n << " is not prime " << endl;
    return 0;
}

*/

/*
Efficient method
*/

/*

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is Prime " << endl;

    else
        cout << n << " is not prime " << endl;
    return 0;
}


*/

// Further Optimizations

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;

    if (n == 2 || n == 3) // check for n==2 and n==3 first as if it's checked later then we will check later the n%2 will become zero
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is Prime " << endl;

    else
        cout << n << " is not prime " << endl;
    return 0;
}