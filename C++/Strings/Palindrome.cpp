// Palindrome checks whether the string is equal to it's reverse or not.

// Brute force Approach
/*
#include <iostream>
#include <string>
#include <vector>
#include<algorithm
using namespace std;

bool isPal(string s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    return (rev == s);
}

int main()
{
    string s="";
    cout << "Enter the string : " << endl;
    getline(cin, s);

    cout << isPal(s) << endl;

    return 0;
}

*/

// Efficient Method
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPal(string &s)
{
    int begin = 0;
    int end = (int)s.size() - 1;

    while (begin < end)
    {
        if (s[begin] != s[end])
        {
            return false;
        }
        begin++;
        end--;
    }
    return true;
}

int main()
{
    string s="";
    cout << "Enter the string : " << endl;
    getline(cin, s);

    cout << isPal(s) << endl;

    return 0;
}