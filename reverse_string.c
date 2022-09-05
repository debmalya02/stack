#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
    int info;
    struct stack* link;
}*top =NULL;
void push(char *ptr)
{
    struct stack* temp =(struct stack*)malloc(sizeof(struct stack*));
    temp->info= *ptr;
    temp->link=top;
    top=temp;
}
int pop()
{
    struct stack* temp;
    temp=top;
    top=top->link;
    return (temp->info);
}
void reverse(char* ptr, int n)
{
    int i;
    for(i=0;i<n;i++)
        push(&ptr[i]);
    for(i=0;i<n;i++)
    ptr[i]=pop();
}
int main()
{
    char ch[10];
    printf("Enter the string : ");
    scanf("%s",ch);
    reverse(ch,strlen(ch));
    printf("The reverse is : %s",ch);
}