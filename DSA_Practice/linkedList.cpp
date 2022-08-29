#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};




void insertHead(Node *&head, int data)
{

    Node *temp = new Node(data);
    temp->data = data;
    temp->next = head;
    head = temp;
}
void insertEnd(Node *head, int data)
{
    Node *temp = new Node(data);
    Node *tmp = head;
    temp->data = data;
    temp->next = NULL;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = temp;
}
void printList(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int main()
{

    Node *head = new Node(67);

    insertHead(head, 34);
    insertHead(head, 4);

    insertHead(head, 9);
    printList(head);
    insertEnd(head, 45);
    insertEnd(head, 415);
    insertEnd(head, 425);
    printList(head);
    return 0;
}