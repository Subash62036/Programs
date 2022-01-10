#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max],top=-1;
void push();
void pop();
void display();
void main()
{
 int a;
 clrscr();

 while(1)
 {
    printf("Enter 1-->push, 2-->pop,3-->display,4-->exit");
   scanf("%d",&a);
   switch(a)
   {
    case 1:
      push();
      break;
    case 2:
      pop();
      break;
    case 3:
      display();
      break;
    case 4:
      exit(0);
    default:
      printf("please enter valid input");
      break;
    }
  getch();
 }
}

void push()
 {
   if(top==max-1)
   {
    printf("stack overflow");
   }
  else
   {
   top++;
    scanf("%d",&stack[top]);
    printf("Successfully Pused data");
    }
 }
void pop()
  {
   if(top==-1)
    {
     printf("stack underflow");
     }
    else
    {
     printf("Succefully poped %d",stack[top]);
     top--;
    }
  }
void display()
{
  int i;
 if(top==-1)
  {
   printf("stack is empty");
  }
  else
  {
   i=top;
   while(i>=0)
    {
     printf("%d\n",stack[top]);
     i--;
    }
  }
}

