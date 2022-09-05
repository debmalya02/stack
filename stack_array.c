#include <stdio.h>
#include <stdlib.h>
#define size 5
int top = -1;
int arr[size];
void push()
{
    int n;
    if (top == size-1)
    {
        printf("The stack is full\n");
        return;
    }
    else
    {
        printf("Enter the data to push : ");
        scanf("%d", &n);
        arr[++top] = n;
        return;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("THe stack is empty\n");
        return;
    }
    else
    {
        printf("Popped item is : %d", arr[top--]);
        return;
    }
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("The stack is empty\n");
        return;
    }
    else
    {
        printf("The elements of the stack is : ");
        for (i = 0; i <= top; i++)
        {
            printf("%d", arr[i]);
        }
        return;
    }
}
int main()
{
    int ch,f;
    system("clear");
    while (f)
    {
        printf("\nEnter your choise \n(1) Push an item\n(2) Pop an item\n(3) Display an item\n(0)Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 0:
            f=0;
            break;
        default:
            printf("Invalid input");
            break;
        }
    }
}