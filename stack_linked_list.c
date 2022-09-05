#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int info;
    struct stack *link;
};
struct stack *top = NULL;
void push(int a)
{
    struct stack *temp = (struct stack *)malloc(sizeof(struct stack *));
    temp->info = a;
    temp->link = top;
    top = temp;
}
void pop()
{
    struct stack *temp;
    if (top == NULL)
        printf("\n\t\t\t The stack is Empty");
    else
    {
        printf("\n\t\t\tPoped item is : %d", top->info);
        temp = top;
        top = top->link;
        free(temp);
    }
}
void display()
{
    struct stack *temp;
    temp = top;
    if (temp == NULL)
        printf("\n\t\t\t The stack is Empty");
    else
    {
        printf("\n\t\tNow the stack is : ");
        while (temp != NULL)
        {
            printf("%d ", temp->info);
            temp = temp->link;
        }
    }
}
int main()
{
    int data, ch, f = 1;
    while (f)
    {
        system("clear");
        printf("\n\n\t\t\t Enter Your choise \n\t\t\t\t(1) to Push \n\t\t\t\t(2) to Pop \n\t\t\t\t(3) to display \n\t\t\t\t(0) to exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n\t\tEnter the item to push :");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 0:
            f = 0;
            break;
        default:
            printf("\n\t\t\tInvalid input");
            break;
        }
    }
}