// Queue Implementation With Array
#include<stdio.h>
#include<stdlib.h>
#define max 5
int rear=-1,front=-1;
int queue[max];
void insert();
void del();
void display();
void main()
{
 int option;
 while(1)
  {
    printf("Enter 1-->insertion 2-->deletion 3--->display 4-->exit");
    scanf("%d",&option);
    switch(option)
    {
     case 1:
      insert();
      break;
     case 2:
      del();
      break;
     case 3:
      display();
      break;
     case 4:
      exit(0);
     default:
      printf("Please Enter Valid Option");
      break;
    }
    getch();
  }
}
// insert method body
void insert()
{
 if(rear==max-1)
  {
   printf("Queue OverFlow!!!!");
  }
 else
  {
    if(front==-1)
     {
      front=0;
     }
     rear++;
     scanf("%d",&queue[rear]);
     printf("Successfully inserte");
   }
 }
 // del(); body
void del()
{
 if(front==-1)
   {
    printf("Queue is empty");
   }
  else
  {
   printf("data successfully deleted %d",queue[front]);
   front++;
  }
}
// display() body
void display()
{
  int i;
  if(front==-1)
    {
     printf("UnderFlow or empty");
    }
  else
  {
   for(i=front;i<=rear;i++)
    {
     printf("%d\n",queue[i]);
    }
  }
}

