#include<stdio.h>
#define max 50

int is_full(int *front,int *rear)
{
 if(*front==0 && *rear==(max-1))
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
void enque(int x,int a[],int *front,int *rear)
{
 if(is_full(&front,&rear) == 1)
  {
   printf("Q is full\n");
   return;
  }
 else if(is_empty(&front,&rear)==1)
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
   if(is_empty(*front,*rear)==1)
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
 int a[max],f,*front=-1,*rear=-1,n,x;
do
 {
  printf("Enter 1: for enque,2: for deque,3: for to know the front element\n");
  scanf("%d",&n);
  switch(n)
    {
     case 1 :  printf("enter the element to be added to the Q\n");
              scanf("%d",&x);
              enque(x,a,&front,&rear);
              break;
     case 2 : deque(a,&front,&rear);
             break;
     case 3 : f=fr(&front,a);
             printf("The front element= %d",f);
             break;
     default : printf("invalid input");
              break;
    }
  }while(n>3);
} 
   
  
 


