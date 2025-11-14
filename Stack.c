// LIFO → Last In, First Out

#include <stdio.h>
#define SIZE 5          

int stack[SIZE];       
int top = -1;       

// Push - add element to stack
void push(int value) {
    if (top == SIZE - 1)                    
        printf("Stack Overflow! Cannot push %d\n", value);
    else {
        stack[++top] = value;               
        printf("%d pushed onto stack.\n", value);
    }
}

// Pop - remove element from stack
void pop() {
    if (top == -1)                       
        printf("Stack Underflow! Nothing to pop\n");
    else {
        printf("%d popped from stack.\n", stack[top]);
        top--;                            
    }
}

// Display stack elements
void display() {
    if (top == -1)
        printf("Stack is Empty!\n");
    else {
        printf("Stack elements (top to bottom): ");
        for (int i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

int main() {
    int choice, value;
    while (1) {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;       
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
