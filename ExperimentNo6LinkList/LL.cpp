#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
int main()
{
    printf("Hello world!");
}
void createLL(int val)
{
    struct node *newnode, *tn;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        tn = start;
        while (tn->next != NULL)
        {
            tn = tn->next;
        }
        tn->next = newnode;
    }
}

// insert at the beginning
int insertAtBeginning(int val)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node *));
    newnode->data = val;
    newnode->next = start;
    start = newnode;
}

// insert At the middle in LL
int insertAtMiddle(int val, int snv)
{
    struct node *newnode, *tn;
    tn = start;
    while (tn != NULL)
    {
        if (tn->data == snv)
        {
            newnode = (struct node *)malloc(sizeof(struct node *));
            newnode->data = val;
            newnode->next = tn->next;
            tn->next = newnode;
            return;
        }
        tn = tn->next;
    }
    printf("Node Not Found!\n");
}
void insertAtEnd(int val)
{
    struct node *newnode, *tn;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    tn = start;
    while (tn->next != NULL)
    {
        tn = tn->next;
    }
    tn->next = newnode;
}

void deleteAtbeginning(){

}
