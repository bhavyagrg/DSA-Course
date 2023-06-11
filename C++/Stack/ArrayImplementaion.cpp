#include <iostream>
using namespace std;

class MyStack
{
    int *arr;
    int n, top;

public:
    MyStack(int n)
    {
        this->n = n;
        arr = new int[n];
        // as no value is inserted into the stack so top is -1, it's will help to locate the index
        top = -1;
    }

    void push(int value)
    {
        if (top == n - 1)
        {
            cout << "Overflow\n";
            return;
        }
        top++;
        arr[top] = value;
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Underflow\n";
            return -1;
        }
        int ans = arr[top];
        top--;
        return ans;
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "No element present\n";
            return -1;
        }
        return arr[top];
    }

    int size()
    {
        return (top + 1);
    }

    bool isEmpty()
    {
        return (top == -1);
    }
};

int main()
{
    MyStack s(5);
    s.pop();
    s.peek();
    s.push(5);
    s.push(10);
    s.push(20);
    std::cout << s.size() << "\n";
    std::cout << s.pop() << "\n ";
    std::cout << s.size() << "\n ";
    std::cout << s.peek() << "\n ";
    std::cout << s.isEmpty() << std::endl;
    s.push(10);
    s.push(40);
    s.push(30);
    s.push(40);
    s.push(50);
    return 0;
}