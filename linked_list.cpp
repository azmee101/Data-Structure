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
        tail = head;
        return;
    }
    Node* tmp = head;
    while(tmp->next != nullptr){
        tmp = tmp->next;
    }
    tmp->next = newNode;
    tail = tmp->next;
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


int count(Node*& head){
    int cnt = 1;
    Node* tmp = head;
    while(tmp->next != nullptr){
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

bool search(int val, Node*& head){
    Node* tmp = head;
    while(tmp->next != nullptr){
        if(tmp->data == val){
            return true;
        }
        tmp = tmp->next;
    }
    return false;
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
    
    cout << count(head) << '\n';
    
    if(search(20, head)){
        cout << "Exist!\n";
    }
    else{
        cout << "Not Exist\n";
    }
    return;
}