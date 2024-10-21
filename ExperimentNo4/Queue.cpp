#include <stdio.h>
int QUEUE[5];
int front = 0;
int rear = -1;
int i, j, k;
int size = 5;
int val;
int choice;

int isQueueFull()
{
    if (rear == (size - 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isQueueEmpty()
{
    if (rear <= 0 || front > rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// insert an element
void equeue(int val)
{
    if (isQueueFull())
    {
        printf("Queue is OverFlow!!\n");
    }
    else
    {
        rear++;
        QUEUE[rear] = val;
        printf("");
    }
}
int dequeue()
{
    if (isQueueEmpty())
    {
        printf("Queue is UnderFlow!!\n");
    }
    else
    {
        val = QUEUE[front];
        front++;
        return val;
    }
}
int displayQueueFront()
{
    if (isQueueEmpty())
    {
        printf("Queue is UnderFlow!!\n");
    }
    else
    {
        val = QUEUE[front];
        return val;
    }
}
int displayQueueRear()
{
    if (isQueueEmpty())
    {
        printf("Queue is UnderFlow!!\n");
    }
    else
    {
        val = QUEUE[rear];
        return val;
    }
}
void display()
{
    if (isQueueEmpty())
    {
        printf("Queue is UnderFlow!!\n");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            val = QUEUE[i];
            printf(" %d ", val);
        }
    }
}

int main()
{
    do
    {
        printf("\n+++++++++Queue Operations++++++\n");
        printf("Enter Your Choice:\n");
        printf("1.ENQUEUE\n");
        printf("2.DEQUEUE\n");
        printf("3.IS QUEUE UNDERFLOW\n");
        printf("4.IS QUEUE OVERFLOW\n");
        printf("5.DISPLAY FRONT\n");
        printf("6.DISPLAY REAR\n");
        printf("7.DISPLAY QUEUE\n");
        printf("8.EXIT\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the Number:");
            scanf("%d", &val);
            equeue(val);
            break;
        case 2:
            val = dequeue();
            printf("%d is deleted", val);
            break;
        case 7:
            display();
            break;
        default:
            break;
        }

    } while (choice != 8);

}