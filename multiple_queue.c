// Multiple queue means one or morequeue stored inside a single array.

// Index : 0 1 2 3 4 5 6 7 8 9
// queue1 → grows left to right
// queue2 ← grows right to left


#include <stdio.h>
#define SIZE 5

int queue1[SIZE], front1 = -1, rear1 = -1;
int queue2[SIZE], front2 = -1, rear2 = -1;

// Enqueue for Queue 1
void enqueue1(int value) {
    if (rear1 == SIZE - 1)
        printf("Queue 1 is Full\n");
    else {
        if (front1 == -1) front1 = 0;
        queue1[++rear1] = value;
        printf("%d inserted in Queue 1\n", value);
    }
}

// Dequeue for Queue 1
void dequeue1() {
    if (front1 == -1 || front1 > rear1)
        printf("Queue 1 is Empty\n");
    else {
        printf("%d removed from Queue 1\n", queue1[front1]);
        front1++;
    }
}

// Enqueue for Queue 2
void enqueue2(int value) {
    if (rear2 == SIZE - 1)
        printf("Queue 2 is Full\n");
    else {
        if (front2 == -1) front2 = 0;
        queue2[++rear2] = value;
        printf("%d inserted in Queue 2\n", value);
    }
}

// Dequeue for Queue 2
void dequeue2() {
    if (front2 == -1 || front2 > rear2)
        printf("Queue 2 is Empty\n");
    else {
        printf("%d removed from Queue 2\n", queue2[front2]);
        front2++;
    }
}

// Display Queue 1
void display() {
    int i;
    printf("Queue 1: ");
    if (front1 == -1 || front1 > rear1) 
        printf("Empty");
    else {
        for (i = front1; i <= rear1; i++) 
            printf("%d ", queue1[i]);
    }

    printf("\nQueue 2: ");
    if (front2 == -1 || front2 > rear2) 
        printf("Empty");
    else {
        for (i = front2; i <= rear2; i++) 
            printf("%d ", queue2[i]);
    }

    printf("\n");
}

int main() {
    enqueue1(10);
    enqueue1(20);
    dequeue1();

    enqueue2(100);
    enqueue2(200);
    dequeue2();

    display();

    return 0;
}
