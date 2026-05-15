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
};