// Self Implemented Approach

/*
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool areAnagram(string &s1, string &s2)
{

    unordered_map<char, int> m1;
    for (auto &el : s1)
    {
        if (m1.find(el) != m1.end())
        {
            m1[el] = 1;
        }
        else
        {
            m1[el]++;
        }
    }

    unordered_map<char, int> m2;
    for (auto &el : s2)
    {
        if (m2.find(el) != m2.end())
        {
            m2[el] = 1;
        }
        else
        {
            m2[el]++;
        }
    }

    return m1==m2;
}

int main()
{
    string s1 = "", s2 = "";
    cout << "Enter first string ";
    getline(std::cin, s1);

    cout << "Enter second string ";
    getline(std::cin, s2);

    cout << areAnagram(s1, s2);
    return 0;
}

*/

//Brute Force
/*

#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

bool areAnagram(string &s1, string &s2){
    if((int)s1.size()!=s2.size()) return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return s1==s2;
}

int main()
{
    string s1 = "", s2 = "";
    cout << "Enter first string ";
    getline(std::cin, s1);

    cout << "Enter second string ";
    getline(std::cin, s2);

    cout << areAnagram(s1, s2);
    return 0;
}

*/

//Efficient method