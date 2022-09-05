#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int item[5];
    int front;
    int rear;
};
void push(struct stack *ptr, int data, int ch)
{
    if (ptr->front == ptr->rear - 1)
        printf("stack is overflow");
    else
    {
        switch (ch)
        {
        case 1:
            ptr->item[++ptr->front] = data;
            break;
        case 2:
            ptr->item[--ptr->rear] = data;
            break;
        default:
            printf("invalid input");
            break;
        }
    }
}
void pop(struct stack *ptr, int ch)
{
    switch (ch)
    {
    case 1:
        if (ptr->front == -1)
        {
            printf("stack is underflow");
            return;
        }
        else
        {
            printf("Poped item is : %d", ptr->item[ptr->front--]);
            return;
        }
        break;
    case 2:
        if (ptr->rear == 5)
        {
            printf("stack is underflow");
            return;
        }
        else
        {
            printf("Poped item is : %d", ptr->item[ptr->rear++]);
            return;
        }
        break;
    }
}
void display(struct stack *ptr)
{
    int i;
    printf("\n\t\t\t");
    for (i = 0; i < 5; i++)
    {
        printf("-------");
    }
    printf("\n\t\t\t");
    for (i = 0; i <= ptr->front; i++)
    {
        printf("|%5d", ptr->item[i]);
    }
    for (i = ptr->front + 1; i < ptr->rear; i++)
    {
        printf("|      ");
    }
    for (i = ptr->rear; i < 5; i++)
    {
        printf("|%5d", ptr->item[i]);
    }
    printf("|");
    printf("\n\t\t\t");
    for (i = 0; i < 5; i++)
    {
        printf("-------");
    }
}
int main()
{
    int ch, ch2, ch3, n, flag = 1;
    struct stack *st;
    st->front = -1;
    st->rear = 5;
    system("clear");
    while (flag)
    {
        printf("\n\t\tEnter Your choise : \n\t\t\t(1) for push.\n\t\t\t(2) for pop.\n\t\t\t(3) for display.\n\t\t\t(0) for exit.\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the data : ");
            scanf("%d", &n);
            printf("Where do you want to push the data : \n(1) for front.\n(2) for rear\n");
            scanf("%d", &ch2);
            push(st, n, ch2);
            break;
        case 2:
            printf("Where do you want to pop : \n(1) for front.\n(2) for rear\n");
            scanf("%d", &ch3);
            pop(st, ch3);
            break;
        case 3:
            display(st);
            break;
        case 0:
            flag = 0;
            break;
        default:
            printf("!!! Enter a valid input !!! ");
            break;
        }
    }
}
