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
    node *temp = head;

    if (head == NULL)
    {
        head = tempNode;
    }
    while (!temp)
    {
        temp = temp->nextNodepointer;
    }
    temp->nextNodepointer = tempNode;
}
void insertAtHead(node *&head, int data)
{
    node *tmp;
    tmp->nextNodepointer = head;
    head = tmp;
}
void displayNodes(node *head)
{
    node *tmp = head;
    while (!tmp)
    {
        cout << head->data << endl;
        tmp = tmp->nextNodepointer;
    }
}

int main()
{
}