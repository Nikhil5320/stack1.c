#include<stdio.h>
#define max 3
struct pump
 {
   int lit;
   int dis;
 };
 struct pump a[max];

void display(int n,int *front,int *rear)
{
  for(n=*front;n<=(*rear);n++)
  {
   printf("(%d,%d) ",a[n].lit,a[n].dis);
  }
  printf("\n");
}
void enque(int *front,int *rear)
{
 int x,y;
 if((*rear==(max-1) && *front==0) || (*front==*rear+1))
  {
   printf("NO more places for pumps!!\n");
   return;
  }
  printf("enter the capacity of pump in liters to be added to the Q\n");
  scanf("%d",&x);
  printf("enter the distance of next pump from this pump in kms \n");
  scanf("%d",&y);
 if(*front==-1 && *rear==-1)
  {
   *front=*rear=0;
   a[*rear].lit=x;
   a[*rear].dis=y;
  }
else
  {
   *rear=(*rear+1)%max;
   a[*rear].lit=x;
   a[*rear].dis=y;
  }
}

void calculate()
{
  for(int i=0;i<max;i++)
  {
    int petrol=0;
    int r=i,d=0;
      for(int j=0;j<max;j++)
      {
        petrol=petrol+a[r].lit;
        if(petrol<a[r].dis)
         break;
        else
        {
          petrol=petrol-a[r].dis;
          r=(r+1)%max;
          d=d+1;
        }
      }
      if(d==max)
      {printf("Truck can complete one full round if it starts from the pump%d\n",i+1);
       return;}
  }
  printf("There is no pump in the circle from which u can start and complete one full circle\n");
}

void main()
{

 int f,*front=-1,*rear=-1,n=0;
 while(n<4)
 {
  printf("Enter 1: for adding pump in the circle\n2: for to know the ordered info of pumps elements\n3 : to calculate the stating pump so that the tanker completes one full circle\n5 :for to exit the process\n");
  scanf("%d",&n);
  switch(n)
    {
     case 1 :
              enque(&front,&rear);
              break;
     case 2 : display(n,&front,&rear);
             break;
     case 3 : calculate();
              break;
     default : printf("invalid input");
              break;
    }
  }
}
