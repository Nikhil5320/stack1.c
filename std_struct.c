#include<stdio.h>
#include<string.h>
#define max 10
int top=-1;
struct std
{
 char name[25];
 char usn[10];
 char mob[10]
};
struct std std[max];

int full()
{
    if(top==max-1)
    return 1;
    else
    return 0;
}
int empty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}
void push(char a[],char b[],char c[])
{
    if(full()==1)
    printf("the stack is full\n");
    else
    {
     top=top+1;
     strcpy(std[top].name,a);
     strcpy(std[top].usn,b);
     strcpy(std[top].mob,c);
    }
}
void pop()
{
    if(empty()==1)
    printf("there are no elements in stack\n");
    else
    top=top-1;
}


void print()
{
    int i;
    printf("ORDERD list 0f students is :\n");
    for(i=0;i<=top;i++)
    {
     printf("%d. %s || ",(i+1),std[i].name);
     printf(" %s || ",std[i].usn);
     printf(" %s\n",std[i].mob);
    }
    printf("..........................................,,,.................\n");
}
main()
{   int n;
    char a[25],b[10],c[10];
 while(n!=0)
 {
    printf("Enter :1 for allowing the student inside\nEnter :2 for leaving the student out\nEnter 3 : to know the current order of students\nEnter :0 to terminate\n");
    scanf("%d",&n);
      switch(n)
    {
        case 1: printf("enter the name of the student entering\n");
                scanf("%s",&a);
                printf("enter the usn of the student entering\n");
                scanf("%s",&b);
                printf("enter the mobile no of the student entering\n");
                scanf("%s",&c);
                push(a,b,c);
                break;
        case 2: pop();
                break;
        case 3: print();
                break;
        default : printf("invalid input\n");
    }
  }
}
