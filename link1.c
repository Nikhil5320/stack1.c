#include<stdio.h>
#include<stdlib.h>

typedef struct node
 {
  int data;
  struct node *next;
 }node;
node *head=0;

insert_rear(int x)
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

insert_front(int x)
 {
  node *temp;
  temp=(node*)malloc(sizeof(node));
  temp->data=x;
  temp->next=head;
  head=temp;
 }
void display()
 {
  node *temp=head;
  while(temp!=0)
   {
    printf("%d ",temp->data);
    temp=temp->next;
   }
 }
void main()
{
 int x=1,n;
 while(x!=0)
 {
  printf("\nenter : 1 for inserting at rear\nenter 2 : for inserting at front\n");
  scanf("%d",&n);
  printf("\nenter the element u want to add other than 0\n");
  scanf("%d",&x);
  if(x!=0)
  {
   if(n==1)
    {
     insert_rear(x);
     printf("now the list is :\n");
    }
   else
    {
     insert_front(x);
     printf("now the list is :\n");
    }
   display();
  }
 }
}
