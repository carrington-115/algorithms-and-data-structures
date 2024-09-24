
#include <stdio.h>
#define MAXSIZE 10

int top = 0, stack[MAXSIZE];

void push()
{
    if (top == MAXSIZE - 1)
    {
        printf("The Stack is full\n");
        return;
    }
    else
    {
        int num;
        printf("Enter the number to add in the stack:\t");
        scanf("%d", &num);
        stack[top] = num;
        top++;
    }
}

int main()
{
    printf("This is a program to implement a stack\n");
    push();
    printf("=== CURRENT STACK ELEMENTS ===\n");
    for (int i = 0; i < MAXSIZE; i++)
        printf("%d,\t", stack[i]);
    return 0;
}