// Itertive Method
/*
#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;

    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "The factorial of " << n << " is : " << fact(n);
    return 0;
}

*/

// Recursive method

#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "The factorial of " << n << " is : " << fact(n);

    return 0;
}