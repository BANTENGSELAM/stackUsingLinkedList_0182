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
        top = temp->next; // update the top pointer to the next node
        delete temp;
    }

    void peek ()
    {
        if (isEmpty())
        {
                cout << "List is empty." << endl;
        }
        else{
                Node *current = top;
                while (current != NULL)
                {
                    cout << current->data << " " << endl;
                    current == current->next;
                }
                cout << endl;
        } // Return the vlaue of the top node
    }

    bool isEmpty()
    {
        return top == NULL; // Return true if the top pointer is NULL, indicating an empty stack
    }
};

int main ()
{
     Stack stack;

     int choice = 0;
     int value;

     while (choice != 5)
     {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
     }

     switch (choice)
     {
     case 1:
     cout << "Enter value to push : ";
     cin >> value;
     stack.push(value); // Push the entered value onto the stack
        break;
    case 2:
     }
}