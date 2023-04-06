#include <iostream>
using namespace std;

int digitsInFac(int n)
{
    int ansFac = 1;
    for (int i = 2; i <= n; i++)
    {
        ansFac = ansFac * i;
    }

    int res = 0;
    while (ansFac != 0)
    {
        res++;
        ansFac = ansFac / 10;
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "Number of digits in the factorial of " << n << " are " << digitsInFac(n);

    return 0;
}