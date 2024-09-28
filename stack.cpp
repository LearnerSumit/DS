// Your First C++ Program

#include <iostream>
using namespace std;  // Required for cout

class Stack {
    // Properties
    public:
        int* arr;
        int top;
        int size;

    // Constructor
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;  // Initialize top to -1 (empty stack)
    }

    // Function to push elements
    void push(int ele) {
        if (size - top > 1) {  // Ensure space is available
            top++;
            arr[top] = ele;
        } else {
            cout << "Stack overflow" << endl;  // Stack is full
        }
    }

    // Function to pop elements
    void pop() {
        if (top >= 0) {  // Ensure there are elements to pop
            top--;
        } else {
            cout << "Stack underflow" << endl;  // Stack is empty
        }
    }

    // Function to return the top element
    int peek() {
        if (top >= 0) {  // Ensure stack isn't empty
            return arr[top];
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack st(5);

    st.push(20);
    st.push(21);
    st.push(22);

    cout << "Top element: " << st.peek() << endl;

    st.pop();
    cout << "Top element after pop: " << st.peek() << endl;

    return 0;
}
