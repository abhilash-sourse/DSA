// A circular queue is just like a normal queue,
// but the last position connects back to the first position.

// FIFO – First In, First Out

#include <stdio.h>
#define SIZE 5 

int queue[SIZE];
int front = -1, rear = -1;

// Function to add element (Enqueue)
void enqueue(int value) {
    if ((rear + 1) % SIZE == front) {
        printf("Queue is Full!\n");
    } else {
        if (front == -1)
            front = 0; 
        rear = (rear + 1) % SIZE;
        queue[rear] = value;
        printf("%d inserted into queue.\n", value);
    }
}

// Function to remove element (Dequeue)
void dequeue() {
    if (front == -1) {
        printf("Queue is Empty!\n");
    } else {
        printf("%d removed from queue.\n", queue[front]);
        if (front == rear)
            front = rear = -1; 
        else
            front = (front + 1) % SIZE;
    }
}

// Function to display elements
void display() {
    if (front == -1) {
        printf("Queue is Empty!\n");
    } else {
        printf("Queue elements are: ");
        int i = front;
        while (1) {
            printf("%d ", queue[i]);
            if (i == rear)
                break;
            i = (i + 1) % SIZE;
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();

    dequeue(); 
    dequeue(); 
    enqueue(60); 
    enqueue(70); 
    display();

    return 0;
}
