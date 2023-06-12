/*

Given an array, print the Next Greater Element (NGE) for every element.

The Next greater Element for an element x is the first greater element on the right side of x in the array. Elements for which no greater element exist, consider the next greater element as -1.

Example:

Input: arr[] = [ 4 , 5 , 2 , 25 ]
Output:  4      -->   5
               5      -->   25
               2      -->   25
              25     -->   -1
Explanation: except 25 every element has an element greater than them present on the right side

Input: arr[] = [ 13 , 7, 6 , 12 ]
Output:  13      -->    -1
                7       -->     12
                6       -->     12
               12      -->     -1
Explanation: 13 and 12 don't have any element greater than them present on the right side

*/

#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
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
    s.push(arr[n - 1]);
    vector<int> ans;

    for (int i = n - 1; i >= 0; i--)
    {
        while (s.empty() == false && s.top() <= arr[i])
            s.pop();

        s.empty() ? ans.push_back(-1)
                  : ans.push_back(s.top());
        s.push(arr[i]);
    }

    reverse(ans.begin(), ans.end());

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}