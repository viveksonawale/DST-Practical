#include <stdio.h>

// declaring the varibles here...
int size = 5;
int top = -1;
int val;
int choice;
int STACK[5];
int i;
int j;
int k;

// declaring all the operation like isStackFull,isStackEmpty,PUSH,POP,Peek

int isStackFull()
{
    if (top == (size - 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isStackEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(int val)
{
    if (isStackFull())
    {
        printf("Stack is Full!\n");
    }
    else
    {
        top++;
        STACK[top] = val;
    }
}

int pop()
{
    if (isStackEmpty())
    {
        printf("Stack is Empty!\n");
    }
    else
    {
        val = STACK[top];
        top--;
    }
}

int displayTop()
{
    if (isStackEmpty())
    {
        printf("Stack is Empty!\n");
    }
    else
    {
        val = STACK[top];
        printf("%d\n",val);
    }
}

int displayStack()
{
    if (isStackEmpty())
    {
        printf("Stack is Empty!\n");
    }
    else
    { 
        
        //declaring the i = top because we want to print the stack as it is.
        for (i = top; i >= 0; i--)
        {
            val = STACK[i];
            printf("%d\n", STACK[i]);
        }
    }
}

// this is void function this will execute first in program 
void main()
{
    do
    {
        printf("Enter Your Choice:\n");
        printf("1.Push\n2.Pop\n3.StackIsEmpty\n4.StackIsFull\n5.Display Stack\n6.Display the Peek\n7.Exit\n");
        printf("\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the Value that you want to insert:\n");
            scanf("%d", &val);
            push(val);
            break;

        case 2:
            val = pop();
            printf("Pop Value is = %d\n", val);
            break;

        case 3:
            k = isStackEmpty();
            if (k == 1)
                printf("Stack is Empty\n");
            else
                printf("Stack is not Empty\n");
            break;

        case 4:
            j = isStackFull();
            if (j == 1)
                printf("Stack is Full\n");
            else
                printf("Stack is not Full\n");
            break;

        case 5:
            displayStack();
            break;

        case 6:
            val = displayTop();
            printf("Top is = %d\n", val);
            break;

        case 7:
            printf("Exiting the Program!\n");
            break;
        }
    } while (choice != 7);
}