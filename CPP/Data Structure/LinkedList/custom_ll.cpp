#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        next = nullptr;
    }
};

class MyLinkedList
{
public:
    Node *Head;
    Node *Tail;
    int Length;

    MyLinkedList(int value)
    {
        Node *newNode = new Node(value);
        this->Head = newNode;
        this->Tail = newNode;
        Length = 1;
    }

    void insert(int value)
    {
        Node *newNode = new Node(value);
        this->Tail->next = newNode;
        this->Tail = newNode;
        Length++;
    }

    void print()
    {
        Node *current = Head;
        while (current)
        {
            cout << current->value << endl;
            current = current->next;
        }
    }

    void getLength()
    {
        cout << "Length: " << Length << endl;
    }
};

int main()
{
    cout << "Custom Linked List" << endl;

    MyLinkedList *myList = new MyLinkedList(4);
    myList->insert(5);
    myList->insert(8);
    myList->insert(9);
    myList->print();
    myList->getLength();

    return 0;
}