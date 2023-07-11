#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    const int N = 500;
    int arr[500];
    int stack_size;
    Stack()
    {
        stack_size = 0;
    }
    // add an element in the stack
    void push(int val)
    {

        if (stack_size + 1 > N)
        {
            cout << "Stack is full \n";
            return;
        }
        stack_size = stack_size + 1;

        arr[stack_size - 1] = val;
    }
    // delete the topmost element from the stack
    void pop(int val)
    {
        if (stack_size == 0)
        {
            cout << "stack is empty\n";
            return;
        }
        arr[stack_size - 1] = 0;
        stack_size = stack_size - 1;
    }

    //returns the top element from the stack

    void top(){
        if (stack_size == 0)
        {
            cout << "stack is empty\n";
            return;
        }
        return arr[stack_size-1];
    }
};

int main()
{
}