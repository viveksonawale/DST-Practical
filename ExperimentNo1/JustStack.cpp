#include <stdio.h>
// declareing the varibles for stack
int size = 5;
int top = -1;
int val;
int choice;
int STACK[5];
int i;
int j;
int k;

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

void push(int val)
{
    if (isStackFull())
    {
        printf("\n Stack is FULL!!!\n");
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
        printf("\n Stack is EMPTY!!!\n");
    }
    else
    {
        val = STACK[top];
        top--;
    }
    return val;
}

int displayTop()
{
    if (isStackEmpty())
    {
        printf("\n Stack is EMPTY!!!\n");
    }
    else
    {
        val = STACK[top];
        printf("\n %d is the top\n", val);
    }
}

int displayStack()
{
    if (isStackEmpty())
    {
        printf("\n Stack is EMPTY!!!\n");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            val = STACK[i];
            printf("%d\n", val);
        }
    }
}

int main()
{

    do
    {
        printf("\n+++++STACK OPERATION+++++\n");
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.IS STACK EMPTY\n");
        printf("4.IS STACK FULL\n");
        printf("5.DISPLAY TOP\n");
        printf("6.DISPLAY THE STACK\n");
        printf("7.EXIT\n");
        printf("\nEnter the Choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the Number:");
            scanf("%d", &val);
            push(val);
            break;
        case 2:
            val = pop();
            printf("Element Deleted Successfully:%d", val);
            break;
        case 3:
            j = isStackEmpty();
            if (j == 1)
            {
                printf("STACK IS EMPTY!!!\n");
            }
            else
            {
                printf("STACK IS NOT EMPTY!!");
            }
            break;
        case 4:
            k = isStackFull();
            if (k == 1)
            {
                printf("STACK IS FULL!!!\n");
            }
            else
            {
                printf("STACK IS NOT FULL!!\n");
            }
            break;
        case 5:
            displayTop();
            break;

        case 6:
            displayStack();
            break;

        case 7:
            printf("THANKS!");
            break;
        }
    } while (choice != 7);
    // return 0;
}
