#include <iostream>
using namespace std;

// Node class representing a single node in the liked
class Node
{
    public: 
    int data;
    Node *next;
    
    Node ()
    {
        next = NULL;
    }
};

class Stack
{
    private:
    Node *top;// pointer to the top node of the stack

    public: 
    Stack()
    {
        top = NULL; // Initialize trhe stack with a null top pointer
    }

    // push operation : Insert on elemente onto the top of the stack
    int push (int value)
    {
        Node *newNode = new Node(); // 1. Allocates memory for the new node
        newNode->data = value;      // 2. assign value
        newNode->next = top;        // 3. set the next pointer of the new node
        top = newNode;              // 4. Update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
    }

    // pop operation : remove the topmost element from the stack
    void pop()
    {
        Node *temp = top;
        if (isEmpty())
        {
            cout << "Satck is empty." << endl;
            return;
        }

        cout << "Popped value: " << temp->data << endl;
        top
    }
};