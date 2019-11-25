#include <stdio.h>
#include <stdlib.h>

typedef struct node
 {
  int data;
  struct node *next;
 }node;
node *head=0;


 void enqueue(int x)
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

void dequeue()
{
 if(head==0)
 {
     printf("Queue is empty!!\n");
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
         printf("Enter 1 t0 Enqueue......\nEnter 2 to dequeue........\nEnter 0 to terminate.....\n");
         scanf("%d",&n);
         switch(n)
         {
             case 1 :printf("Enter the element you want to add to the queue\n");
                     scanf("%d",&x);
                     enqueue(x);
                     printf("QUEUE : ");
                     display();break;
             case 2 :dequeue();
                     printf("QUEUE : ");
                     display();break;
             case 0 :return;
             default :printf("INVALID INPUTT!!!........");

         }
     }
 }
