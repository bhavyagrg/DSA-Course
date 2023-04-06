#include <iostream>
using namespace std;

bool Palindrome(int n)
{
    int temp = n, res = 0;
    while (temp != 0)
    {
        int lastDigit = temp % 10;
        res = res * 10 + lastDigit;
        temp = temp / 10;
    }

    return (res == n);
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    if (Palindrome(n))
    {
        cout << n << " is a Palindrome number.";
    }
    else
        cout << n << " is not a Palindrome number." << endl;
    return 0;
}