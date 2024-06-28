#include<stdio.h>

const int QUEUE_SIZE = 5;

typedef struct{
    int head, tail;
    int data[QUEUE_SIZE + 1];
}Queue;

void enqueue(Queue* myQueue, int item){

    if((myQueue->tail + 1) % (QUEUE_SIZE + 1) == myQueue->head){
        
        printf("The queue is full\n");
    }

    else{

        myQueue->data[myQueue->tail] = item;
        myQueue->tail = myQueue->tail + 1;
    }
}

int dequeue(Queue* myQueue){

    int item;

    if(myQueue->head == myQueue->tail){

        printf("Queue is empty\n");
        item = -1;
    }

    else{
        
        item = myQueue->data[myQueue->head];
        myQueue->head = (myQueue->head + 1) % (QUEUE_SIZE + 1);
    }

    return item;
}

int main()
{
    Queue myQueue;
    int item;

    myQueue.head = 0;
    myQueue.tail = 0;

    // some manual operation

    enqueue(&myQueue, 1);
    printf("tail = %d\n", myQueue.tail);
    enqueue(&myQueue, 2);
    printf("tail = %d\n", myQueue.tail);
    enqueue(&myQueue, 3);
    printf("tail = %d\n", myQueue.tail);
    enqueue(&myQueue, 4);
    printf("tail = %d\n", myQueue.tail);
    enqueue(&myQueue, 5);
    printf("tail = %d\n", myQueue.tail);
    enqueue(&myQueue, 6);
    printf("tail = %d\n", myQueue.tail);

    printf("begining head = %d\n", myQueue.head);
    item = dequeue(&myQueue);
    printf("item = %d, head = %d\n", item, myQueue.head);
    item = dequeue(&myQueue);
    printf("item = %d, head = %d\n", item, myQueue.head);
    item = dequeue(&myQueue);
    printf("item = %d, head = %d\n", item, myQueue.head);
    item = dequeue(&myQueue);
    printf("item = %d, head = %d\n", item, myQueue.head);
    item = dequeue(&myQueue);
    printf("item = %d, head = %d\n", item, myQueue.head);
    item = dequeue(&myQueue);
    printf("item = %d, head = %d\n", item, myQueue.head);

    return 0;

}