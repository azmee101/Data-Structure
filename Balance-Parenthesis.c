#include<stdio.h>


typedef struct{
    int top;
    char data[10000];
}Stack;


void push(char x, Stack* myStack){
    if(myStack->top < 10000){
        myStack->data[myStack->top] = x;
        myStack->top += 1;
    }
}

void pop(Stack* myStack){
    myStack->top -= 1;
}

char top(Stack* myStack){
    return myStack->data[myStack->top-1];
}


bool isEmpty(Stack* myStack){
    if(myStack->top == -0){
        return true;
    }
    else{
        return false;
    }
}


bool solve(){
    Stack myStack;
    myStack.top = 0;
    char str[10000];
    scanf("%s", str);
    bool check = false;
    for(int i = 0; str[i] !='\0'; i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            push(str[i], &myStack);
        }
        else{
            if(isEmpty(&myStack)){
                return false;
            }

            char x = top(&myStack);

            if(x == '(' && str[i] == ')' ||
               x == '{' && str[i] == '}' ||
               x == '[' && str[i] == ']'){
                pop(&myStack);
            }
            else{
                return false;
            }
        }
    }
    return isEmpty(&myStack) ? true : false;
}


int main()
{
    printf("%d\n", solve());
    return 0;
}
