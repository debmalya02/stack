#include <stdio.h>
#include<stdlib.h>
#define size 100
struct stack
{
    int top;
    int arr[size];
};
void push(struct stack *st, int a)
{
    if (st->top > size)
        printf("\nThe stack is overflow");
    else
    {
        st->arr[++st->top] = a;
    }
}
int pop(struct stack *ptr)
{
    int item;
    if (ptr->top == -1)
    {
        printf("\nThe stack is underflow");
        exit(0);
    }
    else
    {
        item = ptr->arr[ptr->top--];
    }
    return item;
}
void display(struct stack *ptr)
{
    int i;
    if (ptr->top < 0)
        printf("\nThe array is empty");
    else
    {
        printf("\nThe stack is : ");
        for (i = 0; i <= ptr->top; i++)
            printf("%d ", ptr->arr[i]);
    }
}
int main()
{
    int ch, a, f = 1;
    struct stack st;
    st.top = -1;
    while (f)
    {
        system("clear");
        printf("\nEnter your choise \n\t(1) -> Push \n\t(2) -> pop \n\t(3) -> Display \n\t(0) -> Exit \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter the data to push : ");
            scanf("%d", &a);
            push(&st, a);
            break;
        case 2:
            printf("\nThe poped item is : %d", pop(&st));
            break;
        case 3:
            display(&st);
            break;
        case 0:
            f = 0;
            break;
        default:
            printf("\n!!! Invalid choise !!!");
            break;
        }
    }
}