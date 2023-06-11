/*

Create a data structure twoStacks that represent two stacks. Implementation of twoStacks should use only one array, i.e., both stacks should use the same array for storing elements.

Following functions must be supported by twoStacks.

push1(int x) --> pushes x to first stack
push2(int x) --> pushes x to second stack
pop1() --> pops an element from first stack and return the popped element
pop2() --> pops an element from second stack and return the popped element
Implementation of twoStack should be space efficient.

*/

/*

Follow the steps below to solve the problem:

Stack1 starts from the leftmost corner of the array, the first element in stack1 is pushed at index 0 of the array.
Stack2 starts from the rightmost corner of the array, the first element in stack2 is pushed at index (n-1) of the array.
Both stacks grow (or shrink) in opposite directions.
To check for overflow, all we need to check is for availability of space between top elements of both stacks.
To check for underflow, all we need to check is if the value of the top of the both stacks  is between 0 to (n-1) or not.

*/
#include <iostream>
#include <stack>
using namespace std;

class TwoStack
{
    int *arr, cap, top1, top2;
    ;

public:
    TwoStack(int n)
    {
        arr = new int[n];
        cap = n;
        top1 = -1;
        top2 = cap;
    }

    void push1(int x)
    {
        // There is at least one empty space for new element
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = x;
        }
        else
        {
            cout << "Stack Overflow\n";
            exit(1);
        }
    }
    void push2(int x)
    {
        // There is at least one empty space for new element
        if (top1 < top2 - 1)
        {
            top2--;
            arr[top2] = x;
        }
        else
        {
            cout << "Stack Overflow \n";
            exit(1);
        }
    }

    int pop1()
    {
        if(top1>=0)
        {
            int x=arr[top1];
            top1--;
            return x;
        }
        else
        {
            cout<<"Stack Underflow \n";
            exit(1);
        }
    }
    int pop2()
    {
        if(top2<cap)
        {
            int x=arr[top2];
            top2++;
            return x;
        }
        else
        {
            cout<<"Stack Underflow \n";
            exit(1);
        }
    }
};

/* Driver program to test TwoStack class */
int main()
{
    TwoStack ts(5);
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);
    cout << "Popped element from stack1 is " << ts.pop1();
    ts.push2(40);
    cout << "\nPopped element from stack2 is " << ts.pop2();
    return 0;
}


/*

Time Complexity: 

Both Push operation: O(1)
Both Pop operation: O(1)
Auxiliary Space: O(N), Use of the array to implement stack.

*/