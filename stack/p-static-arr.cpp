#include<bits/stdc++.h>
using namespace std;
const int N= 500;

class Stack{
public:
int arr[N];
int size;

Stack(){

size=0;
}

//add an element from the stack

void push(int val){

    if (size+1 >N){
        cout<<"stack is full\n";
        return;
    }
    size= size +1;
    arr[size] = val;
}

//remove topest element from the stack

void pop(){
    if(size==0){
        cout<<"stack is empty\n";
        return;
    }
    arr[size] = 0;
    size = size-1;
}

//find toppest element

int top(){
    if(size==0){
        cout<<"stack is empty\n";
        return -1;
    }
    return arr[size];
}
};
int main(){
Stack st;
st.push(4);
st.push(3);
st.push(2);
st.push(1);
st.push(7);
st.push(4);
st.push(8);
st.push(2);
cout<<st.top()<<endl;
}