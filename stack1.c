#include<stdio.h>
#define max 10
int top=-1;
int item[max];

int full()
{
    if(top==max-1)
    return 1;
    else
    return 0;
}
int empty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}
void push(int x)
{
    if(full()==1)
    printf("the stack is full\n");
    else
    item[++top]=x;
}
void pop()
{
    if(empty()==1)
    printf("there are no elements in stack\n");
    else
    top=top-1;
}


void print()
{
    int i;
    printf("edited stack is :\n");
    for(i=0;i<=top;i++)
    printf("%d ",item[i]);
}
main()
{   int n,x;
    printf("enter :1 for push,:2 for pull, : 3 to know the current stack\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("enter the element to be added\n");
                scanf("%d",&x);
                push(x);print();
                break;
        case 2: pop();print();
                break;
        case 3: print();
                break;
        default : printf("invalid input\n");
    }
}
