#include<stdio.h>
#include<stdlib.h>

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
  temp->next=0;
   if(head==0)
    head=temp;
   else
    {
     node *temp1=head;
     while((temp1->next)!=0)
      {
        temp1=temp1->next;
      }
    temp1->next=temp;
    }
 }

void pop()
{
 node *ptr,*prev;
 ptr=head;
 if(ptr->next!=0)
 {
  while(ptr->next!=0)
  {
   prev=ptr;
   ptr=ptr->next;
  }
  prev->next=ptr->next;
  free(ptr);
 }
 else
 {
  head=0;
  free(ptr);
 }
}

void display()
 {
  node *temp=head;
  printf("Now the stack is : ");
  while(temp!=0)
   {
    printf("%d ",temp->data);
    temp=temp->next;
   }
 }


void main()
{
 int n=1,x;
 while(n!=0)
 {
  printf("Enter 1 to push the element from the stack.....\nEnter 2 to pop the element from the stack......\nEnter 0 to stop the stack    operation.........\n");
  scanf("%d",&n);
  if(n==1)
  {
   printf("Enter the element you wish to push ........\n");
   scanf("%d",&x);
   push(x);
   display();
   printf("\n");
  }
  else if(n==2)
  {
   if(head==0)
    printf("There are no elements in stack to pop out.....\n");
   else
   {
    pop();
    display();
    printf("\n");
   }
  }
  else
  {
   printf("..................THANK YOU FOR USING STACK.........\n..............Terminated Normally...........\n");
   return;
  }
 }
}
