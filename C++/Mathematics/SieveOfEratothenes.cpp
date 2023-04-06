/*
  We will given a number n, we have to find all the prime numbers smaller or equal to n
*/

bool isPrime(int n)
{
    if (n == 1)
        return false;

    if (n == 2 || n == 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

// Naive implementation

/*

#include <iostream>
using namespace std;

void printPrimes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    printPrimes(n);

    return 0;
}

*/

// Simple Sieve of Eratothenes

/*

#include <iostream>
#include <vector>

using namespace std;

void sieve(int n)
{
    vector<bool> ifPrime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (ifPrime[i])
        {
            for (int j = 2 * i; j <= n; j = j + i)
            {
                ifPrime[j] = false;
            }
        }
    }

    // Display the resultant true indices.
    for (int i = 2; i <= n; i++)
    {
        if (ifPrime[i])
            cout << i << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    sieve(n);

    return 0;
}

*/

// Optimized sieve

#include <iostream>
#include <vector>
using namespace std;

void sieve(int n)
{
    vector<bool> ifPrime(n + 1, true);

    for (int i = 2; i * i <= n; i++)
    {
        if (ifPrime[i])
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                ifPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (ifPrime[i])
            cout << i << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    sieve(n);

    return 0;
}