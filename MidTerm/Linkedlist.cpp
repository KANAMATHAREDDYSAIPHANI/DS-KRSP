#include <iostream>
#include <string>
using namespace std;

// Node structure for linked list
struct ImageNode {
    string imageName;
    ImageNode* next;

    ImageNode(const string& name) : imageName(name), next(nullptr) {}
};

// Function to insert a new image into the linked list
void insertImage(ImageNode*& head, const string& imageName) {
    ImageNode* newNode = new ImageNode(imageName);
    if (head == nullptr) {
        head = newNode;
    } else {
        ImageNode* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to display all images in the linked list
void displayImages(ImageNode* head) {
    cout << "Image Viewer:" << endl;
    ImageNode* current = head;
    int index = 1;
    while (current != nullptr) {
        cout << index << ". " << current->imageName << endl;
        current = current->next;
        index++;
    }
}

int main() {
    ImageNode* head = nullptr;

    int size;
    cout << "Enter the number of images: ";
    cin >> size;

    cout << "Enter the names of " << size << " images:" << endl;
    for (int i = 0; i < size; ++i) {
        string imageName;
        cin >> imageName;
        insertImage(head, imageName);
    }

    displayImages(head);

    // Clean up memory
    ImageNode* current = head;
    while (current != nullptr) {
        ImageNode* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
