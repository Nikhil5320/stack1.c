#include<stdio.h>
typedef struct node
{
  int data;
  struct node *next;
}node;

node *head=0;

void insert(x)
{
 node *temp;
 temp=(node*)malloc(sizeof(node));
 temp->next=head->next;
 head=temp;
}

void sort()
{

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

void display()
 {
  node *temp=head;
  while(temp!=0)
   {
    printf("%d ",temp->data);
    temp=temp->next;
   }
 }

void dlt_rep()
{
 node *temp;
 temp=head;
 while(temp->next!=0)
 {
  if((temp->data)==(temp->next->data))
    temp->next=temp->next->next;
  temp=temp->next;
 }
}

int main()
{
 int n=2,x;
 while(n!=0)
 {
  printf("Enter : 1 to add elements to the string.......\nEnter : 0 To stop adding........\n");
  scanf("%d",&n);
  if(n==0)
    break;
  else
  {
    printf("Enter the element to be added\n");
    scanf("%d",&x);
    insert(x);
    display();
  }
 }
 printf("Now the list by sorting and deleting the repeated elements is : \n");
 sort_list();
 dlt_rep();
 display();
 return 0;
}
