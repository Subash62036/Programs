// stack implementation using linked list ;
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
     int data;
     struct node *next;
};

struct node *top=NULL;
void push();
void pop();
void display();

// main function
 
void main()
{
     int option;
     while(1)
     {
          printf("Enter 1--> Push(),2-->Pop(),3-->Display(),4-->Exit");
          scanf("%d",&option);
          switch(option)
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
              default : 
                printf("Please choice valid input...!!!! ...Try Again");
          }
     }
     getch();
}

void push()
{   int value;
    struct node *newnode;
    newnode=( struct node*)malloc(sizeof(struct node));
    printf("Enter a value for push !!");
    scanf("%d",&value);

    newnode->data=value;
    
    if(top==NULL)
       newnode->next=NULL;
    else
      {
         newnode->next=top;
         top=newnode;
         
      }
     printf("data successfully added!!");
}

// pop function body()
void pop()
{
    struct node * temp;
    temp=top;
     if(top==NULL)
        printf("Stack is empty or underflow !!!");
     else
      
      printf("%d has successfully deleted !!!",temp->data);
      top=temp->next;
      free(temp);
       
}

// Body of display() 

void display()
{
     struct node *temp;
     temp=top;
     if(top==NULL)
        printf("empty!!!!");
    else
    {
     while(temp->next !=NULL)
      {
          printf("%d\n",temp->data);
          temp=temp->next;
      }
    }
}















