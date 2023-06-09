// Iterative Implementation

#include <iostream>
#include <string>
using namespace std;

bool InSubSeq(string s1, string s2, int n, int m)
{
    int j = 0;
    if (n < m)
        return false; // can't compare if size of s1<s2
    for (int i = 0; i < n && j < m; i++)
    {
        if (s1[i] == s2[j])
            j++;
    }
    return j == m;
}

int main()
{
    string s1, s2;
    cout << "Enter first string ";
    getline(std::cin, s1);
    cout << "Enter second string ";
    getline(std::cin, s2);
    cout << InSubSeq(s1, s2, (int)s1.size(), (int)s2.size());
    return 0;
}

// Recursive Implementation
/*

#include <iostream>
#include <string>
using namespace std;

bool InSubSeq(string s1, string s2, int n, int m)
{
    if (m == 0)
        return true;
    if (n == 0)
        return false;

    if (s1[n - 1] == s2[m - 1])
        return InSubSeq(s1, s2, n - 1, m - 1);
    else
        return InSubSeq(s1, s2, n - 1, m);
}

int main()
{
    string s1, s2;
    cout << "Enter first string ";
    getline(std::cin, s1);
    cout << "Enter second string ";
    getline(std::cin, s2);
    cout << InSubSeq(s1, s2, (int)s1.size(), (int)s2.size());
    return 0;
}


*/