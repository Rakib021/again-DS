#include <bits/stdc++.h>
using namespace std;
const int N = 500;

class Stack
{
public:
    
    int arr[N];
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
    void pop()
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

    int top(){
        if (stack_size == 0)
        {
            cout << "stack is empty\n";
            return -1;
        }
        return arr[stack_size-1];
    }
};

int main()
{
    Stack st;
    st.push(4);
    cout<<st.top()<<"\n";
    st.push(2);
    cout<<st.top()<<"\n";
    st.push(1);
    cout<<st.top()<<"\n";
    st.push(6);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
}