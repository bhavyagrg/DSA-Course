#include <iostream>
using namespace std;

int countDigits(int n)
{
    int res = 0;
    while (n != 0)
    {
        n = n / 10;
        res++;
    }

    return res;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "The number of digits in " << n << " are : " << countDigits(n);
    return 0;
}