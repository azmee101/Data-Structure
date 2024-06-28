#include<stdio.h>

const int MAX_SIZE = 10;

typedef struct{
    int top;
    int data[MAX_SIZE];
}Stack;


void push(Stack* myStack, int item){

    if(myStack->top == MAX_SIZE){
        printf("The stack is full\n");
    }
    else{
        myStack->data[myStack->top] = item;
        myStack->top = myStack->top + 1;
    }
}

int pop(Stack* myStack){
    
    int cur;

    if(myStack->top == 0){
        printf("Stack is empty\n");
        cur = -1;
    }

    else{
        myStack->top = myStack->top - 1;
        cur = myStack->data[myStack->top];
    }

    return cur;
}

int main()
{
    Stack myStack;
    myStack.top = 0;
    int item;

    // some manual operation
    
    push(&myStack, 1);
    push(&myStack, 2);
    push(&myStack, 3);

    item = pop(&myStack);
    printf("%d\n", item);

    item = pop(&myStack);
    printf("%d\n", item);

    item = pop(&myStack);
    printf("%d\n", item);
    return 0;
}