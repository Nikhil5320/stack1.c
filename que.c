#include<stdio.h>
#define max 10

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
void display(int a[],int *front,int *rear)
{
  for(int i=*front;i<=(*rear);i++)
    printf("%d ",a[i]);
}
void enque(int x,int a[],int *front,int *rear)
{
 if(*rear==(max-1))
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
   *rear=*rear+1;
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
   *front=*front+1;
}

void main()
{
 int a[max],f,*front=-1,*rear=-1,n=0,x;
while(n<4)
 {
  printf("\nEnter 1: for enque,2: for deque,3: for to know the front element, 4 :for to exit the process\n");
  scanf("%d",&n);
  switch(n)
    {
     case 1 :  printf("enter the element to be added to the Q\n");
              scanf("%d",&x);
              enque(x,a,&front,&rear);
              printf("now the que is : ");
              display(a,&front,&rear);
              printf("\n");
              break;
     case 2 : deque(a,&front,&rear);
              f=fr(&front,a);
              printf("the element %d is removed\n",f);
              printf("now the que is : ");
              display(a,&front,&rear);
              printf("\n");
             break;
     case 3 : f=fr(&front,a);
             printf("The front element= %d\n",f);
             break;
     default : printf("invalid input");
              break;
    }
  }
}
