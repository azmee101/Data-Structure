#include<bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node{
    int data;
    Node* next;
};

void insert_first(Node*& firstNode, int data, Node*& head){
    firstNode = new Node{data, head};
    head = firstNode;
}

void insert(int data, Node*& head, Node*& tail){
    Node* newNode = new Node{data, nullptr};
    if(head == nullptr){
        head = newNode;
        tail = head; // this line will need if I want to add node form last
        return;
    }
    Node* tmp = head;
    while(tmp->next != nullptr){
        tmp = tmp->next;
    }
    tmp->next = newNode;
    tail = tmp->next; // this line will need if I want to add node form last
    return;
}

void insert_last(Node*& lastNode, int data, Node*& tail){
    lastNode = new Node{data, nullptr};
    tail->next = lastNode;
    return;
}

void display(Node*& head){
    Node* tmp = head;
    while(tmp != nullptr){
        cout << tmp->data << "->";
        tmp = tmp->next;
    }
    cout << "null" << '\n';
}

int main()
{
    Node* head = nullptr;
    Node* tail = nullptr;
    insert(10, head, tail);
    insert(20, head, tail);
    insert(30, head, tail);
    display(head);
    Node* firstNode = nullptr;
    insert_first(firstNode, 50, head);
    display(head);
    Node* lastNode = nullptr;
    insert_last(lastNode, 14, tail);
    display(head);
    return;
}