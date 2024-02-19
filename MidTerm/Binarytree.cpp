#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Node structure for binary tree
struct TreeNode {
    char data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(char d) : data(d), left(nullptr), right(nullptr) {}
};

// Function to build the binary tree representing the syntax of an expression recursively
TreeNode* buildSyntaxTree(const string& expression, int& index) {
    if (index >= expression.length()) {
        return nullptr;
    }

    char currentChar = expression[index++];
    if (isdigit(currentChar) || isalpha(currentChar)) {
        return new TreeNode(currentChar);
    } else if (currentChar == '(') {
        TreeNode* left = buildSyntaxTree(expression, index);
        char op = expression[index++];
        TreeNode* right = buildSyntaxTree(expression, index);
        TreeNode* root = new TreeNode(op);
        root->left = left;
        root->right = right;
        return root;
    } else {
        return nullptr;
    }
}

// Function to display the syntax tree in inorder traversal
void displaySyntaxTree(TreeNode* root) {
    if (root) {
        if (root->data == '(') {
            cout << "(";
            displaySyntaxTree(root->left);
            cout << root->data;
            displaySyntaxTree(root->right);
            cout << ")";
        } else {
            cout << root->data;
        }
    }
}

int main() {
    string expression;
    cout << "Enter an arithmetic expression: ";
    getline(cin, expression);

    int index = 0;
    TreeNode* root = buildSyntaxTree(expression, index);

    cout << "Syntax Tree (Inorder Traversal): ";
    displaySyntaxTree(root);
    cout << endl;

    // Clean up memory
    // Note: Memory cleanup of the binary tree is not implemented in this example
    // You may want to implement a function to delete the tree nodes to avoid memory leaks

    return 0;
}
