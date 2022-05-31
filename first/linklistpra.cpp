// first.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

};

void deleteNode(Node** head_ref, int key) {
    Node* temp = *head_ref;
    Node* prev = NULL;
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        delete temp;
        return;

    }
    else {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
            return;
        prev->next = temp->next;
        delete temp;
    }
}
void printList(Node* n) {
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}
void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void insertAfter(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;

}
int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    head = new Node();
    second = new Node();
    third = new Node();
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    printList(head);
    cout << "\n";
    push(&head, 5);
    printList(head);
    cout << "\n";
    insertAfter(&head, 9);
    cout << "\n";
    printList(head);
    cout << "\n";
    deleteNode(&head, 3);
    printList(head);
    return 0;

}

