// Naive method
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

int trailZero(int n)
{
    int findIn = fact(n);
    int res = 0;
    while (findIn % 10 == 0)
    {
        res++;
        findIn = findIn / 10;
    }

    return res;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "Number of trailing zeroes in the factorial of " << n << " are " << trailZero(n);
    return 0;
}

*/

// Efficient method
#include <iostream>
using namespace std;

int trailZero(int n)
{
    int res = 0;
    for (int i = 5; i < n; i = i * 5)
    {
        res = res + (n / i);
        // for example 10 ->> at 52th step 10/5 =2 , at first it will count 2 and store it in the answer
        // foreg 25->> at 52 th step first iteration, 25/5=5 , second iteration i becomes 5*5=25, 25/25=1 , so , it will return 5+1 =6
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Number of trailing zeroes in the factorial of " << n << " are " << trailZero(n);

    return 0;
}