#include <iostream> // Including a library for basic input and output operations
#include <vector> // Including a library for using the vector container
#include <queue> // Including a library for using the queue container
#include <stack> // Including a library for using the stack container
using namespace std; // Using the standard namespace to simplify our code

// Defining a class for the dynamic array
class DynamicArray {
private:
    vector<int> data; // Defining a vector to store elements of the array

public:
    // Method to insert data into the array
    void insertData(int value) {
        data.push_back(value); // Inserting the data at the end of the vector
    }

    // Method to display the array
    void displayData() {
        cout << "Dynamic Array Elements: "; // Printing a label for the dynamic array
        for (int num : data) { // Looping through each element in the array
            cout << num << " "; // Printing the element followed by a space
        }
        cout << endl; // Printing a new line after displaying all elements
    }

    // Method to adjust the size of the array
    void adjustSize() {
        int newSize; // Declaring a variable to store the new size of the array
        cout << "Enter the new size of the array: "; // Prompting the user to enter the new size
        cin >> newSize; // Reading the user input for the new size
        data.resize(newSize); // Resizing the array to the new size
        cout << "Array resized successfully!" << endl; // Printing a message indicating successful resizing
    }
};

// Defining a class for the linked list
class LinkedList {
private:
    struct Node {
        int data; // Data stored in the node
        Node* next; // Pointer to the next node

        Node(int val) : data(val), next(nullptr) {} // Constructor to initialize node with data
    };

    Node* head; // Pointer to the head of the linked list

public:
    LinkedList() : head(nullptr) {} // Constructor to initialize head pointer to nullptr

    // Method to insert data into the linked list
    void insertData(int value) {
        Node* newNode = new Node(value); // Creating a new node with the given data
        if (!head) { // If the linked list is empty
            head = newNode; // Setting the new node as the head
        } else { // If the linked list is not empty
            Node* current = head; // Starting traversal from the head
            while (current->next) { // Traversing until the last node
                current = current->next; // Moving to the next node
            }
            current->next = newNode; // Inserting the new node at the end
        }
    }

    // Method to display the linked list
    void displayData() {
        cout << "Linked List Elements: "; // Printing a label for the linked list
        Node* current = head; // Starting traversal from the head
        while (current) { // Traversing until the end of the list
            cout << current->data << " "; // Printing the data of the current node
            current = current->next; // Moving to the next node
        }
        cout << endl; // Printing a new line after displaying all elements
    }
};

// Defining a class for the stack
class CustomStack {
private:
    stack<int> customStack; // Defining a stack to store elements

public:
    // Method to push data onto the stack
    void pushData(int value) {
        customStack.push(value); // Pushing the data onto the stack
    }

    // Method to pop data from the stack
    void popData() {
        if (!customStack.empty()) { // If the stack is not empty
            customStack.pop(); // Popping the top element from the stack
        }
    }

    // Method to display the stack
    void displayData() {
        cout << "Stack Elements: "; // Printing a label for the stack
        stack<int> tempStack = customStack; // Creating a temporary copy of the stack
        while (!tempStack.empty()) { // Looping until the temporary stack is empty
            cout << tempStack.top() << " "; // Printing the top element of the stack
            tempStack.pop(); // Popping the top element from the temporary stack
        }
        cout << endl; // Printing a new line after displaying all elements
    }
};

// Defining a class for the queue
class CustomQueue {
private:
    queue<int> customQueue; // Defining a queue to store elements

public:
    // Method to enqueue data into the queue
    void enqueueData(int value) {
        customQueue.push(value); // Enqueueing the data into the queue
    }

    // Method to dequeue data from the queue
    void dequeueData() {
        if (!customQueue.empty()) { // If the queue is not empty
            customQueue.pop(); // Dequeuing (removing) the front element from the queue
        }
    }

    // Method to display the queue
    void displayData() {
        cout << "Queue Elements: "; // Printing a label for the queue
        queue<int> tempQueue = customQueue; // Creating a temporary copy of the queue
        while (!tempQueue.empty()) { // Looping until the temporary queue is empty
            cout << tempQueue.front() << " "; // Printing the front element of the queue
            tempQueue.pop(); // Popping the front element from the temporary queue
        }
        cout << endl; // Printing a new line after displaying all elements
    }
};

// Defining a class for the binary tree
class BinaryTree {
private:
    struct TreeNode {
        int data; // Data stored in the node
        TreeNode* left; // Pointer to the left child node
        TreeNode* right; // Pointer to the right child node

        TreeNode(int val) : data(val), left(nullptr), right(nullptr) {} // Constructor to initialize node with data
    };

    TreeNode* root; // Pointer to the root of the binary tree

