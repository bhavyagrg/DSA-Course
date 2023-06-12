/*

Given an array of distinct elements, find previous greater element for every element. If previous greater element does not exist, print -1.

Examples:

Input : arr[] = {10, 4, 2, 20, 40, 12, 30}
Output :         -1, 10, 4, -1, -1, 40, 40

Input : arr[] = {10, 20, 30, 40}
Output :        -1, -1, -1, -1

Input : arr[] = {40, 30, 20, 10}
Output :        -1, 40, 30, 20
Expected time complexity : O(n)

*/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> arr;
    cout << "Enter size of array and the elements of the array\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    stack<int> s;
    s.push(arr[0]);
    cout << -1 << " ";

    for (int i = 1; i < n; i++)
    {
        while (s.empty() == false && s.top() <= arr[i])
            s.pop();

        s.empty() ? cout << "-1"
                         << " "
                  : cout << s.top() << " ";
        s.push(arr[i]);
    }

    return 0;
}