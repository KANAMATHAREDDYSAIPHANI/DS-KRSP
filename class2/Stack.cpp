// C++ program for online compilation

#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Create a stack of integers
    stack<int> myStack;

    // Push elements onto the stack
    myStack.push(21);
    myStack.push(22);
    myStack.push(24);
    myStack.push(25);

    // Add a variable 'num' to the stack
    int num = 0;
    myStack.push(num);

    // Remove elements from the stack
    myStack.pop();
    myStack.pop();
    myStack.pop();

    // Print the elements in reverse order
    cout << "Stack Elements (in reverse order): ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }

    return 0;
}