    // Private method to insert data into the binary tree
    TreeNode* insertNode(TreeNode* node, int value) {
        if (!node) { // If the current node is nullptr
            return new TreeNode(value); // Creating a new node with the given data
        }
        if (value < node->data) { // If the data is less than the current node's data
            node->left = insertNode(node->left, value); // Recursively inserting into the left subtree
        } else if (value > node->data) { // If the data is greater than the current node's data
            node->right = insertNode(node->right, value); // Recursively inserting into the right subtree
        }
        return node; // Returning the modified node
    }

    // Private method to perform inorder traversal of the binary tree
    void inorderTraversal(TreeNode* node) {
        if (node) { // If the current node is not nullptr
            inorderTraversal(node->left); // Traversing the left subtree
            cout << node->data << " "; // Printing the data of the current node
            inorderTraversal(node->right); // Traversing the right subtree
        }
    }

public:
    BinaryTree() : root(nullptr) {} // Constructor to initialize root pointer to nullptr

    // Method to insert data into the binary tree
    void insertData(int value) {
        root = insertNode(root, value); // Calling the private insert method to insert data into the binary tree
    }

    // Method to display the binary tree
    void displayData() {
        cout << "Binary Tree Elements (Inorder traversal): "; // Printing a label for the binary tree
        inorderTraversal(root); // Calling the private inorder traversal method to display the binary tree
        cout << endl; // Printing a new line after displaying all elements
    }
};

// Main function to interact with the user and test the data structures
int main() {
    cout << "Welcome to the Dynamic Data Structure Program!" << endl; // Greeting the user

    DynamicArray dynamicArray; // Creating an instance of the dynamic array
    LinkedList linkedList; // Creating an instance of the linked list
    CustomStack customStack; // Creating an instance of the stack
    CustomQueue customQueue; // Creating an instance of the queue
    BinaryTree binaryTree; // Creating an instance of the binary tree

    while (true) { // Entering an infinite loop to keep the application running
        cout << "\nChoose a data structure to work with:" << endl; // Prompting the user to choose a data structure
        cout << "1. Dynamic Array" << endl; // Option to work with dynamic array
        cout << "2. Linked List" << endl; // Option to work with linked list
        cout << "3. Stack" << endl; // Option to work with stack
        cout << "4. Queue" << endl; // Option to work with queue
        cout << "5. Binary Tree" << endl; // Option to work with binary tree
        cout << "6. Exit" << endl; // Option to exit the application

        int choice; // Variable to store user's choice
        cout << "Enter your choice: "; // Prompting the user to enter their choice
        cin >> choice; // Reading user's choice

        switch (choice) { // Using a switch statement to perform actions based on user's choice
            case 1: { // If user chooses dynamic array
                int value; // Variable to store data entered by user
                cout << "Enter value to insert into the dynamic array: "; // Prompting user to enter data
                cin >> value; // Reading data entered by user
                dynamicArray.insertData(value); // Inserting the data into the dynamic array
                cout << "Value inserted into the dynamic array!" << endl; // Printing a message indicating successful insertion
                break; // Exiting the switch statement
            }
            case 2: { // If user chooses linked list
                int value; // Variable to store data entered by user
                cout << "Enter value to insert into the linked list: "; // Prompting user to enter data
                cin >> value; // Reading data entered by user
                linkedList.insertData(value); // Inserting the data into the linked list
                cout << "Value inserted into the linked list!" << endl; // Printing a message indicating successful insertion
                break; // Exiting the switch statement
            }
            case 3: { // If user chooses stack
                int value; // Variable to store data entered by user
                cout << "Enter value to push onto the stack: "; // Prompting user to enter data
                cin >> value; // Reading data entered by user
                customStack.pushData(value); // Pushing the data onto the stack
                cout << "Value pushed onto the stack!" << endl; // Printing a message indicating successful push
                break; // Exiting the switch statement
            }
            case 4: { // If user chooses queue
                int value; // Variable to store data entered by user
                cout << "Enter value to enqueue into the queue: "; // Prompting user to enter data
                cin >> value; // Reading data entered by user
                customQueue.enqueueData(value); // Enqueuing the data into the queue
                cout << "Value enqueued into the queue!" << endl; // Printing a message indicating successful enqueue
                break; // Exiting the switch statement
            }
            case 5: { // If user chooses binary tree
                int value; // Variable to store data entered by user
                cout << "Enter value to insert into the binary tree: "; // Prompting user to enter data
                cin >> value; // Reading data entered by user
                binaryTree.insertData(value); // Inserting the data into the binary tree
                cout << "Value inserted into the binary tree!" << endl; // Printing a message indicating successful insertion
                break; // Exiting the switch statement
            }
            case 6: { // If user chooses to exit the application
                cout << "Exiting the program." << endl; // Printing a message indicating program exit
                return 0; // Returning 0 to indicate successful termination of the program
            }
            default: // If user enters an invalid choice
                cout << "Invalid choice! Please choose again." << endl; // Printing a message indicating invalid choice
        }
    }

    return 0; // Returning 0 to indicate successful termination of the program
}
