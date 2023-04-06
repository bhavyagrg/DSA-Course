// Naive method

/*

#include <iostream>
using namespace std;

void printDiv(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
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

    printDiv(n);

    return 0;
}

*/

// Efficient Solution

/*

#include <iostream>
using namespace std;

void printDiv(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";

            if (i != (n / i))
            {
                cout << (n / i) << " ";
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    printDiv(n);

    return 0;
}

*/

// Efficient solution in order

#include <iostream>
using namespace std;

void printDiv(int n)
{
    int i;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    // The following for loop will take the previous value of which is sqrt of n as I have not initialized anything.
    for (; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << (n / i) << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    printDiv(n);

    return 0;
}
