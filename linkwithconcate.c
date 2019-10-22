#include<stdio.h>
#include<stdlib.h>

typedef struct node
 {
  int data;
  struct node *next;
 }node;
node *head=0;
node *head1=0;

void insert_rear1(int x)
 {
  node *temp;
  temp=(node*)malloc(sizeof(node));
  temp->data=x;
  temp->next=0;
   if(head1==0)
    head1=temp;
   else
    {
     node *temp1=head1;
     while((temp1->next)!=0)
      {
        temp1=temp1->next;
      }
    temp1->next=temp;
    }
 }

void insert_rear(int x)
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

void insert_front(int x)
 {
  node *temp;
  temp=(node*)malloc(sizeof(node));
  temp->data=x;
  temp->next=head;
  head=temp;
 }

void delete_rear()
{
 node *ptr,*prev;
 ptr=head;
 if(head->next==0)
  delete_front();
 while(ptr->next!=0)
 {
  prev=ptr;
  ptr=ptr->next;
 }
 prev->next=ptr->next;
 free(ptr);
}

void delete_front()
{
 node *temp=head;
 temp=head;
 head=head->next;
 free(temp);
}

void delete_pos(int n)
{
 int i;
 node *ptr,*prev;
 ptr=head;
 else
 {
  if(n==1)
  delete_front();
  for(i=1;i<n;i++)
  {
   prev=ptr;
   ptr=ptr->next;
  }
 }
 prev->next=ptr->next;
 free(ptr);
}

void insert_pos(int n,int x)
{ 
 int i;
 node *temp;
 temp=(node*)malloc(sizeof(node));
 temp->data=x;
 node *ptr,*prev;
 ptr=head;
 for(i=1;i<n;i++)
 {
  prev=ptr;
  ptr=ptr->next;
 }
 prev->next=temp;
 temp->next=ptr;
}

void sort_list()
{
   node *ptr,*tempi,*tempj;
   int i;
   tempi=head;
   while(tempi->next!=0)
   {
    tempj=head;
    while(tempj->next!=0)
    {
      if((tempj->data)>(tempj->next->data))
      {
        i=tempj->data;
        tempj->data=tempj->next->data;
        tempj->next->data=i;
      }
     tempj=tempj->next;
    }
    tempi=tempi->next;
   }
}

void insert_sort(int x)
{
 sort_list();
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

void reverse()
{
 node *prev=0;
 node *temp=head;
 node *tempst;
 while(temp!=0)
 {
  tempst=temp->next;
  temp->next=prev;
  prev=temp;
  temp=tempst;
 }
 head=prev;
}

void concate()
{
 node *temp;
 temp=head;
 while(temp->next!=0)
 {
  temp=temp->next;
 }
 temp->next=head1;
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

void display1()
 {
  node *temp=head1;
  while(temp!=0)
   {
    printf("%d ",temp->data);
    temp=temp->next;
   }
 }
void main()
{
 int x=1,n;
  while(n!=0)
    {
      printf("\nenter 1 : for inserting the element at the end of list....\nEnter 2 : for inserting the element at the beginning of list.....\nEnter 3 : for deleting the last element of the list......\nEnter 4 : for deleting the first element of the list......\nEnter 5 : for deleting the element of the list at specified position......\nEnter 6 : for inserting the element at the specified position of the list......\nEnter 7 : for sorting the list in acsending order......\nEnter 8 : for to insert the element in sorted position....\nEnter  9 :for reversing the existing list....\nEnter 10 :for concatenating with the the list with head1....\nEnter 11 :for to insert element to the list with head1....\nEnter 0 :for to terminate....\n");
      scanf("%d",&n);
      switch(n)
      {
        case 1 :printf("Enter the element u want to insert\n");
                scanf("%d",&x);
                insert_rear(x);
                printf("Now the list is : ");
                display();
                break;
        case 2 :printf("Enter the element u want to insert\n");
                scanf("%d",&x);
                insert_front(x);
                printf("Now the list is : ");
                display();
                break;
        case 3 :delete_rear();
                printf("Now the list is : ");
                display();
                break;
        case 4 :delete_front();
                printf("Now the list is : ");
                display();
                break;
        case 5 :printf("Specify the position of deleting\n");
                scanf("%d",&x);
                delete_pos(x);
                printf("Now the list is : ");
                display();
                break;
        case 6 :printf("Specify the position of deleting\n");
                scanf("%d",&n);
                printf("Enter the element u want to insert\n");
                scanf("%d",&x);
                insert_pos(n,x);
                printf("Now the list is : ");
                display();
                break;
         case 7 :sort_list();
                printf("Now the list is : ");
                display();
                break;
         case 8 :printf("Enter the element u want to insert\n");
                scanf("%d",&x);
                insert_sort(x);
                printf("Now the list is : ");
                display();
                break;
         case 9 :reverse();
                printf("Now the list is : ");
                display();
                break;
         case 10 :concate();
                 printf("Now the list is : ");
                 display();
                break;
         case 11 :printf("Enter the element u want to insert\n");
                scanf("%d",&x);
                insert_rear1(x);
                printf("Now the list with head1 is : ");
                display1();
                break;
        default :printf("INVALID INPUT!!\n");
      }
     printf("\n..$$...$$$$.....END.........$$$$$$.......\n\n");
    }
}
