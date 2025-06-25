#include <stdio.h>
#define MAX_SIZE 5

int top = 0;
int stack[MAX_SIZE];

int isFull()
{
    if (top == MAX_SIZE)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if (top == 0)
        return 1;
    else
        return 0;
}

void printStack()
{
    if (isEmpty())
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack elements: ");
        for (int i = 0; i < top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

void push()
{
    if (isFull())
    {
        printf("Error. Stack is full.\n");
    }
    else
    {
        int value;
        printf("Enter value to push: ");
        scanf("%d", &value);
        stack[top] = value;
        top++;
        printf("%d pushed to stack.\n", value);
    }
}

int main()
{
    char inpt;
    printf("Initial stack:\n");
    printStack();

    do
    {
        printf("Do You want to add an element? (y/n): ");
        scanf(" %c", &inpt); // Added space before %c to skip whitespace
        if (inpt == 'y')
        {
            push();
            printf("Stack after push:\n");
            printStack();
        }
    } while (inpt == 'y');

    return 0;
}
