// FIFO – First In, First Out

#include <stdio.h>
#define SIZE 5  // Queue size

int queue[SIZE];
int front = -1, rear = -1;

// Function to add (enqueue) element
void enqueue(int value) {
    if (rear == SIZE - 1)
        printf("Queue is Full!\n");
    else {
        if (front == -1)
            front = 0;
        queue[++rear] = value;
        printf("%d inserted into queue.\n", value);
    }
}

// Function to remove (dequeue) element
void dequeue() {
    if (front == -1 || front > rear)
        printf("Queue is Empty!\n");
    else {
        printf("%d removed from queue.\n", queue[front]);
        front++;
    }
}

// Function to display queue elements
void display() {
    if (front == -1 || front > rear)
        printf("Queue is Empty!\n");
    else {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue(); 
    dequeue(); 
    display();

    return 0;
}
