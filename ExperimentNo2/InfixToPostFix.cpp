#include <stdio.h>
#include <string.h>

char stack[10], val;
int top = -1;
int size = 10;
int i, j, k;

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

void push(char val)
{
    if (isStackFull())
    {
        printf("Stack is FULL!\n");
    }
    else
    {
        top++;
        stack[top] = val;
    }
}

char pop()
{
    if (isStackEmpty())
    {
        printf("Stack is Empty!!\n");
    }
    else
    {
        val = stack[top];
        top--;
    }
    return val;
}

int stackTop()
{
    if (isStackEmpty())
    {
        printf("Stack is Empty!!\n");
    }
    else
    {
        val = stack[top];
    }
    return val;
}

int precedence(char ch)
{
    switch (ch)
    {
    case '(':
        val = 0;
        break;
    case '+':
    case '-':
        val = 1;
        break;
    case '*':
    case '/':
        val = 2;
        break;
    }
    return val;
}

int main()
{
    char infix[10], postfix[10];
    char ip, pp, pinc, next;
    int len;
    int i, p = 0;
    printf("Enter Your Infix Expression: ");
    scanf("%s", infix);
    len = strlen(infix);
    for (i = 0; i <= len; i++)
    {
        ip = infix[i];
        switch (ip)
        {
        case '(':
            push(ip);
            break;
        case ')':
            while ((next = pop()) != '(')
            {
                postfix[p++] = next;
            }
            break;
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
            while ((isStackEmpty() != 1) && (precedence(ip) <= precedence(stackTop())))
            {
                postfix[p++] = pop();
            }
            push(ip);
            break;
        default:
            postfix[p++] = ip;
        }
    }
    while (!isStackEmpty())
    {
        postfix[p++] = pop();
    }
    printf("Postfix Expression is : ");
    for (i = 0; i < p; i++)
    {
        printf("%c", postfix[i]);
    }
    return 0;
}