#include <stdio.h>
int top = 0;
int stack[5];
int isFull()
{
    if (top == 5)
        return 1;
    else
        return 0;
}

void push(int value)
{
    if (isFull())
    {
        printf("Error.Stack is full.\n");
    }
    else
    {
        stack[top] = value;
        printf("%d\n", stack[top]);
        top++;
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
}
