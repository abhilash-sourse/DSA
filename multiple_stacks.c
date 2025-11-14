// Multiple stacks means one or more stack stored inside a single array.

// Index : 0 1 2 3 4 5 6 7 8 9
// Stack1 → grows left to right
// Stack2 ← grows right to left

#include <stdio.h>
#define SIZE 10

int stack[SIZE];
int top1 = -1;         // Top of Stack 1
int top2 = SIZE;       // Top of Stack 2

// Push element in Stack 1
void push1(int value) {
    if (top1 + 1 == top2)
        printf("Stack Overflow!\n");
    else
        stack[++top1] = value;
}

// Push element in Stack 2
void push2(int value) {
    if (top2 - 1 == top1)
        printf("Stack Overflow!\n");
    else
        stack[--top2] = value;
}

// Pop element from Stack 1
void pop1() {
    if (top1 == -1)
        printf("Stack 1 Underflow!\n");
    else
        printf("Popped from Stack 1: %d\n", stack[top1--]);
}

// Pop element from Stack 2
void pop2() {
    if (top2 == SIZE)
        printf("Stack 2 Underflow!\n");
    else
        printf("Popped from Stack 2: %d\n", stack[top2++]);
}


void display() {
    int i;
    printf("\nStack 1 elements: ");
    for (i = top1; i >= 0; i--)
        printf("%d ", stack[i]);

    printf("\nStack 2 elements: ");
    for (i = top2; i < SIZE; i++)
        printf("%d ", stack[i]);
    printf("\n");
}


int main() {
    push1(10);
    push1(20);
    push2(100);
    push2(200);

    display();

    pop1();
    pop2();
    display();

    return 0;
}
