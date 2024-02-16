#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define max 5
int callid;
int Q[max];
int front=-1,rear=-1;
int ele;

void insert(int ele);
void delete();
void display();

int main()
{
    int c;
    while(1)
    {
        printf("Enter choice:\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d",&c);
        
        switch(c)
        {
            case 1:
            printf("Enter callerid: ");
            scanf("%d",&callid);
            insert(callid);
            break;
            
            case 2:
            delete();
            break;
            
            case 3:
            display();
            break;
            
            case 4:
            exit(0);
            break;
            
            default:
            printf("Invalid choice");
            break;
            
            
        }
    }
    return 0;
}

void insert(int ele)
{
    if (rear==max-1)
    {
        printf("Overflow!\n");
    }
    else
    {
        if(front==-1)
        {
           front+=1; 
        }
        rear+=1;
        Q[rear]=ele;
        printf("ID added : %d\n",ele);
    }
    
}

void delete()
{
    if (front==-1)
    {
        printf("Underflow!");
        return;
    }
    else
    {
        printf("ID deleted = %d",Q[front]);
        front+=1;
    }
    if(front>rear)
    {
        front=rear=-1;
    }
}

void display()
{
    if(rear==-1)
    {
        printf("Q is Empty\n");
        return;
    }
    printf("Caller ids:\n");
    for (int i=front;i<=rear;i++)
    {
        printf("%d\n",Q[i]);
    }
    
}

