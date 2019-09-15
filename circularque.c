#include<stdio.h>
#define max 50

int is_full(int *front,int *rear)
{
 if(*rear==(max-1))
  return 1;
 else
  return 0;
}
int is_empty(int *front,int *rear)
{
 if(*front==-1 && *rear==-1)
  return 1;
 else
  return 0;
}
int fr(int *front,int a[])
{
 return a[*front];
}
void display(int n,int a[],int *front,int *rear)
{
  for(n=*front;n<=(*rear);n++)
   printf("%d ",a[n]);
}
void enque(int x,int a[],int *front,int *rear)
{
 if(*front==0 && *rear==(max-1))
  {
   printf("Q is full\n");
   return;
  }
 else if(*front==-1 && *rear==-1)
  {
   *front=*rear=0;
   a[*rear]=x;
  }
else
  {
   *rear=(*rear+1)%max;
   a[*rear]=x;
  }
}
void deque(int a[],int *front,int *rear)
{
   if(*front==-1 && *rear==-1)
   {
    printf("Q is empty");
    return;
   }
  else if(*front=*rear)
   *front=*rear=-1;
  else
   *front=(*front+1)%max;
}

void main()
{
 int a[max],f,*front=-1,*rear=-1,n=0,x;
 while(n<4)
 {
  printf("Enter 1: for enque,2: for deque,3: for to know the que elements,4 :for to exit the process\n");
  scanf("%d",&n);
  switch(n)
    {
     case 1 :  printf("enter the element to be added to the Q\n");
              scanf("%d",&x);
              enque(x,a,&front,&rear);
              break;
     case 2 : deque(a,&front,&rear);
             break;
     case 3 : display(n,a,&front,&rear);
             break;
     default : printf("invalid input");
              break;
    }
  }
}
