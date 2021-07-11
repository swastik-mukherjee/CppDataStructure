#include <iostream>

using namespace std;

class node
{

public:
    int data;
    node *nextNodepointer;

    node(int value)
    {
        data = value;
        nextNodepointer = NULL;
    }
};

void insertAtEnd(node *&head, int val)
{
    node *tempNode = new node(val);
}

int main()
{
}