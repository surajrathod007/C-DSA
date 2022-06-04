#include<conio.h>
#include<stdio.h>
#include<malloc.h>

#define size 5

void insertq(int[],int);
void deleteq(int[]);
void display(int[]);

int front = -1;
int rear = -1;

void main()
{

    int n,ch;
    int queue[size];

    do
    {
        /* code */

        printf("\n\n Queue:\n1. Insert \n2. Delete \n3. Display \n0. Exit");
        printf("\nEnter choice : ");
        scanf("%d",&ch);

        switch(ch)
        {

            case 1:
                    printf("\nEnter number : ");
                    scanf("%d",&n);
                    insertq(queue,n);
                    break;

            case 2:
                    deleteq(queue);
                    break;
                
            case 3:
                    display(queue);
                    break;
        }
    } while (n!=0);
    
}

void insertq(int queue[],int item)
{

    if((rear>= size))
    {
        printf("\nQueue overflow ");
        return;
    }else if(front==-1)
    {
        front = 0;
        rear = 0;
    }else{
        rear++;
    }

    queue[rear] = item;
}

void display(int queue[])
{
    int i;
    printf(" ");

    if(front== -1 && rear == -1)
    {
        printf("\nQueue is empty : ");
    }else{

        for(i = front; i<=rear; i++)
        {
            printf("%d ",queue[i]);
        }
    }
}

void deleteq(int queue[])
{
    if(front==-1)
    {
        printf("\nQueue is underflow");
    }else if(front == rear)
    {
        printf("%d id deleted ",queue[front]);
        front = rear = -1;
    }else{

        printf("\n %d is deleted ",queue[front]);
        front++;
    }
}