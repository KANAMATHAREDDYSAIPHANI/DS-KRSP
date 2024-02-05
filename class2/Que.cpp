// C++ code demonstrating the implementation of a Queue in the Standard Template Library (STL)

#include <iostream>
#include <queue>

using namespace std;

// Function to display the contents of the queue
void showQueue(queue<int> gq) {
    // Create a copy of the original queue
    queue<int> g = gq;
    
    // Display the elements of the queue
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

// Driver Code
int main() {
    // Create a queue named 'gquiz'
    queue<int> gquiz;

    // Add elements to the queue
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    // Display the original queue
    cout << "The queue gquiz is : ";
    showQueue(gquiz);

    // Display size, front, and back of the queue
    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.front() : " << gquiz.front();
    cout << "\ngquiz.back() : " << gquiz.back();

    // Remove an element from the front of the queue
    cout << "\ngquiz.pop() : ";
    gquiz.pop();

    // Display the modified queue
    showQueue(gquiz);

    return 0;
}
