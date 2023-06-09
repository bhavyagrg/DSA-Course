// Print frequencies of chars of characters in sorted order in a string of lower case alphabets

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void freq(string s)
{

    char count[26] = {0};

    for (int i = 0; i < (int)s.size(); i++)
    {
        count[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
            cout << (char)(i + 'a') << " : " << count[i] << endl;
    }
}

int main()
{
    string s="";
    cout << "Enter the string : ";
    getline(cin, s);

    freq(s);

    return 0;
}