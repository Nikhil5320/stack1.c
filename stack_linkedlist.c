#include <stdio.h>
#include <stdlib.h>

typedef struct node
 {
  int data;
  struct node *next;
 }node;
node *head=0;

void push(int x)
 {
  node *temp;
  temp=(node*)malloc(sizeof(node));
  temp->data=x;
  temp->next=head;
  head=temp;
 }

 void pop()
{
 if(head==0)
 {
    printf("Stack is empty\n");
    return;
 }
 else
 {
  node *temp=head;
  temp=head;
  head=head->next;
  free(temp);
 }
}

int top()
{
    if(head==0)
    {
      printf("Stack is empty\n");
      return;
    }
    else
      return(head->data);
}

void display()
 {
  node *temp=head;
  while(temp!=0)
   {
    printf("%d ",temp->data);
    temp=temp->next;
   }
   printf("\n");
 }

void main()
{
    int n=1,x;
    while(n!=0)
    {
        printf("Enter 1 to push an element to the stack.....\nEnter 2 to pop out an element from the stack......\nEnter 3 to know the top element of the stack........\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1 :printf("Enter the element you want to push\n");
                    scanf("%d",&x);
                    push(x);
                    printf("STACK ELEMENTS : ");
                    display();break;
            case 2 :pop();
                    printf("STACK ELEMENTS : ");
                    display();break;
            case 3 :printf("%d\n",top());break;
            case 0 :return;
            default : printf("INVALID INPUT!!>>>>>");

        }
    }
}

