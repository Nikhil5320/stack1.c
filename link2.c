#include<stdio.h>
typedef struct node
 {
   int data;
   struct node *next;
 }node;

node *head=0;

void insert(int x)
{
 node *temp,*ptr1;
 temp=(node*)malloc(sizeof(node));
 temp->data=x;
 temp->next=0;
 if(head==0)
 {
  head=temp;
 }
 else
 {
  node *ptr=head;
  if((ptr->data)>x)
   {
    head=temp;
    temp->next=ptr;
   }
  else
  {
   while((ptr->data)<x)
   {
    ptr1=ptr;
    ptr=ptr->next;
    if(ptr==0)
     break;
   }
   ptr1->next=temp;
   temp->next=ptr;
  }
 }
}

void display()
 {
  node *temp=head;
  while(temp!=0)
   {
    printf("%d  ",temp->data);
    temp=temp->next;
   }
 }

void main()
{
 int n=0,x;
 while(n<2)
 {
  printf("enter : 1 to insert the element as sorted list\n");
  scanf("%d",&n);
  switch(n)
   {
     case 1 : printf("Enter the element u want to insert\n");
              scanf("%d",&x);
              insert(x);
              printf("NOW THE SORTED LIST IS : ");
              display();printf("\n");break;
    default : printf("Invalid Input!!\n");
   }
 }
}
